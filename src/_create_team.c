#include "_create_team.h"
#include "malloc.h"
#include "random.h"

static u8 *InitTypeFactors(void);
static void UpdateTypeFactors(const struct Pkmn pkmn, u8 *TypeFactors);
static u8 GetTypeFactor(const struct Pkmn pkmn, u8 *TypeFactors);
static u8 GetBSTFactor(const struct Pkmn pkmn, const struct Pkmn last_pkmn);
static const struct Pkmn GeneratePokemon(const struct Pkmn *last_pkmn, u8 *TypeFactors);
static struct Pkmn *CreateTeam(void);

static const struct Move GetRandomMove(const struct Move *pkmn_learnset);
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

static void UpdateTypeFactors(const struct Pkmn pkmn, u8 *TypeFactors)
{
    TypeFactors[pkmn.type_1] += 1;
    TypeFactors[pkmn.type_2] += 1;
}

static u8 GetTypeFactor(const struct Pkmn pkmn, u8 *TypeFactors)
{
    u8 primary_type;
    u8 secondary_type;
    u8 type_factor;
    type_factor = TypeFactors[pkmn.type_1] + TypeFactors[pkmn.type_2];
    return type_factor;
}

static u8 GetBSTFactor(const struct Pkmn pkmn, const struct Pkmn last_pkmn)
{
    u8 bst;
    u8 last_bst;
    bst = pkmn.bst;
    last_bst = last_pkmn.bst;
    if (last_bst < MEDIANBST)
    {
        if (bst < MEDIANBST) return 2;
        else return 1;
    }
    else
    {
        if (bst > MEDIANBST) return 2;
        else return 1;
    }
}

static const struct Pkmn GeneratePokemon(const struct Pkmn *last_pkmn, u8 *TypeFactors)
{
    struct Pkmn new_pokemon;
    u8 new_pkmn_factor;
    if (last_pkmn == NULL) new_pokemon = Pokemon_List[Random() % ARRAY_COUNT(Pokemon_List)];
    else
    {
        new_pokemon = Pokemon_List[Random() % ARRAY_COUNT(Pokemon_List)];
        new_pkmn_factor = GetTypeFactor(new_pokemon, TypeFactors) + GetBSTFactor(new_pokemon, *last_pkmn);
        if (Random() % new_pkmn_factor != 0) GeneratePokemon(last_pkmn, TypeFactors);
    }
    return new_pokemon;
}

static struct Pkmn *CreateTeam(void)
{
    u8* type_factors;
    struct Pkmn first;
    struct Pkmn second;
    struct Pkmn third;
    struct Pkmn fourth;
    struct Pkmn fifth;
    struct Pkmn sixth;
    struct Pkmn *team;
    type_factors = InitTypeFactors();
    first = GeneratePokemon(NULL, type_factors);
    UpdateTypeFactors(first, type_factors);
    second = GeneratePokemon(&first, type_factors);
    UpdateTypeFactors(second, type_factors);
    third = GeneratePokemon(&second, type_factors);
    UpdateTypeFactors(third, type_factors);
    fourth = GeneratePokemon(&third, type_factors);
    UpdateTypeFactors(fourth, type_factors);
    fifth = GeneratePokemon(&fourth, type_factors);
    UpdateTypeFactors(fifth, type_factors);
    sixth = GeneratePokemon(&fifth, type_factors);
    UpdateTypeFactors(sixth, type_factors);
    team = (struct Pkmn*)malloc(6 * sizeof(struct Pokemon));
    team[0] = first;
    team[1] = second;
    team[2] = third;
    team[3] = fourth;
    team[4] = fifth;
    team[5] = sixth;
    free(type_factors);
    return team;
}

static const struct Move GetRandomMove(const struct Move *pkmn_learnset)
{
    return pkmn_learnset[Random() % ARRAY_COUNT(pkmn_learnset)];
}

static u8 CheckForDuplicateMoves(u16 move_name, u16 *moveset)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(moveset); i++)
    {
        if (move_name == moveset[i]) return 1;
    }
    return 0;
}

static const struct Move ChooseFirstMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset)
{
    struct Move move;
    u8 move_factor;
    move = GetRandomMove(pkmn_learnset);
    // Only 1 of PKMN's 10 strongest moves may be chosen
    while (move.strong != 2) move = GetRandomMove(pkmn_learnset);
    move_factor = 1;
    // STAB move is 4x more likely to be chosen than a non STAB move
    if (move.type != type_1 || move.type != type_2) move_factor += 3;
    // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
    if (move.lvlup == 0) move_factor += 1;
    if (Random() % move_factor != 0) ChooseFirstMove(type_1, type_2, pkmn_learnset);
    return move;
}

