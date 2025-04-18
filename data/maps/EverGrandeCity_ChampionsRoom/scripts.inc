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
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	removefieldmugshot
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, EverGrandeCity_ChampionsRoom_EventScript_StevenRematch
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN, EverGrandeCity_ChampionsRoom_Text_Defeat
# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_StevenRematch::
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_STEVEN_2, EverGrandeCity_ChampionsRoom_Text_Defeat
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated::
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	removefieldmugshot
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic::
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic::
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice::
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice::
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF::
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterUp
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe, MSGBOX_DEFAULT
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	removefieldmugshot
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExitStart
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterUp
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside, MSGBOX_DEFAULT
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	removefieldmugshot
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, MALE, EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_STEVEN, EverGrandeCity_ChampionsRoom_Movement_StevenExit
# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 7, 16
# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations::
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations::
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer::
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth::
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart:
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit:
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer:
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth:
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_right
# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows:
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExitStart:
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_StevenExit:
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives:
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech:
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Welcome, {PLAYER}{KUN}.\p"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I was looking forward to seeing you\n"
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "here one day. You... What did you see\l"
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "on your journey with your POKéMON?\p"
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did you feel, meeting so many\n"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "other TRAINERS like you?\p"
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What has awoken in you?\p"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I want you to hit me with it all!\p"
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Bring it!$\p"
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat:
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the CHAMPION, fall in defeat…\p"
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble POKéMON\n"
# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "TRAINER!$"
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech:
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: Congratulations!\p"
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The feeling you have for your\n"
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "POKéMON... And the POKéMON that\l"
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "responded to those feelings with\l"
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "all their might...\p"
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "They came together as one, and\n"
# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "created an even greater power.\p"
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And thus, you were able to grasp\n"
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "victory today!\p"
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are rightfully the HOENN\n"
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "region's new...$\p"
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice:
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\p"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION…$"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver:
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Huh?\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice:
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}!\p"
# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the CHAMPION?…$"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon:
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: {PLAYER}…\p"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the CHAMPION?$"
# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex:
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: See?\n"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the PETALBURG GYM,\l"
# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the CHAMPION!\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your POKéDEX?\n"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations:
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH: Anyways,\n"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenComeWithMe:
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new CHAMPION!\p"
# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_StevenWaitOutside:
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "STEVEN: I'm sorry, but…\p"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those TRAINERS who\n"
# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become CHAMPIONS may enter.\p"
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "PROF. BIRCH.$"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations:
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "MAY: Groan…\p"
# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations:
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "BRENDAN: Whaaaat?! … … … … …\n"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
