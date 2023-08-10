#include "_create_team.h"
#include "malloc.h"
#include "random.h"
#include "pokemon.h"
#include "event_data.h"
#include "constants/flags.h"

static u8 *InitTypeFactors(void);
static void UpdateTypeFactors(const struct Pkmn *pkmn, u8 *TypeFactors);
static u8 GetTypeFactor(const struct Pkmn *pkmn, u8 *TypeFactors);
static u8 GetBSTFactor(const struct Pkmn *pkmn, const struct Pkmn *last_pkmn);
static u8 CheckForDuplicatePokemon(const struct Pkmn *new_pkmn, const struct Pkmn **team);
static const struct Pkmn *GeneratePokemon(u8 slot, u8 *TypeFactors, const struct Pkmn **team);
static const struct Pkmn **CreateTeam(void);
static const struct Move *GetRandomMove(const struct Pkmn *pkmn);

static u8 CheckForDuplicateMoves(u16 move_name, u16 *moveset);
static const struct Move ChooseFirstMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset);
static u16 ChooseSecondMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset, u16 *moveset, u8 move_1_type);
static u16 ChooseThirdMove(const struct Move *pkmn_learnset, u16 *moveset);
static u8 CheckForSleepInducingMove(u16 move_name);
static u8 setSleepFlag(u16 *moveset);
static u16 ChooseFourthMove(const struct Move *pkmn_learnset, u16 *moveset, u8 sleep);
static u16 *GenerateMoveset(const struct Pkmn pkmn);

static u8 *InitTypeFactors(void)
{
    u8 i;
    u8 *TypeFactors;
    TypeFactors = (u8*)malloc(18 * sizeof(u8));
    for (i = 0; i < 18; i++) TypeFactors[i] = 1;
    return TypeFactors;
}

static void UpdateTypeFactors(const struct Pkmn *pkmn, u8 *TypeFactors)
{
    TypeFactors[pkmn->type_1] += 1;
    TypeFactors[pkmn->type_2] += 1;
}

static u8 GetTypeFactor(const struct Pkmn *pkmn, u8 *TypeFactors)
{
    return TypeFactors[pkmn->type_1] + TypeFactors[pkmn->type_2];
}

static u8 GetBSTFactor(const struct Pkmn *pkmn, const struct Pkmn *last_pkmn)
{
    if (last_pkmn->bst < MEDIANBST)
    {
        if (pkmn->bst < MEDIANBST) return 2;
        else return 1;
    }
    else
    {
        if (pkmn->bst > MEDIANBST) return 2;
        else return 1;
    }
}

static u8 CheckForDuplicatePokemon(const struct Pkmn *new_pkmn, const struct Pkmn **team)
{
    u8 i;
    for (i = 0; i < 6; i++) if (new_pkmn->species == team[i]->species) return 1;
    return 0;
}

static const struct Pkmn *GeneratePokemon(u8 slot, u8 *TypeFactors, const struct Pkmn **team)
{
    const struct Pkmn *new_pkmn;
    u8 new_pkmn_factor;
    if (slot == 0) new_pkmn = &Pokemon_List[Random() % ARRAY_COUNT(Pokemon_List)];
    else
    {
        do {new_pkmn = &Pokemon_List[Random() % ARRAY_COUNT(Pokemon_List)];}
        while (CheckForDuplicatePokemon(new_pkmn, team) == 1);
        new_pkmn_factor = GetTypeFactor(new_pkmn, TypeFactors) + GetBSTFactor(new_pkmn, team[slot - 1]);
        if (Random() % new_pkmn_factor != 0) GeneratePokemon(slot, TypeFactors, team);
    }
    UpdateTypeFactors(new_pkmn, TypeFactors);
    return new_pkmn;
}

static const struct Pkmn **CreateTeam(void)
{
    u8 i;
    u8* type_factors;
    const struct Pkmn **team;
    type_factors = InitTypeFactors();
    team = (const struct Pkmn**)malloc(6 * sizeof(struct Pkmn*));
    for (i = 0; i < 6; i++) team[i] = &NA_Pokemon;
    for (i = 0; i < 6; i++) team[i] = GeneratePokemon(i, type_factors, team);
    free(type_factors);
    return team;
}

static const struct Move *GetRandomMove(const struct Pkmn *pkmn)
{
    return &pkmn->moves[Random() % pkmn->num_moves];
}

// static u8 CheckForDuplicateMoves(u16 move_name, u16 *moveset)
// {
//     u8 i;
//     for (i = 0; i < ARRAY_COUNT(moveset); i++)
//     {
//         if (move_name == moveset[i]) return 1;
//     }
//     return 0;
// }

// static const struct Move ChooseFirstMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset)
// {
//     struct Move move;
//     u8 move_factor;
//     move = GetRandomMove(pkmn_learnset);
//     // Only 1 of PKMN's 10 strongest moves may be chosen
//     while (move.strong != 2) move = GetRandomMove(pkmn_learnset);
//     move_factor = 1;
//     // STAB move is 4x more likely to be chosen than a non STAB move
//     if (move.type != type_1 || move.type != type_2) move_factor += 3;
//     // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
//     if (move.lvlup == 0) move_factor += 1;
//     if (Random() % move_factor != 0) ChooseFirstMove(type_1, type_2, pkmn_learnset);
//     return move;
// }