static u16 ChooseSecondMove(u8 type_1, u8 type_2, const struct Move *pkmn_learnset, u16 *moveset, u8 move_1_type)
{
    struct Move move;
    u8 move_factor;
    move = GetRandomMove(pkmn_learnset);
    // Prevent duplicate moves
    while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
    move_factor = 1;
    // If move 1's type is not STAB:
    // STAB moves are now 16x more likely to be chosen than a non STAB move
    if (move_1_type != type_1 || move_1_type != type_2) move_factor += 15;
    // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
    if (move.lvlup == 0) move_factor += 1;
    if (Random() % move_factor != 0) ChooseSecondMove(type_1, type_2, pkmn_learnset, moveset, move_1_type);
    return move.name;
}

static u16 ChooseThirdMove(const struct Move *pkmn_learnset, u16 *moveset)
{
    struct Move move;
    u8 move_factor;
    move = GetRandomMove(pkmn_learnset);
    // Prevent duplicate moves
    while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
    move_factor = 1;
    // Non-damaging moves are 16x more likely to be chosen than damaging moves
    if (move.strong != 0) move_factor += 15;
    // Level up move is 2x more likely to be chosen than a TMHM/Tutor move
    if (move.lvlup == 0) move_factor += 1;
    if (Random() % move_factor != 0) ChooseThirdMove(pkmn_learnset, moveset);
    return move.name;
}

static u8 CheckForSleepInducingMove(u16 move_name)
{
    // Sleep inducing moves
    if (move_name == 47) return 1;
    if (move_name == 79) return 1;
    if (move_name == 95) return 1;
    if (move_name == 142) return 1;
    if (move_name == 281) return 1;
    // MOVE_REST
    if (move_name == 156) return 2;
    return 0;
}

static u8 setSleepFlag(u16 *moveset)
{
    u8 i;
    for (i = 0; i < 3; i++)
    {
        // MOVE_DREAM_EATER
        if (moveset[i] == 138) return 1;
        // MOVE_SNORE or MOVE_SLEEP_TALK
        if (moveset[i] == 173 || moveset[i] == 214) return 2;
    }
    return 0;
}

static u16 ChooseFourthMove(const struct Move *pkmn_learnset, u16 *moveset, u8 sleep)
{
    struct Move move;
    move = GetRandomMove(pkmn_learnset);
    while (CheckForDuplicateMoves(move.name, moveset) == 1) move = GetRandomMove(pkmn_learnset);
    if (sleep == 1)
    {
        if (CheckForSleepInducingMove(move.name) == 1) return move.name;
        ChooseFourthMove(pkmn_learnset, moveset, sleep);
    }
    if (sleep == 2)
    {
        if (CheckForSleepInducingMove(move.name) == 2) return move.name;
        ChooseFourthMove(pkmn_learnset, moveset, sleep);
    }
    if (move.lvlup == 0) ChooseFourthMove(pkmn_learnset, moveset, sleep);
    return move.name;
}

static u16 *GenerateMoveset(const struct Pkmn pkmn)
{
    u8 type_1;
    u8 type_2;
    const struct Move *pkmn_learnset;
    struct Move move_1;
    u16 move_2;
    u16 move_3;
    u8 sleep;
    u16 move_4;
    u16* moveset;
    type_1 = pkmn.type_1;
    type_2 = pkmn.type_2;
    pkmn_learnset = pkmn.moves;
    moveset = (u16*)malloc(4 * sizeof(u16));
    move_1 = ChooseFirstMove(type_1, type_2, pkmn_learnset);
    moveset[0] = move_1.name;
    if (pkmn.species == SPECIES_DITTO)
    {
        moveset[1] = MOVE_NONE;
        moveset[2] = MOVE_NONE;
        moveset[3] = MOVE_NONE;
        return moveset;
    }
    move_2 = ChooseSecondMove(type_1, type_2, pkmn_learnset, moveset, move_1.type);
    moveset[1] = move_2;
    move_3 = ChooseThirdMove(pkmn_learnset, moveset);
    moveset[2] = move_3;
    sleep = setSleepFlag(moveset);
    move_4 = ChooseFourthMove(pkmn_learnset, moveset, sleep);
    moveset[3] = move_4;
    return moveset;
}

u16 *GenerateTeam(void)
{
    u16* team_with_moves;
    struct Pkmn *team;
    u8 j;
    u8 i;
    struct Pkmn team_member;
    u16 *moveset;
    team = CreateTeam();
    j = 0;
    team_with_moves = (u16*)malloc(30 * sizeof(u16));
    for (i =  0; i < 6; i++)
    {
        team_member = team[i];
        team_with_moves[j] = team_member.species;
        moveset = GenerateMoveset(team_member);
        team_with_moves[j + 1] = moveset[0];
        team_with_moves[j + 2] = moveset[1];
        team_with_moves[j + 3] = moveset[2];
        team_with_moves[j + 4] = moveset[3];
        free(moveset);
        j += 5;
    }
    free(team);
    return team_with_moves;
}