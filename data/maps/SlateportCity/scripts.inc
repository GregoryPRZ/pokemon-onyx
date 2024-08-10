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
	.2byte ITEM_SWIFT_MOCHI
# 160 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLEVER_MOCHI
# 161 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_MOCHI
# 162 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENIUS_MOCHI
# 163 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEALTH_MOCHI
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RESIST_MOCHI
# 165 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 169 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 170 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 171 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 172 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWIFT_FEATHER
# 173 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 174 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 175 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 176 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 177 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PRETTY_FEATHER
# 178 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 179 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 180 "data/maps/SlateportCity/scripts.pory"
	release
# 181 "data/maps/SlateportCity/scripts.pory"
	end
# 182 "data/maps/SlateportCity/scripts.pory"

# 183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleGuy::
# 184 "data/maps/SlateportCity/scripts.pory"
	lock
# 185 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 186 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_BattleGuySellWhatYouNeed
# 187 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 188 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_BattleGuy
# 189 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 190 "data/maps/SlateportCity/scripts.pory"
	release
# 191 "data/maps/SlateportCity/scripts.pory"
	end
# 192 "data/maps/SlateportCity/scripts.pory"

# 193 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_BattleGuy:
# 195 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_X_SPEED
# 196 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 197 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_X_ATTACK
# 198 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 199 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 200 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 201 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 202 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUX_EVASION
# 203 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUX_POWER
# 204 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUX_POWERGUARD
# 205 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUX_GUARD
# 206 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRROR_HERB
# 207 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 208 "data/maps/SlateportCity/scripts.pory"
	release
# 209 "data/maps/SlateportCity/scripts.pory"
	end
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_StoneMan::
# 212 "data/maps/SlateportCity/scripts.pory"
	lock
# 213 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 214 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, SlateportCity_EventScript_StoneGemMan
# 215 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_StoneManSellWhatYouNeed
# 216 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 217 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_StoneMan
# 218 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 219 "data/maps/SlateportCity/scripts.pory"
	release
# 220 "data/maps/SlateportCity/scripts.pory"
	end
# 221 "data/maps/SlateportCity/scripts.pory"

# 222 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_StoneMan:
# 224 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SUN_STONE
# 225 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 226 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 227 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_STONE
# 228 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 229 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 230 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 231 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 232 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 233 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 234 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 235 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EVERSTONE
# 236 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 237 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 238 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 239 "data/maps/SlateportCity/scripts.pory"
	release
# 240 "data/maps/SlateportCity/scripts.pory"
	end
# 241 "data/maps/SlateportCity/scripts.pory"

# 242 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_StoneGemMan::
# 243 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_StoneManSellWhatYouNeed
# 244 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 245 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_StoneGemMan
# 246 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 247 "data/maps/SlateportCity/scripts.pory"
	release
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_StoneGemMan:
# 252 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SUN_STONE
# 253 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 254 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 255 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_STONE
# 256 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 257 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 258 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 259 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 260 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 261 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 262 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 263 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EVERSTONE
# 264 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 265 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 266 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BUG_GEM
# 267 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_GEM
# 268 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GHOST_GEM
# 269 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DARK_GEM
# 270 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_GEM
# 271 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCK_GEM
# 272 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STEEL_GEM
# 273 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FAIRY_GEM
# 274 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_GEM
# 275 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 276 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 277 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GRASS_GEM
# 278 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_GEM
# 279 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTRIC_GEM
# 280 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GROUND_GEM
# 281 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIGHTING_GEM
# 282 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PSYCHIC_GEM
# 283 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POISON_GEM
# 284 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 285 "data/maps/SlateportCity/scripts.pory"
	release
# 286 "data/maps/SlateportCity/scripts.pory"
	end
# 287 "data/maps/SlateportCity/scripts.pory"

# 288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerGirl::
# 289 "data/maps/SlateportCity/scripts.pory"
	lock
# 290 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 291 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_PowerGirlSellWhatYouNeed
# 292 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 293 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerGirl
# 294 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 295 "data/maps/SlateportCity/scripts.pory"
	release
# 296 "data/maps/SlateportCity/scripts.pory"
	end
# 297 "data/maps/SlateportCity/scripts.pory"

# 298 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerGirl:
# 300 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 301 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BAND
# 302 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BELT
# 303 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 304 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_LENS
# 305 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 306 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 307 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 308 "data/maps/SlateportCity/scripts.pory"
	release
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CandyLady::
# 312 "data/maps/SlateportCity/scripts.pory"
	lock
