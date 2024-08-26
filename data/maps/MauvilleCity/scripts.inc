# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 5 "data/maps/MauvilleCity/scripts.pory"

# 6 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts::
# 7 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 8 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 9 "data/maps/MauvilleCity/scripts.pory"

# 10 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition:
# 11 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE103
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE110
# 14 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 15 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 16 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 17 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 18 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 19 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM_VOLT_SWITCH_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 20 "data/maps/MauvilleCity/scripts.pory"
	end
# 21 "data/maps/MauvilleCity/scripts.pory"

# 22 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym::
# 23 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 24 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 25 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 26 "data/maps/MauvilleCity/scripts.pory"
	return
# 27 "data/maps/MauvilleCity/scripts.pory"

# 28 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy::
# 29 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 30 "data/maps/MauvilleCity/scripts.pory"
	end
# 31 "data/maps/MauvilleCity/scripts.pory"

# 32 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac::
# 33 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 34 "data/maps/MauvilleCity/scripts.pory"
	end
# 35 "data/maps/MauvilleCity/scripts.pory"

# 36 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman::
# 37 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 38 "data/maps/MauvilleCity/scripts.pory"
	end
# 39 "data/maps/MauvilleCity/scripts.pory"

# 40 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy::
# 41 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 42 "data/maps/MauvilleCity/scripts.pory"
	end
# 43 "data/maps/MauvilleCity/scripts.pory"

# 44 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign::
# 45 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 46 "data/maps/MauvilleCity/scripts.pory"
	end
# 47 "data/maps/MauvilleCity/scripts.pory"

# 48 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign::
# 49 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 50 "data/maps/MauvilleCity/scripts.pory"
	end
# 51 "data/maps/MauvilleCity/scripts.pory"

# 52 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign::
# 53 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 54 "data/maps/MauvilleCity/scripts.pory"
	end
# 55 "data/maps/MauvilleCity/scripts.pory"

# 56 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign::
# 57 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 58 "data/maps/MauvilleCity/scripts.pory"
	end
# 59 "data/maps/MauvilleCity/scripts.pory"

# 60 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM::
# 61 "data/maps/MauvilleCity/scripts.pory"
	lock
# 62 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 63 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 64 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 65 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 66 "data/maps/MauvilleCity/scripts.pory"
	release
# 67 "data/maps/MauvilleCity/scripts.pory"
	end
# 68 "data/maps/MauvilleCity/scripts.pory"

# 69 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained::
# 70 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 71 "data/maps/MauvilleCity/scripts.pory"
	release
# 72 "data/maps/MauvilleCity/scripts.pory"
	end
# 73 "data/maps/MauvilleCity/scripts.pory"

# 74 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle::
# 75 "data/maps/MauvilleCity/scripts.pory"
	lock
# 76 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 77 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 78 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 79 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 80 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 81 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/MauvilleCity/scripts.pory"
	release
# 83 "data/maps/MauvilleCity/scripts.pory"
	end
# 84 "data/maps/MauvilleCity/scripts.pory"

# 85 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
# 86 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 87 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 88 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 89 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/MauvilleCity/scripts.pory"
	release
# 91 "data/maps/MauvilleCity/scripts.pory"
	end
# 92 "data/maps/MauvilleCity/scripts.pory"

# 93 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally::
# 94 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 95 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 96 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 97 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 102 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 104 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 105 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 107 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 109 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 110 "data/maps/MauvilleCity/scripts.pory"
	end
# 111 "data/maps/MauvilleCity/scripts.pory"

# 112 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt::
# 113 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
# 114 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
# 115 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 116 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 117 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 118 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 119 "data/maps/MauvilleCity/scripts.pory"
	end
# 120 "data/maps/MauvilleCity/scripts.pory"

# 121 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth::
# 122 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 123 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 124 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 125 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 127 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 130 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 131 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 132 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 133 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 134 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 135 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 136 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 137 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 138 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 139 "data/maps/MauvilleCity/scripts.pory"
	end
# 140 "data/maps/MauvilleCity/scripts.pory"

# 141 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast::
# 142 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 143 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 144 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 145 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 147 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 148 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 152 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 153 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 154 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 155 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 156 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 157 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 158 "data/maps/MauvilleCity/scripts.pory"
	end
