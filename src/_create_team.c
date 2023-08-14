#include "_create_team.h"
#include "malloc.h"
#include "random.h"
#include "pokemon.h"
#include "event_data.h"
#include "constants/flags.h"
#include "item.h"
#include "constants/items.h"

static u8 *InitTypeFactors(void);
static void UpdateTypeFactors(const struct Pkmn *pkmn, u8 *TypeFactors);
static u8 GetTypeFactor(const struct Pkmn *pkmn, u8 *TypeFactors);
static u8 GetBSTFactor(const struct Pkmn *pkmn, const struct Pkmn *last_pkmn);
static u8 CheckForDuplicatePokemon(const struct Pkmn *new_pkmn, const struct Pkmn **team);
static const struct Pkmn *GeneratePokemon(u8 slot, u8 *TypeFactors, const struct Pkmn **team);
static const struct Pkmn **CreateTeam(void);
static const struct Move *GetRandomMove(const struct Pkmn *pkmn);
static u8 CheckForDuplicateMoves(u16 move_name, u16 *moveset);
static const struct Move *GenerateMove(const struct Pkmn *pkmn, u16 *moveset);
static u16 *GenerateMoveset(const struct Pkmn *pkmn);

static u8 *InitTypeFactors(void)
{
    u8 i;
    u8 *TypeFactors;
    TypeFactors = (u8*)malloc(18 * sizeof(u8));
    for (i = 0; i < 18; i++) TypeFactors[i] = 0;
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
        if (pkmn->bst < MEDIANBST) return 1;
        else return 0;
    }
    else
    {
        if (pkmn->bst > MEDIANBST) return 1;
        else return 0;
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
        new_pkmn_factor = 1 + GetTypeFactor(new_pkmn, TypeFactors) + GetBSTFactor(new_pkmn, team[slot - 1]);
        if (Random() % new_pkmn_factor != 0) new_pkmn = GeneratePokemon(slot, TypeFactors, team);
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

static u8 CheckForDuplicateMoves(u16 move_name, u16 *moveset)
{
    u8 i;
    for (i = 0; i < 4; i++) if (move_name == moveset[i]) return 1;
    return 0;
}

static const struct Move *GenerateMove(const struct Pkmn *pkmn, u16 *moveset)
{
    const struct Move *move;
    u8 move_factor;
    move_factor = 1;
    if (pkmn->species == SPECIES_DITTO) return &pkmn->moves[0];
    do {move = GetRandomMove(pkmn);}
    while (CheckForDuplicateMoves(move->name, moveset) == 1);
    // make damaging moves more likely to appear
    if (move->strong != 2) move_factor += 2;
    // make strong damaging moves the most likely to appear
    if (move->strong == 0) move_factor += 2;
    // make STAB moves more likely to appear
    if (move->type != pkmn->type_1 && move->type != pkmn->type_2) move_factor += 2;
    // make lvlup moves more likely to appear
    if (move->lvlup == 0) move_factor += 4;
    if (Random() % move_factor != 0) move = GenerateMove(pkmn, moveset);
    return move;
}

static u16 *GenerateMoveset(const struct Pkmn *pkmn)
{
    u8 i;
    u16 *moveset;
    moveset = (u16*)malloc(4 * sizeof(u16));
    for (i = 0; i < 4; i++) moveset[i] = MOVE_NONE;
    for (i = 0; i < 4; i++) moveset[i] = GenerateMove(pkmn, moveset)->name;
    return moveset;
}

void GenerateTeam(void)
{
    u8 i;
    const struct Pkmn **team;
    u16 **movesets;
    team = CreateTeam();
    ZeroPlayerPartyMons();
    movesets = (u16**)malloc(6 * sizeof(u16*));
    for (i = 0; i < 6; i++)
    {
        movesets[i] = GenerateMoveset(team[i]);
        CreateMonWithNature(&gPlayerParty[i], team[i]->species, 55, USE_RANDOM_IVS, Random() % NUM_NATURES);
        if (team[i]->species == SPECIES_DITTO)
        {
            free(movesets[i]);
            continue;
        }
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], movesets[i][0]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], movesets[i][1]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], movesets[i][2]);
        DeleteFirstMoveAndGiveMoveToMon(&gPlayerParty[i], movesets[i][3]);
        free(movesets[i]);
    }
    FlagSet(FLAG_SYS_POKEMON_GET);
    free(team);
    free(movesets);
}

void GenerateItems(void)
{
    u8 random;
    u16 random16;
    u8 i;
    ClearBag();
    AddBagItem(ITEM_POTION, 15);
    AddBagItem(ITEM_SUPER_POTION, 12);
    AddBagItem(ITEM_HYPER_POTION, 10);
    AddBagItem(ITEM_MAX_POTION, 3);
    AddBagItem(ITEM_FULL_RESTORE, 2);
    AddBagItem(ITEM_ETHER, 1);
    AddBagItem(ITEM_ELIXIR, 1);
    // 2 random stat boost items
    AddBagItem(Random() % 7 + 73, 1);
    AddBagItem(Random() % 7 + 73, 1);
    // 1-4 PPUps random
    random = Random() % 3 + 1;
    AddBagItem(ITEM_PP_UP, random);
    // 0.25 chance to get PP max
    random = Random() % 3;
    if (random == 0) AddBagItem(ITEM_PP_MAX, 1);
    // 2-5 random held items
    random = Random() % 4 + 2;
    for (i = 0; i < random; i++)
    {
        random16 = Random() % 47 + 179;
        AddBagItem(random16, 1);
    }
    // 10 random tms
    AddBagItem(ITEM_TM_CASE, 1);
    for (i = 0; i < 10; i++)
    {
        random16 = Random() % 50 + 289;
        AddBagItem(random16, 1);
    }
}