# 313 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 314 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_CandyLadySellWhatYouNeed
# 315 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 316 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_CandyLady
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 318 "data/maps/SlateportCity/scripts.pory"
	release
# 319 "data/maps/SlateportCity/scripts.pory"
	end
# 320 "data/maps/SlateportCity/scripts.pory"

# 321 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_CandyLady:
# 323 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 324 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_L
# 325 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_M
# 326 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_S
# 327 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXP_CANDY_XL
# 328 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 329 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STAR_SWEET
# 330 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BERRY_SWEET
# 331 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CLOVER_SWEET
# 332 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOWER_SWEET
# 333 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RIBBON_SWEET
# 334 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 335 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LOVE_SWEET
# 336 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 337 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 338 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
# 339 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 340 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 341 "data/maps/SlateportCity/scripts.pory"
	release
# 342 "data/maps/SlateportCity/scripts.pory"
	end
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TmClerk::
# 345 "data/maps/SlateportCity/scripts.pory"
	lock
# 346 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 347 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 348 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 349 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_TmClerk
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 351 "data/maps/SlateportCity/scripts.pory"
	release
# 352 "data/maps/SlateportCity/scripts.pory"
	end
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_TmClerk:
# 356 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_ACROBATICS
# 357 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_THUNDER_WAVE
# 358 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_VENOSHOCK
# 359 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DRAINING_KISS
# 360 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 361 "data/maps/SlateportCity/scripts.pory"
	release
# 362 "data/maps/SlateportCity/scripts.pory"
	end
# 363 "data/maps/SlateportCity/scripts.pory"

# 364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 365 "data/maps/SlateportCity/scripts.pory"
	lock
# 366 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 367 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 368 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 370 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 371 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 372 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 375 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 376 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 378 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 379 "data/maps/SlateportCity/scripts.pory"
	release
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity/scripts.pory"
	release
# 385 "data/maps/SlateportCity/scripts.pory"
	end
# 386 "data/maps/SlateportCity/scripts.pory"

# 387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 388 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity/scripts.pory"
	release
# 390 "data/maps/SlateportCity/scripts.pory"
	end
# 391 "data/maps/SlateportCity/scripts.pory"

# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_IncenseWoman::
# 393 "data/maps/SlateportCity/scripts.pory"
	lock
# 394 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 395 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_IncenseWomanSellWhatYouNeed
# 396 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 397 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_IncenseWoman
# 398 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 399 "data/maps/SlateportCity/scripts.pory"
	release
# 400 "data/maps/SlateportCity/scripts.pory"
	end
# 401 "data/maps/SlateportCity/scripts.pory"

# 402 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_IncenseWoman:
# 404 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 405 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 406 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 407 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 408 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 409 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 410 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 411 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 412 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 413 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 414 "data/maps/SlateportCity/scripts.pory"
	release
# 415 "data/maps/SlateportCity/scripts.pory"
	end
# 416 "data/maps/SlateportCity/scripts.pory"

# 417 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 418 "data/maps/SlateportCity/scripts.pory"
	lock
# 419 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 420 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 421 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 422 "data/maps/SlateportCity/scripts.pory"
	release
# 423 "data/maps/SlateportCity/scripts.pory"
	end
# 424 "data/maps/SlateportCity/scripts.pory"

# 425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 426 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 427 "data/maps/SlateportCity/scripts.pory"
	release
# 428 "data/maps/SlateportCity/scripts.pory"
	end
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 431 "data/maps/SlateportCity/scripts.pory"
	lock
# 432 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 433 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 434 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 435 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 436 "data/maps/SlateportCity/scripts.pory"
	release
# 437 "data/maps/SlateportCity/scripts.pory"
	end
# 438 "data/maps/SlateportCity/scripts.pory"

# 439 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 440 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 441 "data/maps/SlateportCity/scripts.pory"
	release
# 442 "data/maps/SlateportCity/scripts.pory"
	end
# 443 "data/maps/SlateportCity/scripts.pory"

# 444 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 445 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 446 "data/maps/SlateportCity/scripts.pory"
	release
# 447 "data/maps/SlateportCity/scripts.pory"
	end
# 448 "data/maps/SlateportCity/scripts.pory"

