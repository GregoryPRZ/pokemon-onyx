# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 28 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 29 "data/maps/SlateportCity/scripts.pory"

# 30 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 31 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 32 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 33 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 34 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 35 "data/maps/SlateportCity/scripts.pory"
	end
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 39 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE109
# 40 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 41 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 42 "data/maps/SlateportCity/scripts.pory"
	return
# 43 "data/maps/SlateportCity/scripts.pory"

# 44 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 57 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 58 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 59 "data/maps/SlateportCity/scripts.pory"
	return
# 60 "data/maps/SlateportCity/scripts.pory"

# 61 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 62 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 64 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 66 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 67 "data/maps/SlateportCity/scripts.pory"
	return
# 68 "data/maps/SlateportCity/scripts.pory"

# 69 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 71 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 72 "data/maps/SlateportCity/scripts.pory"
	return
# 73 "data/maps/SlateportCity/scripts.pory"

# 74 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 75 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 76 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 77 "data/maps/SlateportCity/scripts.pory"

# 78 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 79 "data/maps/SlateportCity/scripts.pory"
	lockall
# 80 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 81 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 82 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 83 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 85 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 86 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 87 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 89 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 90 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 93 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 94 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 95 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 96 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 97 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 98 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 99 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 100 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 101 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 102 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 103 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 104 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 105 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 106 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 107 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 108 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 110 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 111 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 112 "data/maps/SlateportCity/scripts.pory"
	end
# 113 "data/maps/SlateportCity/scripts.pory"

# 114 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 115 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 116 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 117 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/SlateportCity/scripts.pory"
	step_end
# 119 "data/maps/SlateportCity/scripts.pory"

# 120 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 127 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 128 "data/maps/SlateportCity/scripts.pory"
	step_end
# 129 "data/maps/SlateportCity/scripts.pory"

# 130 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 139 "data/maps/SlateportCity/scripts.pory"
	step_end
# 140 "data/maps/SlateportCity/scripts.pory"

# 141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 142 "data/maps/SlateportCity/scripts.pory"
	lock
# 143 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 144 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 145 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 146 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 147 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 148 "data/maps/SlateportCity/scripts.pory"
	release
# 149 "data/maps/SlateportCity/scripts.pory"
	end
# 150 "data/maps/SlateportCity/scripts.pory"

# 151 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 157 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 159 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 160 "data/maps/SlateportCity/scripts.pory"
	release
# 161 "data/maps/SlateportCity/scripts.pory"
	end
# 162 "data/maps/SlateportCity/scripts.pory"

# 163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 164 "data/maps/SlateportCity/scripts.pory"
	lock
# 165 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 166 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 167 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 168 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 169 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 170 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 171 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 172 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 173 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 174 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 175 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 178 "data/maps/SlateportCity/scripts.pory"
	release
# 179 "data/maps/SlateportCity/scripts.pory"
	end
# 180 "data/maps/SlateportCity/scripts.pory"

# 181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 182 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 183 "data/maps/SlateportCity/scripts.pory"
	release
# 184 "data/maps/SlateportCity/scripts.pory"
	end
# 185 "data/maps/SlateportCity/scripts.pory"

# 186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 187 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 188 "data/maps/SlateportCity/scripts.pory"
	release
# 189 "data/maps/SlateportCity/scripts.pory"
	end
# 190 "data/maps/SlateportCity/scripts.pory"

# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 192 "data/maps/SlateportCity/scripts.pory"
	lock
# 193 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 194 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 195 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 196 "data/maps/SlateportCity/scripts.pory"
	release
# 197 "data/maps/SlateportCity/scripts.pory"
	end
# 198 "data/maps/SlateportCity/scripts.pory"

# 199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 200 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 201 "data/maps/SlateportCity/scripts.pory"
	release
# 202 "data/maps/SlateportCity/scripts.pory"
	end
# 203 "data/maps/SlateportCity/scripts.pory"

# 204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 205 "data/maps/SlateportCity/scripts.pory"
	lock
# 206 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 207 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 208 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 209 "data/maps/SlateportCity/scripts.pory"
	release
# 210 "data/maps/SlateportCity/scripts.pory"
	end
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 213 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 214 "data/maps/SlateportCity/scripts.pory"
	release