# 159 "data/maps/MauvilleCity/scripts.pory"

# 160 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally::
# 161 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 162 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 163 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 164 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 165 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 166 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 167 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 168 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
# 169 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
# 170 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 171 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 172 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 173 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 174 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 175 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
# 176 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
# 177 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 178 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 179 "data/maps/MauvilleCity/scripts.pory"
	end
# 180 "data/maps/MauvilleCity/scripts.pory"

# 181 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth::
# 182 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 183 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 184 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/MauvilleCity/scripts.pory"
	return
# 186 "data/maps/MauvilleCity/scripts.pory"

# 187 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast::
# 188 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 189 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 190 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 191 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 192 "data/maps/MauvilleCity/scripts.pory"
	return
# 193 "data/maps/MauvilleCity/scripts.pory"

# 194 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth::
# 195 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 196 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 197 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/MauvilleCity/scripts.pory"
	return
# 199 "data/maps/MauvilleCity/scripts.pory"

# 200 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast::
# 201 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 203 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/MauvilleCity/scripts.pory"
	return
# 205 "data/maps/MauvilleCity/scripts.pory"

# 206 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally::
# 207 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 208 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 212 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 213 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterRight
# 216 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 218 "data/maps/MauvilleCity/scripts.pory"
	return
# 219 "data/maps/MauvilleCity/scripts.pory"

# 220 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle::
# 221 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 222 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 223 "data/maps/MauvilleCity/scripts.pory"
	release
# 224 "data/maps/MauvilleCity/scripts.pory"
	end
# 225 "data/maps/MauvilleCity/scripts.pory"

# 226 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain::
# 227 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 228 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 230 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 231 "data/maps/MauvilleCity/scripts.pory"
	end
# 232 "data/maps/MauvilleCity/scripts.pory"

# 233 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1:
# 234 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 235 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 236 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 237 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 238 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 239 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 240 "data/maps/MauvilleCity/scripts.pory"

# 241 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1:
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 247 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 248 "data/maps/MauvilleCity/scripts.pory"

# 249 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2:
# 250 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 251 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 255 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 256 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 257 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 258 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 261 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 262 "data/maps/MauvilleCity/scripts.pory"

# 263 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2:
# 264 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 265 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 268 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 269 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 270 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 271 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 272 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 275 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 276 "data/maps/MauvilleCity/scripts.pory"

# 277 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
# 278 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 279 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 282 "data/maps/MauvilleCity/scripts.pory"

# 283 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2:
# 284 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 289 "data/maps/MauvilleCity/scripts.pory"

# 290 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth:
# 291 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 292 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 293 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 294 "data/maps/MauvilleCity/scripts.pory"

# 295 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast:
# 296 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 297 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 298 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 299 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 300 "data/maps/MauvilleCity/scripts.pory"

# 301 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1:
# 302 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 303 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 304 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 305 "data/maps/MauvilleCity/scripts.pory"

# 306 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
# 307 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 308 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_left
# 309 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 310 "data/maps/MauvilleCity/scripts.pory"

# 311 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1:
# 312 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 313 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 314 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 316 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 317 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 318 "data/maps/MauvilleCity/scripts.pory"

# 319 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1:
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 324 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 325 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 326 "data/maps/MauvilleCity/scripts.pory"

# 327 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth:
# 328 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 329 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 330 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_down
# 332 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 333 "data/maps/MauvilleCity/scripts.pory"

# 334 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
# 335 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 336 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 337 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 338 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 339 "data/maps/MauvilleCity/scripts.pory"

# 340 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast:
# 341 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 343 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 344 "data/maps/MauvilleCity/scripts.pory"

# 345 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2:
# 346 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 347 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 350 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 351 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 352 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 355 "data/maps/MauvilleCity/scripts.pory"

# 356 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2:
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 362 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 363 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 367 "data/maps/MauvilleCity/scripts.pory"

# 368 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth:
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 373 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 374 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 375 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_faster_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 381 "data/maps/MauvilleCity/scripts.pory"

# 382 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast:
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 388 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 389 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 394 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 395 "data/maps/MauvilleCity/scripts.pory"

# 396 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth:
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 401 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 402 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 403 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 407 "data/maps/MauvilleCity/scripts.pory"

# 408 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast:
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 414 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 415 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 420 "data/maps/MauvilleCity/scripts.pory"