# 449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 450 "data/maps/SlateportCity/scripts.pory"
	lock
# 451 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 452 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	release
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 458 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 459 "data/maps/SlateportCity/scripts.pory"
	release
# 460 "data/maps/SlateportCity/scripts.pory"
	end
# 461 "data/maps/SlateportCity/scripts.pory"

# 462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 463 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 465 "data/maps/SlateportCity/scripts.pory"
	end
# 466 "data/maps/SlateportCity/scripts.pory"

# 467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 468 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 469 "data/maps/SlateportCity/scripts.pory"
	end
# 470 "data/maps/SlateportCity/scripts.pory"

# 471 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 472 "data/maps/SlateportCity/scripts.pory"
	lock
# 473 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 474 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 475 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 476 "data/maps/SlateportCity/scripts.pory"
	release
# 477 "data/maps/SlateportCity/scripts.pory"
	end
# 478 "data/maps/SlateportCity/scripts.pory"

# 479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 481 "data/maps/SlateportCity/scripts.pory"
	release
# 482 "data/maps/SlateportCity/scripts.pory"
	end
# 483 "data/maps/SlateportCity/scripts.pory"

# 484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 485 "data/maps/SlateportCity/scripts.pory"
	lock
# 486 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 487 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 488 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 489 "data/maps/SlateportCity/scripts.pory"
	release
# 490 "data/maps/SlateportCity/scripts.pory"
	end
# 491 "data/maps/SlateportCity/scripts.pory"

# 492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 493 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 494 "data/maps/SlateportCity/scripts.pory"
	release
# 495 "data/maps/SlateportCity/scripts.pory"
	end
# 496 "data/maps/SlateportCity/scripts.pory"

# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 498 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 499 "data/maps/SlateportCity/scripts.pory"
	end
# 500 "data/maps/SlateportCity/scripts.pory"

# 501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 502 "data/maps/SlateportCity/scripts.pory"
	lockall
# 503 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 504 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 505 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 506 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 507 "data/maps/SlateportCity/scripts.pory"
	end
# 508 "data/maps/SlateportCity/scripts.pory"

# 509 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 510 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 511 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 512 "data/maps/SlateportCity/scripts.pory"
	end
# 513 "data/maps/SlateportCity/scripts.pory"

# 514 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 515 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 516 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 517 "data/maps/SlateportCity/scripts.pory"
	end
# 518 "data/maps/SlateportCity/scripts.pory"

# 519 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 520 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 521 "data/maps/SlateportCity/scripts.pory"
	end
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 524 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 525 "data/maps/SlateportCity/scripts.pory"
	end
# 526 "data/maps/SlateportCity/scripts.pory"

# 527 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 528 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 529 "data/maps/SlateportCity/scripts.pory"
	end
# 530 "data/maps/SlateportCity/scripts.pory"

# 531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 532 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 533 "data/maps/SlateportCity/scripts.pory"
	end
# 534 "data/maps/SlateportCity/scripts.pory"

# 535 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 536 "data/maps/SlateportCity/scripts.pory"
	lockall
# 537 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 538 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 539 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 540 "data/maps/SlateportCity/scripts.pory"
	end
# 541 "data/maps/SlateportCity/scripts.pory"

# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 543 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 544 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 545 "data/maps/SlateportCity/scripts.pory"
	end
# 546 "data/maps/SlateportCity/scripts.pory"

# 547 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 548 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 549 "data/maps/SlateportCity/scripts.pory"
	end
# 550 "data/maps/SlateportCity/scripts.pory"

# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 552 "data/maps/SlateportCity/scripts.pory"
	lock
# 553 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 554 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 556 "data/maps/SlateportCity/scripts.pory"
	release
# 557 "data/maps/SlateportCity/scripts.pory"
	end
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 560 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 561 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 562 "data/maps/SlateportCity/scripts.pory"
	release
# 563 "data/maps/SlateportCity/scripts.pory"
	end
# 564 "data/maps/SlateportCity/scripts.pory"

# 565 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 566 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 567 "data/maps/SlateportCity/scripts.pory"
	end
# 568 "data/maps/SlateportCity/scripts.pory"

# 569 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 570 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 571 "data/maps/SlateportCity/scripts.pory"
	end
# 572 "data/maps/SlateportCity/scripts.pory"

# 573 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 575 "data/maps/SlateportCity/scripts.pory"
	end