# 215 "data/maps/SlateportCity/scripts.pory"
	end
# 216 "data/maps/SlateportCity/scripts.pory"

# 217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 218 "data/maps/SlateportCity/scripts.pory"
	lock
# 219 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 220 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 221 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 228 "data/maps/SlateportCity/scripts.pory"
	release
# 229 "data/maps/SlateportCity/scripts.pory"
	end
# 230 "data/maps/SlateportCity/scripts.pory"

# 231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 232 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 233 "data/maps/SlateportCity/scripts.pory"
	release
# 234 "data/maps/SlateportCity/scripts.pory"
	end
# 235 "data/maps/SlateportCity/scripts.pory"

# 236 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 237 "data/maps/SlateportCity/scripts.pory"
	lock
# 238 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 239 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 240 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 241 "data/maps/SlateportCity/scripts.pory"
	release
# 242 "data/maps/SlateportCity/scripts.pory"
	end
# 243 "data/maps/SlateportCity/scripts.pory"

# 244 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 245 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity/scripts.pory"
	release
# 247 "data/maps/SlateportCity/scripts.pory"
	end
# 248 "data/maps/SlateportCity/scripts.pory"

# 249 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 250 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 252 "data/maps/SlateportCity/scripts.pory"
	end
# 253 "data/maps/SlateportCity/scripts.pory"

# 254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 255 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 259 "data/maps/SlateportCity/scripts.pory"
	lock
# 260 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 261 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 262 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 263 "data/maps/SlateportCity/scripts.pory"
	release
# 264 "data/maps/SlateportCity/scripts.pory"
	end
# 265 "data/maps/SlateportCity/scripts.pory"

# 266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 267 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity/scripts.pory"
	release
# 269 "data/maps/SlateportCity/scripts.pory"
	end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 272 "data/maps/SlateportCity/scripts.pory"
	lock
# 273 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 274 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 275 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 276 "data/maps/SlateportCity/scripts.pory"
	release
# 277 "data/maps/SlateportCity/scripts.pory"
	end
# 278 "data/maps/SlateportCity/scripts.pory"

# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 280 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 281 "data/maps/SlateportCity/scripts.pory"
	release
# 282 "data/maps/SlateportCity/scripts.pory"
	end
# 283 "data/maps/SlateportCity/scripts.pory"

# 284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 285 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 289 "data/maps/SlateportCity/scripts.pory"
	lockall
# 290 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 291 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 292 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 293 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 294 "data/maps/SlateportCity/scripts.pory"
	end
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 298 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 299 "data/maps/SlateportCity/scripts.pory"
	end
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 304 "data/maps/SlateportCity/scripts.pory"
	end
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 311 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 312 "data/maps/SlateportCity/scripts.pory"
	end
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 320 "data/maps/SlateportCity/scripts.pory"
	end
# 321 "data/maps/SlateportCity/scripts.pory"

# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 323 "data/maps/SlateportCity/scripts.pory"
	lockall
# 324 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 325 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 326 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 327 "data/maps/SlateportCity/scripts.pory"
	end
# 328 "data/maps/SlateportCity/scripts.pory"

# 329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 331 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 332 "data/maps/SlateportCity/scripts.pory"
	end
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 335 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 336 "data/maps/SlateportCity/scripts.pory"
	end
# 337 "data/maps/SlateportCity/scripts.pory"

# 338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 339 "data/maps/SlateportCity/scripts.pory"
	lock
# 340 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 341 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 342 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 343 "data/maps/SlateportCity/scripts.pory"
	release
# 344 "data/maps/SlateportCity/scripts.pory"
	end
# 345 "data/maps/SlateportCity/scripts.pory"

# 346 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity/scripts.pory"
	release
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 353 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 354 "data/maps/SlateportCity/scripts.pory"
	end
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 358 "data/maps/SlateportCity/scripts.pory"
	end
# 359 "data/maps/SlateportCity/scripts.pory"

# 360 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 361 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 366 "data/maps/SlateportCity/scripts.pory"
	end
# 367 "data/maps/SlateportCity/scripts.pory"

# 368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 370 "data/maps/SlateportCity/scripts.pory"
	end
