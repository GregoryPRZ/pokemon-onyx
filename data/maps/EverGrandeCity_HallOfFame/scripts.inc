# 1 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 2 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 4 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_MapScripts::
# 5 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_HallOfFame_OnFrame
# 6 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_HallOfFame_OnWarp
# 7 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 9 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnWarp:
# 10 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 13 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 17 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_OnFrame:
# 18 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame
# 19 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.2byte 0
# 20 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 21 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_EnterHallOfFame::
# 22 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	lockall
# 23 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 24 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1
# 25 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 26 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterRight
# 27 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 29 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 30 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
# 31 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	removefieldmugshot
# 32 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 33 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 34 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2
# 35 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 36 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 37 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterRight
# 38 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 39 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 40 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 41 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	msgbox EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
# 42 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	removefieldmugshot
# 43 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	closemessage
# 44 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 46 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitmovement 0
# 47 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 20
# 48 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 49 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 50 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	delay 40
# 51 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
# 53 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	checkplayergender
# 54 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_HallOfFame_EventScript_GameClearMale
# 55 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_HallOfFame_EventScript_GameClearFemale
# 56 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 58 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearMale::
# 59 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
# 60 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 61 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 62 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 63 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 64 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 65 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 66 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_EventScript_GameClearFemale::
# 67 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
# 68 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 69 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	special GameClear
# 70 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	waitstate
# 71 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	releaseall
# 72 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 74 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame1:
# 75 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 76 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 77 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 78 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 79 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 80 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 81 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 82 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 83 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Movement_WalkIntoHallOfFame2:
# 84 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 85 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 86 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 87 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 88 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	walk_up
# 89 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	step_end
# 90 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 91 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_HereWeHonorLeagueChampions:
# 92 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: This room…\p"
# 93 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "This is where we keep records of\n"
# 94 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "POKéMON that prevailed through\l"
# 95 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "harsh battles.\p"
# 96 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "It is here that the LEAGUE CHAMPIONS\n"
# 97 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "are honored.$"
# 98 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"

# 99 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames:
# 100 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "STEVEN: Come on, let's record your\n"
# 101 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "name as a TRAINER who triumphed over\l"
# 102 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the POKéMON LEAGUE, and the names of\l"
# 103 "data/maps/EverGrandeCity_HallOfFame/scripts.pory"
	.string "the partners who battled with you.$"