# 576 "data/maps/SlateportCity/scripts.pory"

# 577 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 578 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 579 "data/maps/SlateportCity/scripts.pory"
	end
# 580 "data/maps/SlateportCity/scripts.pory"

# 581 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 582 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 583 "data/maps/SlateportCity/scripts.pory"
	end
# 584 "data/maps/SlateportCity/scripts.pory"

# 585 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 586 "data/maps/SlateportCity/scripts.pory"
	lock
# 587 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 588 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 589 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 590 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 591 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/SlateportCity/scripts.pory"
	release
# 593 "data/maps/SlateportCity/scripts.pory"
	end
# 594 "data/maps/SlateportCity/scripts.pory"

# 595 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 596 "data/maps/SlateportCity/scripts.pory"
	lock
# 597 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 598 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 599 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 600 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 601 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/SlateportCity/scripts.pory"
	release
# 603 "data/maps/SlateportCity/scripts.pory"
	end
# 604 "data/maps/SlateportCity/scripts.pory"

# 605 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 606 "data/maps/SlateportCity/scripts.pory"
	lock
# 607 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 608 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 609 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 610 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 611 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 612 "data/maps/SlateportCity/scripts.pory"
	release
# 613 "data/maps/SlateportCity/scripts.pory"
	end
# 614 "data/maps/SlateportCity/scripts.pory"

# 615 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 616 "data/maps/SlateportCity/scripts.pory"
	lock
# 617 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 618 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 619 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 621 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SlateportCity/scripts.pory"
	release
# 623 "data/maps/SlateportCity/scripts.pory"
	end
# 624 "data/maps/SlateportCity/scripts.pory"

# 625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 626 "data/maps/SlateportCity/scripts.pory"
	lock
# 627 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 628 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 629 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 630 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 631 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 632 "data/maps/SlateportCity/scripts.pory"
	release
# 633 "data/maps/SlateportCity/scripts.pory"
	end
# 634 "data/maps/SlateportCity/scripts.pory"

# 635 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 636 "data/maps/SlateportCity/scripts.pory"
	lock
# 637 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 638 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 639 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 640 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 641 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/SlateportCity/scripts.pory"
	release
# 643 "data/maps/SlateportCity/scripts.pory"
	end
# 644 "data/maps/SlateportCity/scripts.pory"

# 645 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 646 "data/maps/SlateportCity/scripts.pory"
	lock
# 647 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 648 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 649 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 651 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/SlateportCity/scripts.pory"
	release
# 653 "data/maps/SlateportCity/scripts.pory"
	end
# 654 "data/maps/SlateportCity/scripts.pory"

# 655 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 656 "data/maps/SlateportCity/scripts.pory"
	lock
# 657 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 658 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 659 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 660 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 661 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/SlateportCity/scripts.pory"
	release
# 663 "data/maps/SlateportCity/scripts.pory"
	end
# 664 "data/maps/SlateportCity/scripts.pory"

# 665 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 666 "data/maps/SlateportCity/scripts.pory"
	lock
# 667 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 668 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 669 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 670 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 672 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 674 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 675 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 676 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 678 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 680 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 682 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 683 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 684 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 686 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 688 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 689 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 690 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 692 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 694 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 695 "data/maps/SlateportCity/scripts.pory"
	release
# 696 "data/maps/SlateportCity/scripts.pory"
	end
# 697 "data/maps/SlateportCity/scripts.pory"

# 698 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 699 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 700 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 701 "data/maps/SlateportCity/scripts.pory"
	step_end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 704 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 705 "data/maps/SlateportCity/scripts.pory"
	end
# 706 "data/maps/SlateportCity/scripts.pory"

# 707 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 708 "data/maps/SlateportCity/scripts.pory"
	lock
# 709 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 710 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 711 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 712 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 713 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/SlateportCity/scripts.pory"
	release
# 715 "data/maps/SlateportCity/scripts.pory"
	end
# 716 "data/maps/SlateportCity/scripts.pory"

# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 718 "data/maps/SlateportCity/scripts.pory"
	lock
# 719 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 720 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 721 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 722 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 723 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 724 "data/maps/SlateportCity/scripts.pory"
	release
# 725 "data/maps/SlateportCity/scripts.pory"
	end
# 726 "data/maps/SlateportCity/scripts.pory"

# 727 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 729 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 730 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 731 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 732 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 733 "data/maps/SlateportCity/scripts.pory"
	release
