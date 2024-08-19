# 1 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_MapScripts::
# 3 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_PhoebesRoom_OnLoad
# 4 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_PhoebesRoom_OnWarp
# 5 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_PhoebesRoom_OnFrame
# 6 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.byte 0
# 7 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 8 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnWarp:
# 9 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth
# 10 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 11 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PlayerTurnNorth::
# 13 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 14 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnFrame:
# 17 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 1, EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor
# 18 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_WalkInCloseDoor::
# 21 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lockall
# 22 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 23 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 2
# 24 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	releaseall
# 25 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 27 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_OnLoad:
# 28 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom
# 29 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call_if_eq VAR_ELITE_4_STATE, 2, EverGrandeCity_PhoebesRoom_EventScript_CloseDoor
# 30 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_ResetAdvanceToNextRoom::
# 33 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 34 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 35 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_CloseDoor::
# 37 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 38 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	return
# 39 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Phoebe::
# 41 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	lock
# 42 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	faceplayer
# 43 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_PhoebesRoom_EventScript_PhoebeRematch
# 44 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 45 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 46 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PHOEBE, EMOTE_NORMAL
# 47 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 48 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removefieldmugshot
# 49 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, EverGrandeCity_PhoebesRoom_Text_Defeat
# 50 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 51 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 52 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 53 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech::
# 54 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PHOEBE, EMOTE_NORMAL
# 55 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 56 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removefieldmugshot
# 57 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 58 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_Defeated::
# 61 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
# 62 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 63 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PHOEBE, EMOTE_NORMAL
# 64 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 65 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removefieldmugshot
# 66 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	release
# 67 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 68 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 69 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_EventScript_PhoebeRematch::
# 70 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, EverGrandeCity_PhoebesRoom_EventScript_PostBattleSpeech
# 71 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
# 72 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PHOEBE, EMOTE_NORMAL
# 73 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	msgbox EverGrandeCity_PhoebesRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 74 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	removefieldmugshot
# 75 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE_2, EverGrandeCity_PhoebesRoom_Text_Defeat
# 76 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	goto EverGrandeCity_PhoebesRoom_EventScript_Defeated
# 77 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	end
# 78 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_IntroSpeech:
# 80 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Ahahaha!\p"
# 81 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I'm PHOEBE of the ELITE FOUR.\n"
# 82 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I did my training on MT. PYRE.\p"
# 83 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "While I trained, I gained the ability\n"
# 84 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "to commune with GHOST-type POKéMON.\p"
# 85 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yes, the bond I developed with POKéMON\n"
# 86 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "is extremely tight.\p"
# 87 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "So, come on, just try and see if you can\n"
# 88 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "even inflict damage on my POKéMON!$"
# 89 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 90 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_Defeat:
# 91 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Oh, darn.\n"
# 92 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I've gone and lost.$"
# 93 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"

# 94 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech:
# 95 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "There's a definite bond between you\n"
# 96 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "and your POKéMON, too.\p"
# 97 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "I didn't recognize it, so it's only\n"
# 98 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "natural that I lost.\p"
# 99 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Yup, I'd like to see how far your bond\n"
# 100 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "will carry you.\p"
# 101 "data/maps/EverGrandeCity_PhoebesRoom/scripts.pory"
	.string "Go ahead, move on to the next room.$"