# 371 "data/maps/SlateportCity/scripts.pory"

# 372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 373 "data/maps/SlateportCity/scripts.pory"
	lock
# 374 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 376 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 377 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 378 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 379 "data/maps/SlateportCity/scripts.pory"
	release
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 383 "data/maps/SlateportCity/scripts.pory"
	lock
# 384 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 385 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 386 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 387 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 388 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/SlateportCity/scripts.pory"
	release
# 390 "data/maps/SlateportCity/scripts.pory"
	end
# 391 "data/maps/SlateportCity/scripts.pory"

# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 393 "data/maps/SlateportCity/scripts.pory"
	lock
# 394 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 395 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 396 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 397 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 398 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 399 "data/maps/SlateportCity/scripts.pory"
	release
# 400 "data/maps/SlateportCity/scripts.pory"
	end
# 401 "data/maps/SlateportCity/scripts.pory"

# 402 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 403 "data/maps/SlateportCity/scripts.pory"
	lock
# 404 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 405 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 406 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 407 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 408 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 409 "data/maps/SlateportCity/scripts.pory"
	release
# 410 "data/maps/SlateportCity/scripts.pory"
	end
# 411 "data/maps/SlateportCity/scripts.pory"

# 412 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 413 "data/maps/SlateportCity/scripts.pory"
	lock
# 414 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 415 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 416 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 417 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 418 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/SlateportCity/scripts.pory"
	release
# 420 "data/maps/SlateportCity/scripts.pory"
	end
# 421 "data/maps/SlateportCity/scripts.pory"

# 422 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 423 "data/maps/SlateportCity/scripts.pory"
	lock
# 424 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 425 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 426 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 427 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 428 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 429 "data/maps/SlateportCity/scripts.pory"
	release
# 430 "data/maps/SlateportCity/scripts.pory"
	end
# 431 "data/maps/SlateportCity/scripts.pory"

# 432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 433 "data/maps/SlateportCity/scripts.pory"
	lock
# 434 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 435 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 436 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 437 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 438 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 439 "data/maps/SlateportCity/scripts.pory"
	release
# 440 "data/maps/SlateportCity/scripts.pory"
	end
# 441 "data/maps/SlateportCity/scripts.pory"

# 442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 443 "data/maps/SlateportCity/scripts.pory"
	lock
# 444 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 445 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 446 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 447 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 448 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 449 "data/maps/SlateportCity/scripts.pory"
	release
# 450 "data/maps/SlateportCity/scripts.pory"
	end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 453 "data/maps/SlateportCity/scripts.pory"
	lock
# 454 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 455 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 456 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 457 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 458 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 459 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 460 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 461 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 465 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 467 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 468 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 469 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 470 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 471 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 475 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	release
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 486 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 487 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 488 "data/maps/SlateportCity/scripts.pory"
	step_end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 491 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 492 "data/maps/SlateportCity/scripts.pory"
	end
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 495 "data/maps/SlateportCity/scripts.pory"
	lock
# 496 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 498 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 499 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 500 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 501 "data/maps/SlateportCity/scripts.pory"
	release
# 502 "data/maps/SlateportCity/scripts.pory"
	end
# 503 "data/maps/SlateportCity/scripts.pory"

# 504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 505 "data/maps/SlateportCity/scripts.pory"
	lock
# 506 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 507 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 508 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 509 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 510 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 511 "data/maps/SlateportCity/scripts.pory"
	release
# 512 "data/maps/SlateportCity/scripts.pory"
	end
# 513 "data/maps/SlateportCity/scripts.pory"

# 514 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 516 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 517 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 518 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 519 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 520 "data/maps/SlateportCity/scripts.pory"
	release
# 521 "data/maps/SlateportCity/scripts.pory"
	end
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 524 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 525 "data/maps/SlateportCity/scripts.pory"
	release
# 526 "data/maps/SlateportCity/scripts.pory"
	end
# 527 "data/maps/SlateportCity/scripts.pory"

# 528 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 529 "data/maps/SlateportCity/scripts.pory"
	lock
# 530 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 531 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 532 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 533 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 534 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 535 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 536 "data/maps/SlateportCity/scripts.pory"
	release
# 537 "data/maps/SlateportCity/scripts.pory"
	end