# 734 "data/maps/SlateportCity/scripts.pory"
	end
# 735 "data/maps/SlateportCity/scripts.pory"

# 736 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 737 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 738 "data/maps/SlateportCity/scripts.pory"
	release
# 739 "data/maps/SlateportCity/scripts.pory"
	end
# 740 "data/maps/SlateportCity/scripts.pory"

# 741 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 742 "data/maps/SlateportCity/scripts.pory"
	lock
# 743 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 744 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 745 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 746 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 747 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 748 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 749 "data/maps/SlateportCity/scripts.pory"
	release
# 750 "data/maps/SlateportCity/scripts.pory"
	end
# 751 "data/maps/SlateportCity/scripts.pory"

# 752 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 753 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 754 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 755 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 756 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 757 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 758 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 759 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 760 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 761 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 762 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 763 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 764 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 765 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 766 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 767 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 768 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 769 "data/maps/SlateportCity/scripts.pory"
	release
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 773 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 774 "data/maps/SlateportCity/scripts.pory"
	lockall
# 775 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 776 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 777 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 778 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 779 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 781 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 782 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 783 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 784 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 785 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 786 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 787 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 788 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 790 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 791 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 792 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 793 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 795 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 796 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 797 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 798 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 799 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 800 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 801 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 802 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 804 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 806 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 807 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 808 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 810 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 812 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 814 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 815 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 816 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 817 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 818 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 820 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 821 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 822 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 823 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 824 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 825 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 826 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 827 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 828 "data/maps/SlateportCity/scripts.pory"
	end
# 829 "data/maps/SlateportCity/scripts.pory"

# 830 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 831 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 832 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 833 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 834 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 835 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 836 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 837 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 838 "data/maps/SlateportCity/scripts.pory"
	step_end
# 839 "data/maps/SlateportCity/scripts.pory"

# 840 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 841 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 842 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 843 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 844 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 845 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 846 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 847 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 848 "data/maps/SlateportCity/scripts.pory"
	step_end
# 849 "data/maps/SlateportCity/scripts.pory"

# 850 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 851 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 852 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 853 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 854 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 855 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 856 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 857 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 858 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 859 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 860 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 861 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 862 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 863 "data/maps/SlateportCity/scripts.pory"
	step_end
# 864 "data/maps/SlateportCity/scripts.pory"

# 865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 866 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 867 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 868 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 869 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 870 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 872 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 873 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 874 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 875 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 876 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 877 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 878 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 879 "data/maps/SlateportCity/scripts.pory"
	step_end
# 880 "data/maps/SlateportCity/scripts.pory"

# 881 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 882 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 883 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 884 "data/maps/SlateportCity/scripts.pory"
	step_end
# 885 "data/maps/SlateportCity/scripts.pory"

# 886 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 887 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 888 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 889 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 890 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 891 "data/maps/SlateportCity/scripts.pory"
	step_end
# 892 "data/maps/SlateportCity/scripts.pory"

# 893 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 894 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 895 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 896 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 897 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 898 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 899 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 900 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 901 "data/maps/SlateportCity/scripts.pory"
	step_end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 904 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 905 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 906 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 907 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 909 "data/maps/SlateportCity/scripts.pory"
	step_end
# 910 "data/maps/SlateportCity/scripts.pory"

# 911 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 912 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 913 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 914 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 915 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 916 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 917 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 918 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 920 "data/maps/SlateportCity/scripts.pory"
	step_end
# 921 "data/maps/SlateportCity/scripts.pory"

# 922 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 923 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 924 "data/maps/SlateportCity/scripts.pory"
	end
# 925 "data/maps/SlateportCity/scripts.pory"

# 926 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 927 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 928 "data/maps/SlateportCity/scripts.pory"
	end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 931 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 932 "data/maps/SlateportCity/scripts.pory"
	end
# 933 "data/maps/SlateportCity/scripts.pory"

# 934 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 935 "data/maps/SlateportCity/scripts.pory"
	lock
# 936 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 937 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 938 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 939 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 940 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 941 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 942 "data/maps/SlateportCity/scripts.pory"
	release
# 943 "data/maps/SlateportCity/scripts.pory"
	end
# 944 "data/maps/SlateportCity/scripts.pory"

# 945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 946 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 947 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 948 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 949 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 950 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 951 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 952 "data/maps/SlateportCity/scripts.pory"
	end
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 955 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 956 "data/maps/SlateportCity/scripts.pory"
	release
