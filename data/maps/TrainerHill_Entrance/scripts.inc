# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"

# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"

# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"

# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"

# 33 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"

# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"

# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"

# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"

# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"

# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"

# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"

# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"

# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"

# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"

# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"

# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"

# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"

# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"

# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"

# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"

# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"

# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"

# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"

# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"

# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"

# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"

# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"

# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"

# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"

# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"

# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"

# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"

# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"

# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"

# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ClerkLeft::
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_StrategyItems
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"

# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_StrategyItems:
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_POWER_HERB
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_RED_CARD
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_EJECT_BUTTON
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_EJECT_PACK
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ROOM_SERVICE
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_THROAT_SPRAY
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_RING_TARGET
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_IRON_BALL
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ADRENALINE_ORB
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SNOWBALL
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ABSORB_BULB
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_LUMINOUS_MOSS
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_CELL_BATTERY
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_METRONOME
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_STICKY_BARB
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GRIP_CLAW
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SHED_SHELL
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"

# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ClerkRight::
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_StrategyItems2
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"

# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_StrategyItems2:
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_CHARCOAL
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAGNET
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HARD_STONE
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_METAL_COAT
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_POISON_BARB
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"

# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS.\p"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"

# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the TRAINER HILL where\n"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINERS!$"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"

# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"

# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The TRAINERS here now are…\p"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be TRAINERS gathered\n"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"

# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting TRAINERS?$"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"

# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"

# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"

# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"

# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"

# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the TRAINERS switch places,\n"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"

# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"

# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the TRAINER HILL, we conduct\n"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In TRAINER battles along the way,\n"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"

# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one POKéMON with you.\p"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two POKéMON\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"

# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the TRAINER HILL, because…\p"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"

# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"

# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"

# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"

# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"

# 456 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 460 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 461 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 462 "data/maps/TrainerHill_Entrance/scripts.pory"

# 463 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 464 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 465 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the TRAINER HILL built for but\n"
# 466 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 467 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 468 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 469 "data/maps/TrainerHill_Entrance/scripts.pory"

# 470 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 471 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 472 "data/maps/TrainerHill_Entrance/scripts.pory"

# 473 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 474 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of TRAINERS\n"
# 475 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and POKéMON combos are ahead?\p"
# 476 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 477 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 478 "data/maps/TrainerHill_Entrance/scripts.pory"

# 479 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 480 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough TRAINERS come to this\n"
# 481 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "TRAINER HILL from all over.\p"
# 482 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 483 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 484 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 485 "data/maps/TrainerHill_Entrance/scripts.pory"

# 486 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 487 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 488 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 489 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 490 "data/maps/TrainerHill_Entrance/scripts.pory"

# 491 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 492 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 493 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 494 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 495 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 496 "data/maps/TrainerHill_Entrance/scripts.pory"

# 497 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 498 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 499 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
