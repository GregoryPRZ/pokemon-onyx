# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route101_OnTransition
# 7 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route101_OnResume
# 8 "data/maps/Route101/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route101_OnFrame
# 9 "data/maps/Route101/scripts.pory"
	.byte 0
# 10 "data/maps/Route101/scripts.pory"

# 11 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 12 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 13 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnTransition_Night
# 14 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnTransition_Day
# 15 "data/maps/Route101/scripts.pory"
	end
# 16 "data/maps/Route101/scripts.pory"
	
# 17 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Night:
# 18 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 19 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 20 "data/maps/Route101/scripts.pory"
	end
# 21 "data/maps/Route101/scripts.pory"

# 22 "data/maps/Route101/scripts.pory"
Route101_OnTransition_Day:
# 23 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 24 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 25 "data/maps/Route101/scripts.pory"
	end
# 26 "data/maps/Route101/scripts.pory"
	
# 27 "data/maps/Route101/scripts.pory"
Route101_OnResume:
# 28 "data/maps/Route101/scripts.pory"
	special GetDayOrNight
# 29 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route101_OnResume_Night
# 30 "data/maps/Route101/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route101_OnResume_Day
# 31 "data/maps/Route101/scripts.pory"
	end
# 32 "data/maps/Route101/scripts.pory"
	
# 33 "data/maps/Route101/scripts.pory"
Route101_OnResume_Night:
# 34 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 35 "data/maps/Route101/scripts.pory"
	end
# 36 "data/maps/Route101/scripts.pory"
	
# 37 "data/maps/Route101/scripts.pory"
Route101_OnResume_Day:
# 38 "data/maps/Route101/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 39 "data/maps/Route101/scripts.pory"
	end
# 40 "data/maps/Route101/scripts.pory"

# 41 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 42 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 43 "data/maps/Route101/scripts.pory"
	.2byte 0
# 44 "data/maps/Route101/scripts.pory"

# 45 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 46 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 47 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 48 "data/maps/Route101/scripts.pory"
	end
# 49 "data/maps/Route101/scripts.pory"

# 50 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 51 "data/maps/Route101/scripts.pory"
	lockall
# 52 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 53 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 54 "data/maps/Route101/scripts.pory"
	closemessage
# 55 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 56 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 57 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 58 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 59 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 60 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 62 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 63 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 64 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 65 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 67 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 68 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 70 "data/maps/Route101/scripts.pory"
	closemessage
# 71 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 72 "data/maps/Route101/scripts.pory"
	releaseall
# 73 "data/maps/Route101/scripts.pory"
	end
# 74 "data/maps/Route101/scripts.pory"

# 75 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 76 "data/maps/Route101/scripts.pory"
	lockall
# 77 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 78 "data/maps/Route101/scripts.pory"
	closemessage
# 79 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 80 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route101/scripts.pory"
	releaseall
# 82 "data/maps/Route101/scripts.pory"
	end
# 83 "data/maps/Route101/scripts.pory"

# 84 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 85 "data/maps/Route101/scripts.pory"
	lockall
# 86 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 87 "data/maps/Route101/scripts.pory"
	closemessage
# 88 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 89 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route101/scripts.pory"
	releaseall
# 91 "data/maps/Route101/scripts.pory"
	end
# 92 "data/maps/Route101/scripts.pory"

# 93 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 94 "data/maps/Route101/scripts.pory"
	lockall
# 95 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 96 "data/maps/Route101/scripts.pory"
	closemessage
# 97 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 98 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route101/scripts.pory"
	releaseall
# 100 "data/maps/Route101/scripts.pory"
	end
# 101 "data/maps/Route101/scripts.pory"

# 102 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 103 "data/maps/Route101/scripts.pory"
	walk_up
# 104 "data/maps/Route101/scripts.pory"
	step_end
# 105 "data/maps/Route101/scripts.pory"

# 106 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 107 "data/maps/Route101/scripts.pory"
	walk_right
# 108 "data/maps/Route101/scripts.pory"
	step_end
# 109 "data/maps/Route101/scripts.pory"

# 110 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 111 "data/maps/Route101/scripts.pory"
	walk_down
# 112 "data/maps/Route101/scripts.pory"
	step_end
# 113 "data/maps/Route101/scripts.pory"

# 114 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 116 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 117 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 118 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 125 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 126 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 127 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 128 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 129 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 130 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 131 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 132 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 133 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 135 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 136 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 137 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 142 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 143 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 144 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 145 "data/maps/Route101/scripts.pory"
	step_end
# 146 "data/maps/Route101/scripts.pory"

# 147 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 154 "data/maps/Route101/scripts.pory"
	step_end
