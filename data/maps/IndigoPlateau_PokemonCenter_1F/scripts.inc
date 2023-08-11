.set LOCALID_DOOR_GUARD, 4

IndigoPlateau_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

IndigoPlateau_PokemonCenter_1F_OnTransition::
	setrespawn SPAWN_INDIGO_PLATEAU
	specialvar VAR_RESULT, IsNationalPokedexEnabled
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
	setobjectxyperm LOCALID_DOOR_GUARD, 4, 2
	return

IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKEMON_GET, IndigoPlateau_PokemonCenter_1F_EventScript_SwitchOutTeam
	msgbox IndigoPlateau_PokemonCenter_1F_Text_WelcomeToTheEliteFour
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, IndigoPlateau_PokemonCenter_1F_EventScript_GenerateTeam
	case 1, IndigoPlateau_PokemonCenter_1F_EventScript_SpeakWithTheClerk
	case SCR_MENU_CANCEL, IndigoPlateau_PokemonCenter_1F_EventScript_SpeakWithTheClerk
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_SpeakWithTheClerk::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_SpeakWithTheClerk
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_GenerateTeam::
	callnative GenerateTeam
	setflag FLAG_0x0AF
	msgbox IndigoPlateau_PokemonCenter_1F_Text_ThereYouGo
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_SwitchOutTeam::
	goto_if_set FLAG_0x0AF, IndigoPlateau_PokemonCenter_1F_EventScript_YouShouldTry
	msgbox IndigoPlateau_PokemonCenter_1F_Text_SwitchOutTeam
	multichoice 19, 8, MULTICHOICE_YES_NO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, IndigoPlateau_PokemonCenter_1F_EventScript_GenerateTeam
	case 1, IndigoPlateau_PokemonCenter_1F_EventScript_SpeakWithTheClerk
	case SCR_MENU_CANCEL, IndigoPlateau_PokemonCenter_1F_EventScript_SpeakWithTheClerk
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_YouShouldTry::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_YouShouldTry
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_WelcomeToTheEliteFour
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart IndigoPlateau_PokemonCenter_1F_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
IndigoPlateau_PokemonCenter_1F_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse
	release
	end