# 421 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson::
# 422 "data/maps/MauvilleCity/scripts.pory"
	lock
# 423 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 424 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM_VOLT_SWITCH_FROM_WATTSON, MauvilleCity_EventScript_ReceivedVoltSwitch
# 425 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
# 426 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 427 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 428 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 429 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 430 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 431 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 432 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 433 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 434 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 435 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 436 "data/maps/MauvilleCity/scripts.pory"
	release
# 437 "data/maps/MauvilleCity/scripts.pory"
	end
# 438 "data/maps/MauvilleCity/scripts.pory"

# 439 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville::
# 440 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 441 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 442 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 443 "data/maps/MauvilleCity/scripts.pory"
	release
# 444 "data/maps/MauvilleCity/scripts.pory"
	end
# 445 "data/maps/MauvilleCity/scripts.pory"

# 446 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville::
# 447 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 448 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 449 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 450 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM_VOLT_SWITCH
# 451 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 452 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM_VOLT_SWITCH_FROM_WATTSON
# 453 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 454 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 455 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 456 "data/maps/MauvilleCity/scripts.pory"
	release
# 457 "data/maps/MauvilleCity/scripts.pory"
	end
# 458 "data/maps/MauvilleCity/scripts.pory"

# 459 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedVoltSwitch::
# 460 "data/maps/MauvilleCity/scripts.pory"
	createfieldmugshot MUGSHOT_WATTSON, EMOTE_NORMAL
# 461 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 462 "data/maps/MauvilleCity/scripts.pory"
	removefieldmugshot
# 463 "data/maps/MauvilleCity/scripts.pory"
	release
# 464 "data/maps/MauvilleCity/scripts.pory"
	end
# 465 "data/maps/MauvilleCity/scripts.pory"

# 466 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall::
# 467 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 468 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 469 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 470 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 471 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 472 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 473 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 474 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 475 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 476 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 477 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 478 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 479 "data/maps/MauvilleCity/scripts.pory"
	end
# 480 "data/maps/MauvilleCity/scripts.pory"

# 481 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DrifblimStop::
# 482 "data/maps/MauvilleCity/scripts.pory"
	call Common_EventScript_FlyingTaxi
# 483 "data/maps/MauvilleCity/scripts.pory"
	release
# 484 "data/maps/MauvilleCity/scripts.pory"
	end
# 485 "data/maps/MauvilleCity/scripts.pory"

# 486 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DrifblimStopSign::
# 487 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_DrifblimStopSign, MSGBOX_SIGN
# 488 "data/maps/MauvilleCity/scripts.pory"
	end
# 489 "data/maps/MauvilleCity/scripts.pory"

# 490 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_DrifblimStopSign:
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY DRIFBLIM STOP\n"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "A new way to fly over HOENN!$"
# 493 "data/maps/MauvilleCity/scripts.pory"

# 494 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy:
# 495 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: It's because of POKéMON that\n"
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 498 "data/maps/MauvilleCity/scripts.pory"

# 499 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym:
# 500 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Aww, UNCLE, please?\p"
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this GYM and see\n"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 504 "data/maps/MauvilleCity/scripts.pory"

# 505 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt:
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: Now hold on, WALLY.\p"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with POKéMON,\n"
# 508 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 509 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a GYM?$"
# 511 "data/maps/MauvilleCity/scripts.pory"

# 512 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone:
# 513 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: I'm not pushing it.\p"
# 514 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with RALTS,\n"
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 516 "data/maps/MauvilleCity/scripts.pory"

# 517 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe:
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 520 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 521 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my UNCLE to\n"
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 524 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 525 "data/maps/MauvilleCity/scripts.pory"

# 526 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh… If you won't battle me,\n"
# 528 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my UNCLE won't know that I've\l"
# 529 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 530 "data/maps/MauvilleCity/scripts.pory"

# 531 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally:
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
# 533 "data/maps/MauvilleCity/scripts.pory"
	.string "On WALLY's behalf, can I ask you to\l"
# 534 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 537 "data/maps/MauvilleCity/scripts.pory"

# 538 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe:
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, please!\n"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 541 "data/maps/MauvilleCity/scripts.pory"

# 542 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome:
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: {PLAYER}, thank you.\p"
# 544 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 545 "data/maps/MauvilleCity/scripts.pory"