# 538 "data/maps/SlateportCity/scripts.pory"

# 539 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 540 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 541 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 542 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 543 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 544 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 545 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 554 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 555 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 556 "data/maps/SlateportCity/scripts.pory"
	release
# 557 "data/maps/SlateportCity/scripts.pory"
	end
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 560 "data/maps/SlateportCity/scripts.pory"
	lock
# 561 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 562 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 563 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 564 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 565 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 566 "data/maps/SlateportCity/scripts.pory"
	release
# 567 "data/maps/SlateportCity/scripts.pory"
	end
# 568 "data/maps/SlateportCity/scripts.pory"

# 569 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 570 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 571 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 572 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 573 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 574 "data/maps/SlateportCity/scripts.pory"
	release
# 575 "data/maps/SlateportCity/scripts.pory"
	end
# 576 "data/maps/SlateportCity/scripts.pory"

# 577 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 578 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 579 "data/maps/SlateportCity/scripts.pory"
	lockall
# 580 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 581 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 582 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 583 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 584 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 585 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 586 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 587 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 589 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 590 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 591 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 592 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 593 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 594 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 595 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 598 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 599 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 600 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 601 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 605 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 611 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 612 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 613 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 614 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 615 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 617 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 619 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 620 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 621 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 622 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 623 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 624 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 625 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 626 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 627 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 628 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 629 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 630 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 631 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 632 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 633 "data/maps/SlateportCity/scripts.pory"
	end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 636 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 637 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 638 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 639 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 640 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 641 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 642 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 643 "data/maps/SlateportCity/scripts.pory"
	step_end
# 644 "data/maps/SlateportCity/scripts.pory"

# 645 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 646 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 647 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 648 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 649 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 650 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 651 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 652 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 653 "data/maps/SlateportCity/scripts.pory"
	step_end
# 654 "data/maps/SlateportCity/scripts.pory"

# 655 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 656 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 657 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 658 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 660 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 662 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 663 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 665 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 666 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 667 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 668 "data/maps/SlateportCity/scripts.pory"
	step_end
# 669 "data/maps/SlateportCity/scripts.pory"

# 670 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 681 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 682 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 683 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 684 "data/maps/SlateportCity/scripts.pory"
	step_end
# 685 "data/maps/SlateportCity/scripts.pory"

# 686 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 689 "data/maps/SlateportCity/scripts.pory"
	step_end
# 690 "data/maps/SlateportCity/scripts.pory"

# 691 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 695 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 696 "data/maps/SlateportCity/scripts.pory"
	step_end
# 697 "data/maps/SlateportCity/scripts.pory"

# 698 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 699 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 700 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 701 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 702 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 703 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 706 "data/maps/SlateportCity/scripts.pory"
	step_end
# 707 "data/maps/SlateportCity/scripts.pory"

# 708 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 709 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 710 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 713 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 714 "data/maps/SlateportCity/scripts.pory"
	step_end
# 715 "data/maps/SlateportCity/scripts.pory"

# 716 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 717 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 718 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 719 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 720 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 721 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 722 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 723 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 724 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 725 "data/maps/SlateportCity/scripts.pory"
	step_end
# 726 "data/maps/SlateportCity/scripts.pory"

# 727 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 728 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 729 "data/maps/SlateportCity/scripts.pory"
	end
# 730 "data/maps/SlateportCity/scripts.pory"

# 731 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 732 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 733 "data/maps/SlateportCity/scripts.pory"
	end
# 734 "data/maps/SlateportCity/scripts.pory"

# 735 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 736 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 737 "data/maps/SlateportCity/scripts.pory"
	end
# 738 "data/maps/SlateportCity/scripts.pory"

# 739 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 740 "data/maps/SlateportCity/scripts.pory"
	lock
# 741 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 742 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 743 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 744 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 745 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 746 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 747 "data/maps/SlateportCity/scripts.pory"
	release
# 748 "data/maps/SlateportCity/scripts.pory"
	end
# 749 "data/maps/SlateportCity/scripts.pory"

# 750 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 751 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 752 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 753 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 754 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 755 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 756 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 757 "data/maps/SlateportCity/scripts.pory"
	end