# 957 "data/maps/SlateportCity/scripts.pory"
	end
# 958 "data/maps/SlateportCity/scripts.pory"

# 959 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 960 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 961 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 962 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 963 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 964 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 965 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 966 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 967 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 968 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 969 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 970 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 971 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 972 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 973 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 974 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 975 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 976 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 977 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 978 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 979 "data/maps/SlateportCity/scripts.pory"
	end
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 982 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 983 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 984 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 985 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 986 "data/maps/SlateportCity/scripts.pory"
	end
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 989 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 990 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 991 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 992 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 993 "data/maps/SlateportCity/scripts.pory"
	end
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 996 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 997 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 998 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 999 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1000 "data/maps/SlateportCity/scripts.pory"
	end
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1003 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1004 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1005 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1006 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1007 "data/maps/SlateportCity/scripts.pory"
	end
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1010 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1011 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1012 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1013 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1014 "data/maps/SlateportCity/scripts.pory"
	end
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1017 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1018 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1019 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1020 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1021 "data/maps/SlateportCity/scripts.pory"
	end
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1024 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1025 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1026 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1027 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1028 "data/maps/SlateportCity/scripts.pory"
	end
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1031 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1032 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1033 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1034 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1035 "data/maps/SlateportCity/scripts.pory"
	end
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1038 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1039 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1040 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1041 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1042 "data/maps/SlateportCity/scripts.pory"
	end
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1045 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1046 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1047 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1048 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1049 "data/maps/SlateportCity/scripts.pory"
	end
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1052 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1053 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1054 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1055 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1056 "data/maps/SlateportCity/scripts.pory"
	end
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1059 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1060 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1061 "data/maps/SlateportCity/scripts.pory"
	release
# 1062 "data/maps/SlateportCity/scripts.pory"
	end
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1065 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1066 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1067 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1068 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1069 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1070 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1071 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1072 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1073 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1074 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1075 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1076 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1077 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1078 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1079 "data/maps/SlateportCity/scripts.pory"
	release
# 1080 "data/maps/SlateportCity/scripts.pory"
	end
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1083 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1084 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1085 "data/maps/SlateportCity/scripts.pory"
	release
# 1086 "data/maps/SlateportCity/scripts.pory"
	end
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1089 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1090 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1091 "data/maps/SlateportCity/scripts.pory"
	end
# 1092 "data/maps/SlateportCity/scripts.pory"

# 1093 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1094 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1095 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1096 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1097 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1098 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1099 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 1100 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1101 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1103 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1104 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1105 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1106 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1107 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1108 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1109 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1110 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 1111 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1112 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1113 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1114 "data/maps/SlateportCity/scripts.pory"
	end
# 1115 "data/maps/SlateportCity/scripts.pory"

# 1116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1117 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1118 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1119 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1120 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1121 "data/maps/SlateportCity/scripts.pory"

# 1122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1123 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1124 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1125 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1126 "data/maps/SlateportCity/scripts.pory"

# 1127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1128 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1129 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1130 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1133 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1134 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1135 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1136 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1137 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1138 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1139 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1140 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1141 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1142 "data/maps/SlateportCity/scripts.pory"

# 1143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1144 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1145 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1146 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1147 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1148 "data/maps/SlateportCity/scripts.pory"
	end
# 1149 "data/maps/SlateportCity/scripts.pory"

# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1153 "data/maps/SlateportCity/scripts.pory"

# 1154 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleGuySellWhatYouNeed:
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the BATTLE GUY! I'll go for it and\n"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1157 "data/maps/SlateportCity/scripts.pory"

# 1158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_StoneManSellWhatYouNeed:
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the STONE MAN! I'll go for it and\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1161 "data/maps/SlateportCity/scripts.pory"

# 1162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CandyLadySellWhatYouNeed:
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the CANDY LADY! I'll go for it and\n"
# 1164 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1165 "data/maps/SlateportCity/scripts.pory"

# 1166 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PowerGirlSellWhatYouNeed:
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the POWER GIRL! I'll go for it and\n"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1169 "data/maps/SlateportCity/scripts.pory"

# 1170 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IncenseWomanSellWhatYouNeed:
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the INCENSE WOMAN! I'll go for it and\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1182 "data/maps/SlateportCity/scripts.pory"

