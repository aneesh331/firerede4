#ifndef GUARD_CREATE_TEAM_H
#define GUARD_CREATE_TEAM_H

#include "global.h"
#include "constants/species.h"
#include "constants/moves.h"
#include "constants/pokemon.h"

#define MEDIANBST 485

struct Move
{
    u16 name;
    u8 type;
    u8 strong;
    u8 lvlup;
};

struct Pkmn
{
    u16 species;
    u8 type_1;
    u8 type_2;
    u16 bst;
    const struct Move *moves;
};

u16 *GenerateTeam(void);

const struct Move Venusaur_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LEECH_SEED,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_VINE_WHIP,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_POISON_POWDER,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SLEEP_POWDER,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RAZOR_LEAF,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SWEET_SCENT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_GROWTH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_FRENZY_PLANT,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Charizard_Moves[] = {
	[0] = {
		.name = MOVE_HEAT_WAVE,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_METAL_CLAW,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SMOKESCREEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SCARY_FACE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_BLAST_BURN,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_DRAGON_CLAW,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Blastoise_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BUBBLE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_WITHDRAW,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RAPID_SPIN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYDRO_CANNON,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Butterfree_Moves[] = {
	[0] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_POISON_POWDER,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_STUN_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SLEEP_POWDER,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_WHIRLWIND,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_GUST,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_PSYBEAM,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SILVER_WIND,
		.type = TYPE_BUG,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Beedrill_Moves[] = {
	[0] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_TWINEEDLE,
		.type = TYPE_BUG,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_PIN_MISSILE,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ENDEAVOR,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Pidgeot_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_GUST,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_WHIRLWIND,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FEATHER_DANCE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Raticate_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_HYPER_FANG,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SCARY_FACE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SUPER_FANG,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ENDEAVOR,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Fearow_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MIRROR_MOVE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DRILL_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Arbok_Moves[] = {
	[0] = {
		.name = MOVE_WRAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_POISON_STING,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_GLARE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_ACID,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_STOCKPILE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SWALLOW,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SPIT_UP,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Raichu_Moves[] = {
	[0] = {
		.name = MOVE_THUNDER_SHOCK,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[5] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Sandslash_Moves[] = {
	[0] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_POISON_STING,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SWIFT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FURY_SWIPES,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Nidoqueen_Moves[] = {
	[0] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DOUBLE_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_POISON_STING,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_BODY_SLAM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SUPERPOWER,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Nidoking_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DOUBLE_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_POISON_STING,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_THRASH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MEGAHORN,
		.type = TYPE_BUG,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Clefable_Moves[] = {
	[0] = {
		.name = MOVE_SING,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_MINIMIZE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[5] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SOFT_BOILED,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Ninetales_Moves[] = {
	[0] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_FIRE_SPIN,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Wigglytuff_Moves[] = {
	[0] = {
		.name = MOVE_SING,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[5] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Golbat_Moves[] = {
	[0] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEECH_LIFE,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_ASTONISH,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AIR_CUTTER,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEAN_LOOK,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_POISON_FANG,
		.type = TYPE_POISON,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Vileplume_Moves[] = {
	[0] = {
		.name = MOVE_ABSORB,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_AROMATHERAPY,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_STUN_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_MEGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_PETAL_DANCE,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Parasect_Moves[] = {
	[0] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_STUN_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_POISON_POWDER,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_LEECH_LIFE,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_GROWTH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Venomoth_Moves[] = {
	[0] = {
		.name = MOVE_SILVER_WIND,
		.type = TYPE_BUG,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FORESIGHT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_POISON_POWDER,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_LEECH_LIFE,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_STUN_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_GUST,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_PSYBEAM,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_SLEEP_POWDER,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Dugtrio_Moves[] = {
	[0] = {
		.name = MOVE_TRI_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MAGNITUDE,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FURY_SWIPES,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_MUD_SLAP,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SAND_TOMB,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Persian_Moves[] = {
	[0] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_PAY_DAY,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_FAINT_ATTACK,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FURY_SWIPES,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Golduck_Moves[] = {
	[0] = {
		.name = MOVE_WATER_SPORT,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_PSYCH_UP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FURY_SWIPES,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Primeape_Moves[] = {
	[0] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LOW_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_KARATE_CHOP,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FURY_SWIPES,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_CROSS_CHOP,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SWAGGER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Arcanine_Moves[] = {
	[0] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ODOR_SLEUTH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_EXTREME_SPEED,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Poliwrath_Moves[] = {
	[0] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_HYPNOSIS,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SUBMISSION,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[5] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Alakazam_Moves[] = {
	[0] = {
		.name = MOVE_TELEPORT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_KINESIS,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_PSYBEAM,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RECOVER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FUTURE_SIGHT,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_TRICK,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Machamp_Moves[] = {
	[0] = {
		.name = MOVE_LOW_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_KARATE_CHOP,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FORESIGHT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_REVENGE,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_VITAL_THROW,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SUBMISSION,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_CROSS_CHOP,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Victreebel_Moves[] = {
	[0] = {
		.name = MOVE_STOCKPILE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SPIT_UP,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SWALLOW,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_VINE_WHIP,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SLEEP_POWDER,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SWEET_SCENT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RAZOR_LEAF,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Tentacruel_Moves[] = {
	[0] = {
		.name = MOVE_POISON_STING,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_CONSTRICT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ACID,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_BUBBLE_BEAM,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_WRAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_BARRIER,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Golem_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_MUD_SPORT,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ROCK_THROW,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MAGNITUDE,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SELF_DESTRUCT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_ROLLOUT,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ROCK_BLAST,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Rapidash_Moves[] = {
	[0] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_STOMP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FIRE_SPIN,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_TAKE_DOWN,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_BOUNCE,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Slowbro_Moves[] = {
	[0] = {
		.name = MOVE_CURSE,
		.type = TYPE_MYSTERY,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_YAWN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_HEADBUTT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_AMNESIA,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_WITHDRAW,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[52] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Magneton_Moves[] = {
	[0] = {
		.name = MOVE_METAL_SOUND,
		.type = TYPE_STEEL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_THUNDER_SHOCK,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SONIC_BOOM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SPARK,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_LOCK_ON,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_TRI_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Farfetchd_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_KNOCK_OFF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FURY_CUTTER,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SWORDS_DANCE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_FALSE_SWIPE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Dodrio_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_TRI_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_UPROAR,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DRILL_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Dewgong_Moves[] = {
	[0] = {
		.name = MOVE_SIGNAL_BEAM,
		.type = TYPE_BUG,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_HEADBUTT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ICY_WIND,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_AURORA_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SHEER_COLD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_TAKE_DOWN,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Muk_Moves[] = {
	[0] = {
		.name = MOVE_POISON_GAS,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_POUND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HARDEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SLUDGE,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MINIMIZE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ACID_ARMOR,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SLUDGE_BOMB,
		.type = TYPE_POISON,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Cloyster_Moves[] = {
	[0] = {
		.name = MOVE_WITHDRAW,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_AURORA_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SPIKES,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SPIKE_CANNON,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Gengar_Moves[] = {
	[0] = {
		.name = MOVE_HYPNOSIS,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LICK,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SPITE,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_CURSE,
		.type = TYPE_MYSTERY,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_NIGHT_SHADE,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SHADOW_PUNCH,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DESTINY_BOND,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Onix_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BIND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ROCK_THROW,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_HARDEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DRAGON_BREATH,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SLAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Hypno_Moves[] = {
	[0] = {
		.name = MOVE_NIGHTMARE,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_POUND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HYPNOSIS,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_HEADBUTT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_POISON_GAS,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_MEDITATE,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_PSYCH_UP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_SWAGGER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Kingler_Moves[] = {
	[0] = {
		.name = MOVE_METAL_CLAW,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_BUBBLE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_VICE_GRIP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_HARDEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MUD_SHOT,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_STOMP,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_GUILLOTINE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Electrode_Moves[] = {
	[0] = {
		.name = MOVE_CHARGE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SONIC_BOOM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SPARK,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SELF_DESTRUCT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_ROLLOUT,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SWIFT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Exeggutor_Moves[] = {
	[0] = {
		.name = MOVE_BARRAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_HYPNOSIS,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_STOMP,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_EGG_BOMB,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Marowak_Moves[] = {
	[0] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BONE_CLUB,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_HEADBUTT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_BONEMERANG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_FALSE_SWIPE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_THRASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Hitmonlee_Moves[] = {
	[0] = {
		.name = MOVE_REVENGE,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_DOUBLE_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_MEDITATE,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ROLLING_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_JUMP_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_HI_JUMP_KICK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MIND_READER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_FORESIGHT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_ENDURE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Hitmonchan_Moves[] = {
	[0] = {
		.name = MOVE_REVENGE,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_COMET_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MACH_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_THUNDER_PUNCH,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_ICE_PUNCH,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FIRE_PUNCH,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SKY_UPPERCUT,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DETECT,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Lickitung_Moves[] = {
	[0] = {
		.name = MOVE_LICK,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_KNOCK_OFF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_STOMP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_WRAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DISABLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SLAM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Weezing_Moves[] = {
	[0] = {
		.name = MOVE_POISON_GAS,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SMOG,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SELF_DESTRUCT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SLUDGE,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SMOKESCREEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_HAZE,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_EXPLOSION,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Rhydon_Moves[] = {
	[0] = {
		.name = MOVE_HORN_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_STOMP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SCARY_FACE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_ROCK_BLAST,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_HORN_DRILL,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_TAKE_DOWN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Chansey_Moves[] = {
	[0] = {
		.name = MOVE_POUND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_REFRESH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SOFT_BOILED,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_MINIMIZE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SING,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_EGG_BOMB,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SOFT_BOILED,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[52] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[53] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[54] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[55] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[56] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[57] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[58] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[59] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Tangela_Moves[] = {
	[0] = {
		.name = MOVE_INGRAIN,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_CONSTRICT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SLEEP_POWDER,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ABSORB,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_GROWTH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_POISON_POWDER,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_VINE_WHIP,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_BIND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_STUN_SPORE,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_SLAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_TICKLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_BULLET_SEED,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Kangaskhan_Moves[] = {
	[0] = {
		.name = MOVE_COMET_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_FAKE_OUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ENDURE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DIZZY_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_REVERSAL,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[52] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[53] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[54] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Seadra_Moves[] = {
	[0] = {
		.name = MOVE_BUBBLE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SMOKESCREEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_TWISTER,
		.type = TYPE_DRAGON,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Seaking_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_WATER_SPORT,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_HORN_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FLAIL,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FURY_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_WATERFALL,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_HORN_DRILL,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Starmie_Moves[] = {
	[0] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_RAPID_SPIN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_RECOVER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SWIFT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[6] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Mr_Mime_Moves[] = {
	[0] = {
		.name = MOVE_BARRIER,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_CONFUSION,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_MEDITATE,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_MAGICAL_LEAF,
		.type = TYPE_GRASS,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_ENCORE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_PSYBEAM,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_RECYCLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_TRICK,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_ROLE_PLAY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[13] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 1
	},
	[14] = {
		.name = MOVE_BATON_PASS,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[15] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[16] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[52] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[53] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[54] = {
		.name = MOVE_SNATCH,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[55] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Scyther_Moves[] = {
	[0] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_FALSE_SWIPE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SWORDS_DANCE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_FURY_CUTTER,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Jynx_Moves[] = {
	[0] = {
		.name = MOVE_POUND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LICK,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_LOVELY_KISS,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_POWDER_SNOW,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_DOUBLE_SLAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_ICE_PUNCH,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_MEAN_LOOK,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FAKE_TEARS,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_CALM_MIND,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_SKILL_SWAP,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Electabuzz_Moves[] = {
	[0] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_THUNDER_PUNCH,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SWIFT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SCREECH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Magmar_Moves[] = {
	[0] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SMOG,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_FIRE_PUNCH,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SMOKESCREEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Pinsir_Moves[] = {
	[0] = {
		.name = MOVE_VICE_GRIP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_FOCUS_ENERGY,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BIND,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_HARDEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_REVENGE,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_GUILLOTINE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SUBMISSION,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SWORDS_DANCE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_BULK_UP,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Tauros_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_RAGE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_HORN_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_SCARY_FACE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_PURSUIT,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SWAGGER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_THRASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Gyarados_Moves[] = {
	[0] = {
		.name = MOVE_THRASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DRAGON_RAGE,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_TWISTER,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_HYDRO_PUMP,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_DRAGON_DANCE,
		.type = TYPE_DRAGON,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Lapras_Moves[] = {
	[0] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_GROWL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_SING,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_MIST,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_BODY_SLAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_CONFUSE_RAY,
		.type = TYPE_GHOST,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_PERISH_SONG,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_HYDRO_PUMP,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Ditto_Moves[] = {
	[0] = {
		.name = MOVE_TRANSFORM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
};

const struct Move Vaporeon_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HELPING_HAND,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_AURORA_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_HAZE,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_ACID_ARMOR,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Jolteon_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HELPING_HAND,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_THUNDER_SHOCK,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_KICK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_PIN_MISSILE,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Flareon_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TAIL_WHIP,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HELPING_HAND,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_QUICK_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_FIRE_SPIN,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SMOG,
		.type = TYPE_POISON,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Porygon_Moves[] = {
	[0] = {
		.name = MOVE_CONVERSION_2,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_CONVERSION,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_PSYBEAM,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_RECOVER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SHARPEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_LOCK_ON,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_TRI_ATTACK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_RECYCLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_ZAP_CANNON,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_DREAM_EATER,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
};

const struct Move Omastar_Moves[] = {
	[0] = {
		.name = MOVE_CONSTRICT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_WITHDRAW,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 2,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_WATER_GUN,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MUD_SHOT,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SPIKE_CANNON,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_TICKLE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Move Kabutops_Moves[] = {
	[0] = {
		.name = MOVE_FURY_CUTTER,
		.type = TYPE_BUG,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_SCRATCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_HARDEN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_ABSORB,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_MUD_SHOT,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_SAND_ATTACK,
		.type = TYPE_GROUND,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_ENDURE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_SLASH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_METAL_SOUND,
		.type = TYPE_STEEL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_GIGA_DRAIN,
		.type = TYPE_GRASS,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DIG,
		.type = TYPE_GROUND,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_CUT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_DIVE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Aerodactyl_Moves[] = {
	[0] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_BITE,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_SUPERSONIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_ANCIENT_POWER,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SCARY_FACE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_TAKE_DOWN,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_DRAGON_CLAW,
		.type = TYPE_DRAGON,
		.strong = 2,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_TAUNT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_TORMENT,
		.type = TYPE_DARK,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_THIEF,
		.type = TYPE_DARK,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 1,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Snorlax_Moves[] = {
	[0] = {
		.name = MOVE_TACKLE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_AMNESIA,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_DEFENSE_CURL,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_BELLY_DRUM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_HEADBUTT,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_YAWN,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SNORE,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_BODY_SLAM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[9] = {
		.name = MOVE_SLEEP_TALK,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[10] = {
		.name = MOVE_BLOCK,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[11] = {
		.name = MOVE_COVET,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[12] = {
		.name = MOVE_ROLLOUT,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 1
	},
	[13] = {
		.name = MOVE_MEGA_PUNCH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_MEGA_KICK,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_COUNTER,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_SEISMIC_TOSS,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_METRONOME,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_ROCK_SLIDE,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FOCUS_PUNCH,
		.type = TYPE_FIGHTING,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 1,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_SOLAR_BEAM,
		.type = TYPE_GRASS,
		.strong = 2,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 1,
		.lvlup = 0
	},
	[36] = {
		.name = MOVE_EARTHQUAKE,
		.type = TYPE_GROUND,
		.strong = 2,
		.lvlup = 0
	},
	[37] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[38] = {
		.name = MOVE_PSYCHIC,
		.type = TYPE_PSYCHIC,
		.strong = 1,
		.lvlup = 0
	},
	[39] = {
		.name = MOVE_SHADOW_BALL,
		.type = TYPE_GHOST,
		.strong = 1,
		.lvlup = 0
	},
	[40] = {
		.name = MOVE_BRICK_BREAK,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
	[41] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[42] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[43] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[44] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[45] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[46] = {
		.name = MOVE_ROCK_TOMB,
		.type = TYPE_ROCK,
		.strong = 1,
		.lvlup = 0
	},
	[47] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[48] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[49] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[50] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[51] = {
		.name = MOVE_STRENGTH,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Articuno_Moves[] = {
	[0] = {
		.name = MOVE_GUST,
		.type = TYPE_FLYING,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_POWDER_SNOW,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_MIST,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_MIND_READER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_REFLECT,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Zapdos_Moves[] = {
	[0] = {
		.name = MOVE_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_THUNDER_SHOCK,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_DETECT,
		.type = TYPE_FIGHTING,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_DRILL_PECK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_LIGHT_SCREEN,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FLASH,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Moltres_Moves[] = {
	[0] = {
		.name = MOVE_WING_ATTACK,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_EMBER,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_FIRE_SPIN,
		.type = TYPE_FIRE,
		.strong = 1,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_ENDURE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[7] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[8] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_ROAR,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_SANDSTORM,
		.type = TYPE_ROCK,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_AERIAL_ACE,
		.type = TYPE_FLYING,
		.strong = 0,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_STEEL_WING,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_OVERHEAT,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_FLY,
		.type = TYPE_FLYING,
		.strong = 2,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_ROCK_SMASH,
		.type = TYPE_FIGHTING,
		.strong = 1,
		.lvlup = 0
	},
};

const struct Move Dragonair_Moves[] = {
	[0] = {
		.name = MOVE_WRAP,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[1] = {
		.name = MOVE_LEER,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[2] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 1
	},
	[3] = {
		.name = MOVE_TWISTER,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 1
	},
	[4] = {
		.name = MOVE_DRAGON_RAGE,
		.type = TYPE_DRAGON,
		.strong = 1,
		.lvlup = 1
	},
	[5] = {
		.name = MOVE_SLAM,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 1
	},
	[6] = {
		.name = MOVE_AGILITY,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 1
	},
	[7] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 1
	},
	[8] = {
		.name = MOVE_DOUBLE_EDGE,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[9] = {
		.name = MOVE_MIMIC,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[10] = {
		.name = MOVE_THUNDER_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[11] = {
		.name = MOVE_SUBSTITUTE,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[12] = {
		.name = MOVE_WATER_PULSE,
		.type = TYPE_WATER,
		.strong = 1,
		.lvlup = 0
	},
	[13] = {
		.name = MOVE_TOXIC,
		.type = TYPE_POISON,
		.strong = 0,
		.lvlup = 0
	},
	[14] = {
		.name = MOVE_HAIL,
		.type = TYPE_ICE,
		.strong = 0,
		.lvlup = 0
	},
	[15] = {
		.name = MOVE_HIDDEN_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[16] = {
		.name = MOVE_SUNNY_DAY,
		.type = TYPE_FIRE,
		.strong = 0,
		.lvlup = 0
	},
	[17] = {
		.name = MOVE_ICE_BEAM,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[18] = {
		.name = MOVE_BLIZZARD,
		.type = TYPE_ICE,
		.strong = 2,
		.lvlup = 0
	},
	[19] = {
		.name = MOVE_HYPER_BEAM,
		.type = TYPE_NORMAL,
		.strong = 2,
		.lvlup = 0
	},
	[20] = {
		.name = MOVE_PROTECT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[21] = {
		.name = MOVE_RAIN_DANCE,
		.type = TYPE_WATER,
		.strong = 0,
		.lvlup = 0
	},
	[22] = {
		.name = MOVE_SAFEGUARD,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[23] = {
		.name = MOVE_FRUSTRATION,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[24] = {
		.name = MOVE_IRON_TAIL,
		.type = TYPE_STEEL,
		.strong = 2,
		.lvlup = 0
	},
	[25] = {
		.name = MOVE_THUNDERBOLT,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[26] = {
		.name = MOVE_THUNDER,
		.type = TYPE_ELECTRIC,
		.strong = 2,
		.lvlup = 0
	},
	[27] = {
		.name = MOVE_RETURN,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[28] = {
		.name = MOVE_DOUBLE_TEAM,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[29] = {
		.name = MOVE_SHOCK_WAVE,
		.type = TYPE_ELECTRIC,
		.strong = 0,
		.lvlup = 0
	},
	[30] = {
		.name = MOVE_FLAMETHROWER,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[31] = {
		.name = MOVE_FIRE_BLAST,
		.type = TYPE_FIRE,
		.strong = 2,
		.lvlup = 0
	},
	[32] = {
		.name = MOVE_SECRET_POWER,
		.type = TYPE_NORMAL,
		.strong = 1,
		.lvlup = 0
	},
	[33] = {
		.name = MOVE_REST,
		.type = TYPE_PSYCHIC,
		.strong = 0,
		.lvlup = 0
	},
	[34] = {
		.name = MOVE_ATTRACT,
		.type = TYPE_NORMAL,
		.strong = 0,
		.lvlup = 0
	},
	[35] = {
		.name = MOVE_SURF,
		.type = TYPE_WATER,
		.strong = 2,
		.lvlup = 0
	},
};

const struct Pkmn Pokemon_List[79] = {
	[0] = {
		.species = SPECIES_VENUSAUR,
		.type_1 = TYPE_GRASS,
		.type_2 = TYPE_POISON,
		.bst = 525,
		.moves = Venusaur_Moves
	},
	[1] = {
		.species = SPECIES_CHARIZARD,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FLYING,
		.bst = 534,
		.moves = Charizard_Moves
	},
	[2] = {
		.species = SPECIES_BLASTOISE,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 530,
		.moves = Blastoise_Moves
	},
	[3] = {
		.species = SPECIES_BUTTERFREE,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_FLYING,
		.bst = 385,
		.moves = Butterfree_Moves
	},
	[4] = {
		.species = SPECIES_BEEDRILL,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_POISON,
		.bst = 385,
		.moves = Beedrill_Moves
	},
	[5] = {
		.species = SPECIES_PIDGEOT,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_FLYING,
		.bst = 469,
		.moves = Pidgeot_Moves
	},
	[6] = {
		.species = SPECIES_RATICATE,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 413,
		.moves = Raticate_Moves
	},
	[7] = {
		.species = SPECIES_FEAROW,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_FLYING,
		.bst = 442,
		.moves = Fearow_Moves
	},
	[8] = {
		.species = SPECIES_ARBOK,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_POISON,
		.bst = 438,
		.moves = Arbok_Moves
	},
	[9] = {
		.species = SPECIES_RAICHU,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_ELECTRIC,
		.bst = 475,
		.moves = Raichu_Moves
	},
	[10] = {
		.species = SPECIES_SANDSLASH,
		.type_1 = TYPE_GROUND,
		.type_2 = TYPE_GROUND,
		.bst = 450,
		.moves = Sandslash_Moves
	},
	[11] = {
		.species = SPECIES_NIDOQUEEN,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_GROUND,
		.bst = 495,
		.moves = Nidoqueen_Moves
	},
	[12] = {
		.species = SPECIES_NIDOKING,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_GROUND,
		.bst = 495,
		.moves = Nidoking_Moves
	},
	[13] = {
		.species = SPECIES_CLEFABLE,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 473,
		.moves = Clefable_Moves
	},
	[14] = {
		.species = SPECIES_NINETALES,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FIRE,
		.bst = 505,
		.moves = Ninetales_Moves
	},
	[15] = {
		.species = SPECIES_WIGGLYTUFF,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 425,
		.moves = Wigglytuff_Moves
	},
	[16] = {
		.species = SPECIES_GOLBAT,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_FLYING,
		.bst = 455,
		.moves = Golbat_Moves
	},
	[17] = {
		.species = SPECIES_VILEPLUME,
		.type_1 = TYPE_GRASS,
		.type_2 = TYPE_POISON,
		.bst = 480,
		.moves = Vileplume_Moves
	},
	[18] = {
		.species = SPECIES_PARASECT,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_GRASS,
		.bst = 405,
		.moves = Parasect_Moves
	},
	[19] = {
		.species = SPECIES_VENOMOTH,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_POISON,
		.bst = 450,
		.moves = Venomoth_Moves
	},
	[20] = {
		.species = SPECIES_DUGTRIO,
		.type_1 = TYPE_GROUND,
		.type_2 = TYPE_GROUND,
		.bst = 405,
		.moves = Dugtrio_Moves
	},
	[21] = {
		.species = SPECIES_PERSIAN,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 440,
		.moves = Persian_Moves
	},
	[22] = {
		.species = SPECIES_GOLDUCK,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 500,
		.moves = Golduck_Moves
	},
	[23] = {
		.species = SPECIES_PRIMEAPE,
		.type_1 = TYPE_FIGHTING,
		.type_2 = TYPE_FIGHTING,
		.bst = 455,
		.moves = Primeape_Moves
	},
	[24] = {
		.species = SPECIES_ARCANINE,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FIRE,
		.bst = 555,
		.moves = Arcanine_Moves
	},
	[25] = {
		.species = SPECIES_POLIWRATH,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_FIGHTING,
		.bst = 500,
		.moves = Poliwrath_Moves
	},
	[26] = {
		.species = SPECIES_ALAKAZAM,
		.type_1 = TYPE_PSYCHIC,
		.type_2 = TYPE_PSYCHIC,
		.bst = 490,
		.moves = Alakazam_Moves
	},
	[27] = {
		.species = SPECIES_MACHAMP,
		.type_1 = TYPE_FIGHTING,
		.type_2 = TYPE_FIGHTING,
		.bst = 505,
		.moves = Machamp_Moves
	},
	[28] = {
		.species = SPECIES_VICTREEBEL,
		.type_1 = TYPE_GRASS,
		.type_2 = TYPE_POISON,
		.bst = 480,
		.moves = Victreebel_Moves
	},
	[29] = {
		.species = SPECIES_TENTACRUEL,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_POISON,
		.bst = 515,
		.moves = Tentacruel_Moves
	},
	[30] = {
		.species = SPECIES_GOLEM,
		.type_1 = TYPE_ROCK,
		.type_2 = TYPE_GROUND,
		.bst = 485,
		.moves = Golem_Moves
	},
	[31] = {
		.species = SPECIES_RAPIDASH,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FIRE,
		.bst = 500,
		.moves = Rapidash_Moves
	},
	[32] = {
		.species = SPECIES_SLOWBRO,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_PSYCHIC,
		.bst = 490,
		.moves = Slowbro_Moves
	},
	[33] = {
		.species = SPECIES_MAGNETON,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_STEEL,
		.bst = 465,
		.moves = Magneton_Moves
	},
	[34] = {
		.species = SPECIES_FARFETCHD,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_FLYING,
		.bst = 352,
		.moves = Farfetchd_Moves
	},
	[35] = {
		.species = SPECIES_DODRIO,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_FLYING,
		.bst = 460,
		.moves = Dodrio_Moves
	},
	[36] = {
		.species = SPECIES_DEWGONG,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_ICE,
		.bst = 475,
		.moves = Dewgong_Moves
	},
	[37] = {
		.species = SPECIES_MUK,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_POISON,
		.bst = 500,
		.moves = Muk_Moves
	},
	[38] = {
		.species = SPECIES_CLOYSTER,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_ICE,
		.bst = 525,
		.moves = Cloyster_Moves
	},
	[39] = {
		.species = SPECIES_GENGAR,
		.type_1 = TYPE_GHOST,
		.type_2 = TYPE_POISON,
		.bst = 500,
		.moves = Gengar_Moves
	},
	[40] = {
		.species = SPECIES_ONIX,
		.type_1 = TYPE_ROCK,
		.type_2 = TYPE_GROUND,
		.bst = 385,
		.moves = Onix_Moves
	},
	[41] = {
		.species = SPECIES_HYPNO,
		.type_1 = TYPE_PSYCHIC,
		.type_2 = TYPE_PSYCHIC,
		.bst = 483,
		.moves = Hypno_Moves
	},
	[42] = {
		.species = SPECIES_KINGLER,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 475,
		.moves = Kingler_Moves
	},
	[43] = {
		.species = SPECIES_ELECTRODE,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_ELECTRIC,
		.bst = 480,
		.moves = Electrode_Moves
	},
	[44] = {
		.species = SPECIES_EXEGGUTOR,
		.type_1 = TYPE_GRASS,
		.type_2 = TYPE_PSYCHIC,
		.bst = 520,
		.moves = Exeggutor_Moves
	},
	[45] = {
		.species = SPECIES_MAROWAK,
		.type_1 = TYPE_GROUND,
		.type_2 = TYPE_GROUND,
		.bst = 425,
		.moves = Marowak_Moves
	},
	[46] = {
		.species = SPECIES_HITMONLEE,
		.type_1 = TYPE_FIGHTING,
		.type_2 = TYPE_FIGHTING,
		.bst = 455,
		.moves = Hitmonlee_Moves
	},
	[47] = {
		.species = SPECIES_HITMONCHAN,
		.type_1 = TYPE_FIGHTING,
		.type_2 = TYPE_FIGHTING,
		.bst = 455,
		.moves = Hitmonchan_Moves
	},
	[48] = {
		.species = SPECIES_LICKITUNG,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 385,
		.moves = Lickitung_Moves
	},
	[49] = {
		.species = SPECIES_WEEZING,
		.type_1 = TYPE_POISON,
		.type_2 = TYPE_POISON,
		.bst = 490,
		.moves = Weezing_Moves
	},
	[50] = {
		.species = SPECIES_RHYDON,
		.type_1 = TYPE_GROUND,
		.type_2 = TYPE_ROCK,
		.bst = 485,
		.moves = Rhydon_Moves
	},
	[51] = {
		.species = SPECIES_CHANSEY,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 450,
		.moves = Chansey_Moves
	},
	[52] = {
		.species = SPECIES_TANGELA,
		.type_1 = TYPE_GRASS,
		.type_2 = TYPE_GRASS,
		.bst = 435,
		.moves = Tangela_Moves
	},
	[53] = {
		.species = SPECIES_KANGASKHAN,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 490,
		.moves = Kangaskhan_Moves
	},
	[54] = {
		.species = SPECIES_SEADRA,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 440,
		.moves = Seadra_Moves
	},
	[55] = {
		.species = SPECIES_SEAKING,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 450,
		.moves = Seaking_Moves
	},
	[56] = {
		.species = SPECIES_STARMIE,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_PSYCHIC,
		.bst = 520,
		.moves = Starmie_Moves
	},
	[57] = {
		.species = SPECIES_MR_MIME,
		.type_1 = TYPE_PSYCHIC,
		.type_2 = TYPE_PSYCHIC,
		.bst = 460,
		.moves = Mr_Mime_Moves
	},
	[58] = {
		.species = SPECIES_SCYTHER,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_FLYING,
		.bst = 500,
		.moves = Scyther_Moves
	},
	[59] = {
		.species = SPECIES_JYNX,
		.type_1 = TYPE_ICE,
		.type_2 = TYPE_PSYCHIC,
		.bst = 455,
		.moves = Jynx_Moves
	},
	[60] = {
		.species = SPECIES_ELECTABUZZ,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_ELECTRIC,
		.bst = 490,
		.moves = Electabuzz_Moves
	},
	[61] = {
		.species = SPECIES_MAGMAR,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FIRE,
		.bst = 495,
		.moves = Magmar_Moves
	},
	[62] = {
		.species = SPECIES_PINSIR,
		.type_1 = TYPE_BUG,
		.type_2 = TYPE_BUG,
		.bst = 500,
		.moves = Pinsir_Moves
	},
	[63] = {
		.species = SPECIES_TAUROS,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 490,
		.moves = Tauros_Moves
	},
	[64] = {
		.species = SPECIES_GYARADOS,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_FLYING,
		.bst = 540,
		.moves = Gyarados_Moves
	},
	[65] = {
		.species = SPECIES_LAPRAS,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_ICE,
		.bst = 535,
		.moves = Lapras_Moves
	},
	[66] = {
		.species = SPECIES_DITTO,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 288,
		.moves = Ditto_Moves
	},
	[67] = {
		.species = SPECIES_VAPOREON,
		.type_1 = TYPE_WATER,
		.type_2 = TYPE_WATER,
		.bst = 525,
		.moves = Vaporeon_Moves
	},
	[68] = {
		.species = SPECIES_JOLTEON,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_ELECTRIC,
		.bst = 525,
		.moves = Jolteon_Moves
	},
	[69] = {
		.species = SPECIES_FLAREON,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FIRE,
		.bst = 525,
		.moves = Flareon_Moves
	},
	[70] = {
		.species = SPECIES_PORYGON,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 395,
		.moves = Porygon_Moves
	},
	[71] = {
		.species = SPECIES_OMASTAR,
		.type_1 = TYPE_ROCK,
		.type_2 = TYPE_WATER,
		.bst = 495,
		.moves = Omastar_Moves
	},
	[72] = {
		.species = SPECIES_KABUTOPS,
		.type_1 = TYPE_ROCK,
		.type_2 = TYPE_WATER,
		.bst = 495,
		.moves = Kabutops_Moves
	},
	[73] = {
		.species = SPECIES_AERODACTYL,
		.type_1 = TYPE_ROCK,
		.type_2 = TYPE_FLYING,
		.bst = 515,
		.moves = Aerodactyl_Moves
	},
	[74] = {
		.species = SPECIES_SNORLAX,
		.type_1 = TYPE_NORMAL,
		.type_2 = TYPE_NORMAL,
		.bst = 540,
		.moves = Snorlax_Moves
	},
	[75] = {
		.species = SPECIES_ARTICUNO,
		.type_1 = TYPE_ICE,
		.type_2 = TYPE_FLYING,
		.bst = 580,
		.moves = Articuno_Moves
	},
	[76] = {
		.species = SPECIES_ZAPDOS,
		.type_1 = TYPE_ELECTRIC,
		.type_2 = TYPE_FLYING,
		.bst = 580,
		.moves = Zapdos_Moves
	},
	[77] = {
		.species = SPECIES_MOLTRES,
		.type_1 = TYPE_FIRE,
		.type_2 = TYPE_FLYING,
		.bst = 580,
		.moves = Moltres_Moves
	},
	[78] = {
		.species = SPECIES_DRAGONAIR,
		.type_1 = TYPE_DRAGON,
		.type_2 = TYPE_DRAGON,
		.bst = 420,
		.moves = Dragonair_Moves
	},
};

#endif