# 758 "data/maps/SlateportCity/scripts.pory"

# 759 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 760 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 761 "data/maps/SlateportCity/scripts.pory"
	release
# 762 "data/maps/SlateportCity/scripts.pory"
	end
# 763 "data/maps/SlateportCity/scripts.pory"

# 764 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 765 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 766 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 767 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 768 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 769 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 770 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 771 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 772 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 773 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 774 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 775 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 776 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 777 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 778 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 779 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 780 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 781 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 782 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 783 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 784 "data/maps/SlateportCity/scripts.pory"
	end
# 785 "data/maps/SlateportCity/scripts.pory"

# 786 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 787 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 788 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 789 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 790 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 791 "data/maps/SlateportCity/scripts.pory"
	end
# 792 "data/maps/SlateportCity/scripts.pory"

# 793 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 794 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 795 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 796 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 797 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 798 "data/maps/SlateportCity/scripts.pory"
	end
# 799 "data/maps/SlateportCity/scripts.pory"

# 800 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 801 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 803 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 804 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 805 "data/maps/SlateportCity/scripts.pory"
	end
# 806 "data/maps/SlateportCity/scripts.pory"

# 807 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 808 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 810 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 811 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 812 "data/maps/SlateportCity/scripts.pory"
	end
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 815 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 817 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 818 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 822 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 825 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 826 "data/maps/SlateportCity/scripts.pory"
	end
# 827 "data/maps/SlateportCity/scripts.pory"

# 828 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 829 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 831 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 832 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 833 "data/maps/SlateportCity/scripts.pory"
	end
# 834 "data/maps/SlateportCity/scripts.pory"

# 835 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 836 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 838 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 839 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 840 "data/maps/SlateportCity/scripts.pory"
	end
# 841 "data/maps/SlateportCity/scripts.pory"

# 842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 843 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 845 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 846 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 847 "data/maps/SlateportCity/scripts.pory"
	end
# 848 "data/maps/SlateportCity/scripts.pory"

# 849 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 850 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 852 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 853 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 854 "data/maps/SlateportCity/scripts.pory"
	end
# 855 "data/maps/SlateportCity/scripts.pory"

# 856 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 857 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 858 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 859 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 860 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 861 "data/maps/SlateportCity/scripts.pory"
	end
# 862 "data/maps/SlateportCity/scripts.pory"

# 863 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 864 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 865 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 866 "data/maps/SlateportCity/scripts.pory"
	release
# 867 "data/maps/SlateportCity/scripts.pory"
	end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 870 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 871 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 872 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 873 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 874 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 875 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 876 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 877 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 878 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 879 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 880 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 881 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 882 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 883 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 884 "data/maps/SlateportCity/scripts.pory"
	release
# 885 "data/maps/SlateportCity/scripts.pory"
	end
# 886 "data/maps/SlateportCity/scripts.pory"

# 887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 888 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 889 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 890 "data/maps/SlateportCity/scripts.pory"
	release
# 891 "data/maps/SlateportCity/scripts.pory"
	end
# 892 "data/maps/SlateportCity/scripts.pory"

# 893 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 894 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 895 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 896 "data/maps/SlateportCity/scripts.pory"
	end
# 897 "data/maps/SlateportCity/scripts.pory"

# 898 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 899 "data/maps/SlateportCity/scripts.pory"
	lockall
# 900 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 901 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 902 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 903 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 904 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 905 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 906 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 907 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 908 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 909 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 910 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 911 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 912 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 913 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 914 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 916 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 917 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 918 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 919 "data/maps/SlateportCity/scripts.pory"
	end
# 920 "data/maps/SlateportCity/scripts.pory"

# 921 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 922 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 923 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 924 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 925 "data/maps/SlateportCity/scripts.pory"
	step_end
# 926 "data/maps/SlateportCity/scripts.pory"

# 927 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 928 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 929 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 930 "data/maps/SlateportCity/scripts.pory"
	step_end
# 931 "data/maps/SlateportCity/scripts.pory"

# 932 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 933 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 934 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 935 "data/maps/SlateportCity/scripts.pory"
	step_end
# 936 "data/maps/SlateportCity/scripts.pory"