# 1183 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1198 "data/maps/SlateportCity/scripts.pory"

# 1199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1216 "data/maps/SlateportCity/scripts.pory"

# 1217 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1229 "data/maps/SlateportCity/scripts.pory"

# 1230 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1236 "data/maps/SlateportCity/scripts.pory"

# 1237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1246 "data/maps/SlateportCity/scripts.pory"

# 1247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1256 "data/maps/SlateportCity/scripts.pory"

# 1257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1266 "data/maps/SlateportCity/scripts.pory"

# 1267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1271 "data/maps/SlateportCity/scripts.pory"

# 1272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1275 "data/maps/SlateportCity/scripts.pory"

# 1276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1303 "data/maps/SlateportCity/scripts.pory"

# 1304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1309 "data/maps/SlateportCity/scripts.pory"

# 1310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1315 "data/maps/SlateportCity/scripts.pory"

# 1316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1320 "data/maps/SlateportCity/scripts.pory"

# 1321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1326 "data/maps/SlateportCity/scripts.pory"

# 1327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1330 "data/maps/SlateportCity/scripts.pory"

# 1331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1349 "data/maps/SlateportCity/scripts.pory"

# 1350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1355 "data/maps/SlateportCity/scripts.pory"

# 1356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1361 "data/maps/SlateportCity/scripts.pory"

# 1362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1367 "data/maps/SlateportCity/scripts.pory"

# 1368 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1379 "data/maps/SlateportCity/scripts.pory"

# 1380 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1383 "data/maps/SlateportCity/scripts.pory"

# 1384 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1387 "data/maps/SlateportCity/scripts.pory"

# 1388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1394 "data/maps/SlateportCity/scripts.pory"

# 1395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1409 "data/maps/SlateportCity/scripts.pory"

# 1410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1420 "data/maps/SlateportCity/scripts.pory"

# 1421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1426 "data/maps/SlateportCity/scripts.pory"

# 1427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1431 "data/maps/SlateportCity/scripts.pory"

# 1432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1435 "data/maps/SlateportCity/scripts.pory"

# 1436 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1439 "data/maps/SlateportCity/scripts.pory"

# 1440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1444 "data/maps/SlateportCity/scripts.pory"

# 1445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1450 "data/maps/SlateportCity/scripts.pory"

# 1451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1456 "data/maps/SlateportCity/scripts.pory"

# 1457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1460 "data/maps/SlateportCity/scripts.pory"

# 1461 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1465 "data/maps/SlateportCity/scripts.pory"

# 1466 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1470 "data/maps/SlateportCity/scripts.pory"

# 1471 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1473 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1474 "data/maps/SlateportCity/scripts.pory"

# 1475 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1477 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1481 "data/maps/SlateportCity/scripts.pory"

# 1482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1486 "data/maps/SlateportCity/scripts.pory"

# 1487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1490 "data/maps/SlateportCity/scripts.pory"

# 1491 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1505 "data/maps/SlateportCity/scripts.pory"

# 1506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1507 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1508 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1516 "data/maps/SlateportCity/scripts.pory"

# 1517 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1519 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1520 "data/maps/SlateportCity/scripts.pory"

# 1521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1524 "data/maps/SlateportCity/scripts.pory"

# 1525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1528 "data/maps/SlateportCity/scripts.pory"

# 1529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1530 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1531 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1532 "data/maps/SlateportCity/scripts.pory"

# 1533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1534 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1535 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1536 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1537 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1538 "data/maps/SlateportCity/scripts.pory"

# 1539 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1540 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1541 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1542 "data/maps/SlateportCity/scripts.pory"

# 1543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1544 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1545 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1548 "data/maps/SlateportCity/scripts.pory"

# 1549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1551 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1552 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1553 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1554 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1555 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1556 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1557 "data/maps/SlateportCity/scripts.pory"

# 1558 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1559 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1560 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1561 "data/maps/SlateportCity/scripts.pory"

# 1562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1563 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1564 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1565 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1566 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1567 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1568 "data/maps/SlateportCity/scripts.pory"

# 1569 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1570 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1571 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1572 "data/maps/SlateportCity/scripts.pory"

# 1573 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1574 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1575 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1576 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1577 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1578 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1579 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1580 "data/maps/SlateportCity/scripts.pory"

# 1581 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1582 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1583 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1584 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1585 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1586 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1587 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1588 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1589 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1590 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