# 155 "data/maps/Route101/scripts.pory"

# 156 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 157 "data/maps/Route101/scripts.pory"
	step_end
# 158 "data/maps/Route101/scripts.pory"

# 159 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 160 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 161 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 162 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 163 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 164 "data/maps/Route101/scripts.pory"
	step_end
# 165 "data/maps/Route101/scripts.pory"

# 166 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 171 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 172 "data/maps/Route101/scripts.pory"
	step_end
# 173 "data/maps/Route101/scripts.pory"

# 174 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 176 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 177 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 178 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 186 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 188 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 189 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 190 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 191 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 192 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 193 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 194 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 195 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 196 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 197 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 198 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 199 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 201 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 202 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 203 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 204 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 205 "data/maps/Route101/scripts.pory"
	step_end
# 206 "data/maps/Route101/scripts.pory"

# 207 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 208 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 210 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 211 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 213 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 214 "data/maps/Route101/scripts.pory"
	step_end
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 217 "data/maps/Route101/scripts.pory"
	step_end
# 218 "data/maps/Route101/scripts.pory"

# 219 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 220 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 221 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 222 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 223 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 224 "data/maps/Route101/scripts.pory"
	step_end
# 225 "data/maps/Route101/scripts.pory"

# 226 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 227 "data/maps/Route101/scripts.pory"
	walk_up
# 228 "data/maps/Route101/scripts.pory"
	walk_up
# 229 "data/maps/Route101/scripts.pory"
	step_end
# 230 "data/maps/Route101/scripts.pory"

# 231 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 232 "data/maps/Route101/scripts.pory"
	walk_up
# 233 "data/maps/Route101/scripts.pory"
	walk_left
# 234 "data/maps/Route101/scripts.pory"
	walk_up
# 235 "data/maps/Route101/scripts.pory"
	step_end
# 236 "data/maps/Route101/scripts.pory"

# 237 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 238 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 239 "data/maps/Route101/scripts.pory"
	end
# 240 "data/maps/Route101/scripts.pory"

# 241 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 242 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 243 "data/maps/Route101/scripts.pory"
	end
# 244 "data/maps/Route101/scripts.pory"

# 245 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 246 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 247 "data/maps/Route101/scripts.pory"
	end
# 248 "data/maps/Route101/scripts.pory"

# 249 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 250 "data/maps/Route101/scripts.pory"
	lock
# 251 "data/maps/Route101/scripts.pory"
	faceplayer
# 252 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 253 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 254 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 255 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 256 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 257 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 258 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route101/scripts.pory"
	copyvar VAR_0x800A, VAR_STARTER_GEN_CHOSEN
# 260 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 261 "data/maps/Route101/scripts.pory"
	waitstate
# 262 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 263 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 265 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 266 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 267 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 268 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 269 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 270 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 271 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 272 "data/maps/Route101/scripts.pory"
	checkplayergender
# 273 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 274 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 275 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 276 "data/maps/Route101/scripts.pory"
	waitstate
# 277 "data/maps/Route101/scripts.pory"
	release
# 278 "data/maps/Route101/scripts.pory"
	end
# 279 "data/maps/Route101/scripts.pory"

# 280 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 281 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 282 "data/maps/Route101/scripts.pory"
	return
# 283 "data/maps/Route101/scripts.pory"

# 284 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 285 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 286 "data/maps/Route101/scripts.pory"
	return
# 287 "data/maps/Route101/scripts.pory"

# 288 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 289 "data/maps/Route101/scripts.pory"
	walk_right
# 290 "data/maps/Route101/scripts.pory"
	step_end
# 291 "data/maps/Route101/scripts.pory"

# 292 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 293 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 294 "data/maps/Route101/scripts.pory"

# 295 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 296 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 297 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 298 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 299 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 300 "data/maps/Route101/scripts.pory"

# 301 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 302 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 303 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 304 "data/maps/Route101/scripts.pory"

# 305 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 306 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 307 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 308 "data/maps/Route101/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 309 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 310 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 311 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 312 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 313 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 314 "data/maps/Route101/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 315 "data/maps/Route101/scripts.pory"

# 316 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 317 "data/maps/Route101/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 318 "data/maps/Route101/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 319 "data/maps/Route101/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 320 "data/maps/Route101/scripts.pory"
	.string "TOWN right close by.$"
# 321 "data/maps/Route101/scripts.pory"

# 322 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 323 "data/maps/Route101/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 324 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 325 "data/maps/Route101/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 326 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 327 "data/maps/Route101/scripts.pory"

# 328 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 329 "data/maps/Route101/scripts.pory"
	.string "ROUTE 101\n"
# 330 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"