# 937 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 939 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 940 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 941 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 942 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 943 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 944 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 945 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 946 "data/maps/SlateportCity/scripts.pory"
	step_end
# 947 "data/maps/SlateportCity/scripts.pory"

# 948 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 949 "data/maps/SlateportCity/scripts.pory"
	lockall
# 950 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 951 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 952 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 953 "data/maps/SlateportCity/scripts.pory"
	end
# 954 "data/maps/SlateportCity/scripts.pory"

# 955 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 956 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 957 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 960 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 961 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 962 "data/maps/SlateportCity/scripts.pory"

# 963 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 964 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 965 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 966 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 967 "data/maps/SlateportCity/scripts.pory"

# 968 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 969 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 972 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 974 "data/maps/SlateportCity/scripts.pory"

# 975 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 976 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 985 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 987 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 988 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 989 "data/maps/SlateportCity/scripts.pory"

# 990 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 991 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 992 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 996 "data/maps/SlateportCity/scripts.pory"

# 997 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1000 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1001 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1003 "data/maps/SlateportCity/scripts.pory"

# 1004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1006 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1007 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1013 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1014 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1020 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1021 "data/maps/SlateportCity/scripts.pory"

# 1022 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1025 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1026 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1032 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1033 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1044 "data/maps/SlateportCity/scripts.pory"

# 1045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1046 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1051 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1052 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1053 "data/maps/SlateportCity/scripts.pory"

# 1054 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1055 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1056 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1058 "data/maps/SlateportCity/scripts.pory"

# 1059 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1061 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1062 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1065 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1066 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1067 "data/maps/SlateportCity/scripts.pory"

# 1068 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1070 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1071 "data/maps/SlateportCity/scripts.pory"

# 1072 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1075 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1080 "data/maps/SlateportCity/scripts.pory"

# 1081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1088 "data/maps/SlateportCity/scripts.pory"

# 1089 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1093 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1094 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1095 "data/maps/SlateportCity/scripts.pory"

# 1096 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1097 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1098 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1101 "data/maps/SlateportCity/scripts.pory"

# 1102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1105 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1106 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1107 "data/maps/SlateportCity/scripts.pory"

# 1108 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1118 "data/maps/SlateportCity/scripts.pory"

# 1119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1122 "data/maps/SlateportCity/scripts.pory"

# 1123 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1124 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1125 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1127 "data/maps/SlateportCity/scripts.pory"

# 1128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1129 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1130 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1133 "data/maps/SlateportCity/scripts.pory"

# 1134 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1135 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1136 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1139 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1140 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1141 "data/maps/SlateportCity/scripts.pory"

# 1142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1144 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1145 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1147 "data/maps/SlateportCity/scripts.pory"

# 1148 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1172 "data/maps/SlateportCity/scripts.pory"

# 1173 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1176 "data/maps/SlateportCity/scripts.pory"

# 1177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1190 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1206 "data/maps/SlateportCity/scripts.pory"

# 1207 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1217 "data/maps/SlateportCity/scripts.pory"

# 1218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1228 "data/maps/SlateportCity/scripts.pory"

# 1229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1236 "data/maps/SlateportCity/scripts.pory"

# 1237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1241 "data/maps/SlateportCity/scripts.pory"

# 1242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1262 "data/maps/SlateportCity/scripts.pory"

# 1263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1267 "data/maps/SlateportCity/scripts.pory"

# 1268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1271 "data/maps/SlateportCity/scripts.pory"

# 1272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1302 "data/maps/SlateportCity/scripts.pory"

# 1303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1313 "data/maps/SlateportCity/scripts.pory"

# 1314 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1317 "data/maps/SlateportCity/scripts.pory"

# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1325 "data/maps/SlateportCity/scripts.pory"

# 1326 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1339 "data/maps/SlateportCity/scripts.pory"

# 1340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1345 "data/maps/SlateportCity/scripts.pory"

# 1346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1354 "data/maps/SlateportCity/scripts.pory"

# 1355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1358 "data/maps/SlateportCity/scripts.pory"

# 1359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1365 "data/maps/SlateportCity/scripts.pory"

# 1366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1369 "data/maps/SlateportCity/scripts.pory"

# 1370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1377 "data/maps/SlateportCity/scripts.pory"

# 1378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