// static u16 ChooseSecondMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset, u16 *moveset, u8 move_1_type)
// {
//     struct Move move;
//     u8 move_factor;
//     move = GetRandomMove(pkmn_learnset);
//     // Prevent duplicate moves
//     while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
//     move_factor = 1;
//     // If move 1's type is not STAB:
//     // STAB moves are now 16x more likely to be chosen than a non STAB move
//     if (move_1_type != type_1 || move_1_type != type_2) move_factor += 15;
//     // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
//     if (move.lvlup == 0) move_factor += 1;
//     if (Random() % move_factor != 0) ChooseSecondMove(type_1, type_2, pkmn_learnset, moveset, move_1_type);
//     return move.name;
// }

// static u16 ChooseThirdMove(const struct Move *pkmn_learnset, u16 *moveset)
// {
//     struct Move move;
//     u8 move_factor;
//     move = GetRandomMove(pkmn_learnset);
//     // Prevent duplicate moves
//     while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
//     move_factor = 1;
//     // Non-damaging moves are 16x more likely to be chosen than damaging moves
//     if (move.strong != 0) move_factor += 15;
//     // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
//     if (move.lvlup == 0) move_factor += 1;
//     if (Random() % move_factor != 0) ChooseThirdMove(pkmn_learnset, moveset);
//     return move.name;
// }

// static u8 CheckForSleepInducingMove(u16 move_name)
// {
//     // Sleep inducing moves
//     if (move_name == 47) return 1;
//     if (move_name == 79) return 1;
//     if (move_name == 95) return 1;
//     if (move_name == 142) return 1;
//     if (move_name == 281) return 1;
//     // MOVE_REST
//     if (move_name == 156) return 2;
//     return 0;
// }

// static u8 setSleepFlag(u16 *moveset)
// {
//     u8 i;
//     for (i = 0; i < 3; i++)
//     {
//         // MOVE_DREAM_EATER
//         if (moveset[i] == 138) return 1;
//         // MOVE_SNORE or MOVE_SLEEP_TALK
//         if (moveset[i] == 173 || moveset[i] == 214) return 2;
//     }
//     return 0;
// }

// static u16 ChooseFourthMove(const struct Move *pkmn_learnset, u16 *moveset, u8 sleep)
// {
//     struct Move move;
//     move = GetRandomMove(pkmn_learnset);
//     while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
//     if (sleep == 1)
//     {
//         if (CheckForSleepInducingMove(move.name) == 1) return move.name;
//         ChooseFourthMove(pkmn_learnset, moveset, sleep);
//     }
//     if (sleep == 2)
//     {
//         if (CheckForSleepInducingMove(move.name) == 2) return move.name;
//         ChooseFourthMove(pkmn_learnset, moveset, sleep);
//     }
//     if (move.lvlup == 0) ChooseFourthMove(pkmn_learnset, moveset, sleep);
//     return move.name;
// }

// static u16 *GenerateMoveset(struct Pkmn pkmn)
// {
//     u8 type_1;
//     u8 type_2;
//     const struct Move *pkmn_learnset;
//     struct Move move_1;
//     u16 move_2;
//     u16 move_3;
//     u8 sleep;
//     u16 move_4;
//     u16* moveset;
//     type_1 = pkmn.type_1;
//     type_2 = pkmn.type_2;
//     pkmn_learnset = pkmn.moves;
//     moveset = (u16*)malloc(4 * sizeof(u16));
//     move_1 = ChooseFirstMove(type_1, type_2, pkmn_learnset);
//     moveset[0] = move_1.name;
//     if (pkmn.species == SPECIES_DITTO)
//     {
//         moveset[1] = MOVE_NONE;
//         moveset[2] = MOVE_NONE;
//         moveset[3] = MOVE_NONE;
//         return moveset;
//     }
//     move_2 = ChooseSecondMove(type_1, type_2, pkmn_learnset, moveset, move_1.type);
//     moveset[1] = move_2;
//     move_3 = ChooseThirdMove(pkmn_learnset, moveset);
//     moveset[2] = move_3;
//     sleep = setSleepFlag(moveset);
//     move_4 = ChooseFourthMove(pkmn_learnset, moveset, sleep);
//     moveset[3] = move_4;
//     return moveset;
// }

static u16 *TempGenMoveset(const struct Pkmn *pkmn)
{
    u8 i;
    u16* moveset;
    moveset = (u16*)malloc(4 * sizeof(u16));
    moveset[0] = GetRandomMove(pkmn)->name;
    moveset[1] = GetRandomMove(pkmn)->name;
    moveset[2] = GetRandomMove(pkmn)->name;
    moveset[3] = GetRandomMove(pkmn)->name;
    return moveset;
}

void GenerateTeam(void)
{
    const struct Pkmn **team;
    u8 i;
    u16 *moveset;
    team = CreateTeam();
    // // now to actually give pokemon to player:
    // ZeroPlayerPartyMons();
    moveset = TempGenMoveset(team[0]);
    for (i = 0; i < 6; i++)
    {
        CreateMonWithNature(&gPlayerParty[i], team[i]->species, 50, USE_RANDOM_IVS, Random() % NUM_NATURES);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], moveset[0]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], moveset[1]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], moveset[2]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], moveset[3]);
    }
    FlagSet(FLAG_SYS_POKEMON_GET);
    free(team);
    free(moveset);
}