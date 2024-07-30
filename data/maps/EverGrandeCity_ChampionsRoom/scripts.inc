# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts::
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition:
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp:
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth::
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame:
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom::
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Steven
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachSteven:
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Steven::
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_Text_Defeat
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_DEFEATED_CHAMPION
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExitStart
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExit
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExitStart:
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExit:
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Welcome, {PLAYER}{KUN}.\p"
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was looking forward to seeing you\n"
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "here one day. You... What did you see\l"
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "on your journey with your POKéMON?\p"
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did you feel, meeting so many\n"
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "other TRAINERS like you?\p"
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What has awoken in you?\p"
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I want you to hit me with it all!\p"
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Bring it!$\p"
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Congratulations!\p"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The feeling you have for your\n"
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON... And the POKéMON that\l"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "responded to those feelings with\l"
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "all their might...\p"
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "They came together as one, and\n"
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "created an even greater power.\p"
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And thus, you were able to grasp\n"
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "victory today!\p"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are rightfully the HOENN\n"
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "region's new...$\p"
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