# 546 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat:
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: … … … … … … …\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 550 "data/maps/MauvilleCity/scripts.pory"

# 551 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf:
# 552 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: UNCLE…\n"
# 553 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to VERDANTURF…$"
# 554 "data/maps/MauvilleCity/scripts.pory"

# 555 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle:
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a TRAINER is tough, isn't it?\p"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have POKéMON\n"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real TRAINER is about.$"
# 561 "data/maps/MauvilleCity/scripts.pory"

# 562 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown:
# 563 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: WALLY, there's no need to be so\n"
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 569 "data/maps/MauvilleCity/scripts.pory"

# 570 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime:
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the TRAINER who kept\l"
# 573 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for WALLY when he caught\l"
# 574 "data/maps/MauvilleCity/scripts.pory"
	.string "his POKéMON.\p"
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in VERDANTURF\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 577 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure WALLY would enjoy it.$"
# 578 "data/maps/MauvilleCity/scripts.pory"

# 579 "data/maps/MauvilleCity/scripts.pory"

# 580 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall:
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a POKéNAV!\p"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 590 "data/maps/MauvilleCity/scripts.pory"

# 591 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally:
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered WALLY\n"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "in the POKéNAV.$"
# 594 "data/maps/MauvilleCity/scripts.pory"

# 595 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack:
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "SCOTT: Hehe…\n"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy WALLY,\n"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real POKéMON\n"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize TRAINERS like that!\p"
# 605 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 606 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 607 "data/maps/MauvilleCity/scripts.pory"

# 608 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey:
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 613 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 614 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY has an underground\n"
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called NEW MAUVILLE.\p"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the GENERATOR.\p"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "The GENERATOR has been running a bit\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the KEY to get into\n"
# 621 "data/maps/MauvilleCity/scripts.pory"
	.string "NEW MAUVILLE.$"
# 622 "data/maps/MauvilleCity/scripts.pory"

# 623 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge:
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Don't you worry about it.\n"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 626 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to NEW MAUVILLE is just\n"
# 627 "data/maps/MauvilleCity/scripts.pory"
	.string "a short SURF away from ROUTE 110.\p"
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 630 "data/maps/MauvilleCity/scripts.pory"

# 631 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM:
# 632 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 633 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "THUNDERBOLT!\p"
# 637 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 638 "data/maps/MauvilleCity/scripts.pory"

# 639 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge:
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "WATTSON: Wahahahaha!\p"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 642 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 643 "data/maps/MauvilleCity/scripts.pory"

# 644 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth:
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have POKéMON\n"
# 646 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 647 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your POKéMON gets hurt,\n"
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 649 "data/maps/MauvilleCity/scripts.pory"

# 650 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough:
# 651 "data/maps/MauvilleCity/scripts.pory"
	.string "The roads of this town stretch north\n"
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "and south, and east and west.\p"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "Because of that, we get all sorts of\n"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "people coming through.$"
# 655 "data/maps/MauvilleCity/scripts.pory"

# 656 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous:
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to RYDEL'S CYCLES yet?\p"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL, the owner, is a very generous\n"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 660 "data/maps/MauvilleCity/scripts.pory"

# 661 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike:
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a BIKE,\n"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "wild POKéMON could jump you.$"
# 664 "data/maps/MauvilleCity/scripts.pory"

# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign:
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY\n"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 668 "data/maps/MauvilleCity/scripts.pory"

# 669 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign:
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE CITY POKéMON GYM\n"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "LEADER: WATTSON\l"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 673 "data/maps/MauvilleCity/scripts.pory"

# 674 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign:
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 676 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 677 "data/maps/MauvilleCity/scripts.pory"
	.string "RYDEL'S CYCLES$"
# 678 "data/maps/MauvilleCity/scripts.pory"

# 679 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign:
# 680 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 681 "data/maps/MauvilleCity/scripts.pory"
	.string "MAUVILLE GAME CORNER$"
# 682 "data/maps/MauvilleCity/scripts.pory"

# 683 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV:
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 685 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 686 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 687 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 688 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 689 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 690 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 691 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 692 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 694 "data/maps/MauvilleCity/scripts.pory"

# 695 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV:
# 696 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"
