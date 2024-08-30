# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/PetalburgCity/scripts.pory"

# 8 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 9 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE102
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 20 "data/maps/PetalburgCity/scripts.pory"
	end
# 21 "data/maps/PetalburgCity/scripts.pory"

# 22 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 23 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 24 "data/maps/PetalburgCity/scripts.pory"
	return
# 25 "data/maps/PetalburgCity/scripts.pory"

# 26 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 27 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 28 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 33 "data/maps/PetalburgCity/scripts.pory"
	return
# 34 "data/maps/PetalburgCity/scripts.pory"

# 35 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 36 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 37 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 38 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 41 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 42 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 43 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 44 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 45 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 46 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 49 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 50 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 52 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 53 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 55 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 56 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 57 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 58 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 59 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 60 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 61 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 62 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 63 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 64 "data/maps/PetalburgCity/scripts.pory"
	end
# 65 "data/maps/PetalburgCity/scripts.pory"

# 66 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 67 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 68 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 69 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 71 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 73 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 74 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 75 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 77 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 78 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 80 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 81 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 82 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 83 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 84 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 86 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 88 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 89 "data/maps/PetalburgCity/scripts.pory"
	end
# 90 "data/maps/PetalburgCity/scripts.pory"

# 91 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 92 "data/maps/PetalburgCity/scripts.pory"
	lock
# 93 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 94 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 95 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 96 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgCity/scripts.pory"
	release
# 99 "data/maps/PetalburgCity/scripts.pory"
	end
# 100 "data/maps/PetalburgCity/scripts.pory"

# 101 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 102 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 103 "data/maps/PetalburgCity/scripts.pory"
	end
# 104 "data/maps/PetalburgCity/scripts.pory"

# 105 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 106 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 123 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 124 "data/maps/PetalburgCity/scripts.pory"

# 125 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 129 "data/maps/PetalburgCity/scripts.pory"

# 130 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 131 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 153 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 154 "data/maps/PetalburgCity/scripts.pory"

# 155 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 156 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 189 "data/maps/PetalburgCity/scripts.pory"

# 190 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 191 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 224 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 225 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 228 "data/maps/PetalburgCity/scripts.pory"

# 229 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 230 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 231 "data/maps/PetalburgCity/scripts.pory"
	end
# 232 "data/maps/PetalburgCity/scripts.pory"

# 233 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 234 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 235 "data/maps/PetalburgCity/scripts.pory"
	end
# 236 "data/maps/PetalburgCity/scripts.pory"

# 237 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 238 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 239 "data/maps/PetalburgCity/scripts.pory"
	end
# 240 "data/maps/PetalburgCity/scripts.pory"

# 241 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DrifblimStop::
# 242 "data/maps/PetalburgCity/scripts.pory"
	call Common_EventScript_FlyingTaxi
# 243 "data/maps/PetalburgCity/scripts.pory"
	release
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DrifblimStopSign::
# 247 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_DrifblimStopSign, MSGBOX_SIGN
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 251 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 255 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 256 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 257 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 258 "data/maps/PetalburgCity/scripts.pory"
	end
# 259 "data/maps/PetalburgCity/scripts.pory"

# 260 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 261 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 262 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 263 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 264 "data/maps/PetalburgCity/scripts.pory"
	end
# 265 "data/maps/PetalburgCity/scripts.pory"

# 266 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 267 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 268 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 269 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 270 "data/maps/PetalburgCity/scripts.pory"
	end
# 271 "data/maps/PetalburgCity/scripts.pory"

# 272 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 273 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 274 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 275 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 276 "data/maps/PetalburgCity/scripts.pory"
	end
# 277 "data/maps/PetalburgCity/scripts.pory"

# 278 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 279 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 280 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 282 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 286 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 290 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 291 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 292 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 293 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 294 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 295 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 296 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 297 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 298 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 299 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 300 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 302 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 306 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 307 "data/maps/PetalburgCity/scripts.pory"
	end
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 313 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 314 "data/maps/PetalburgCity/scripts.pory"
	return
# 315 "data/maps/PetalburgCity/scripts.pory"

# 316 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	return
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 332 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 333 "data/maps/PetalburgCity/scripts.pory"
	return
# 334 "data/maps/PetalburgCity/scripts.pory"

# 335 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 337 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 338 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 339 "data/maps/PetalburgCity/scripts.pory"
	return
# 340 "data/maps/PetalburgCity/scripts.pory"

# 341 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 343 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 344 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 345 "data/maps/PetalburgCity/scripts.pory"
	return
# 346 "data/maps/PetalburgCity/scripts.pory"

# 347 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 349 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 350 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 351 "data/maps/PetalburgCity/scripts.pory"
	return
# 352 "data/maps/PetalburgCity/scripts.pory"

# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 355 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 356 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 357 "data/maps/PetalburgCity/scripts.pory"
	return
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 360 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 361 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 362 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 363 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 371 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 372 "data/maps/PetalburgCity/scripts.pory"

# 373 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 383 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 384 "data/maps/PetalburgCity/scripts.pory"

# 385 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 391 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 392 "data/maps/PetalburgCity/scripts.pory"

# 393 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 404 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 405 "data/maps/PetalburgCity/scripts.pory"

# 406 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 420 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 421 "data/maps/PetalburgCity/scripts.pory"

# 422 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 433 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 434 "data/maps/PetalburgCity/scripts.pory"

# 435 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 447 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 462 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 463 "data/maps/PetalburgCity/scripts.pory"

# 464 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 477 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 478 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 489 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 490 "data/maps/PetalburgCity/scripts.pory"

# 491 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 501 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 502 "data/maps/PetalburgCity/scripts.pory"

# 503 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 507 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 514 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 515 "data/maps/PetalburgCity/scripts.pory"

# 516 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 517 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 518 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 519 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 520 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 521 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 522 "data/maps/PetalburgCity/scripts.pory"
	end
# 523 "data/maps/PetalburgCity/scripts.pory"

# 524 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 525 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 526 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 527 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 528 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 529 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 530 "data/maps/PetalburgCity/scripts.pory"
	end
# 531 "data/maps/PetalburgCity/scripts.pory"

# 532 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 533 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 534 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 535 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 536 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 537 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 538 "data/maps/PetalburgCity/scripts.pory"
	end
# 539 "data/maps/PetalburgCity/scripts.pory"

# 540 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 541 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 542 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 543 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 544 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 545 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 546 "data/maps/PetalburgCity/scripts.pory"
	end
# 547 "data/maps/PetalburgCity/scripts.pory"

# 548 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 552 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 553 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 555 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 557 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 559 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 561 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 562 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 566 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 567 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 569 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 571 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 572 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 573 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 574 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 575 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 576 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 577 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 578 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 579 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 580 "data/maps/PetalburgCity/scripts.pory"
	end
# 581 "data/maps/PetalburgCity/scripts.pory"

# 582 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 584 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 585 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/PetalburgCity/scripts.pory"
	return
# 587 "data/maps/PetalburgCity/scripts.pory"

# 588 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 590 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 591 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 592 "data/maps/PetalburgCity/scripts.pory"
	return
# 593 "data/maps/PetalburgCity/scripts.pory"

# 594 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 596 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 597 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/PetalburgCity/scripts.pory"
	return
# 599 "data/maps/PetalburgCity/scripts.pory"

# 600 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 601 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 602 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 603 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 604 "data/maps/PetalburgCity/scripts.pory"
	return
# 605 "data/maps/PetalburgCity/scripts.pory"

# 606 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity/scripts.pory"

# 613 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 619 "data/maps/PetalburgCity/scripts.pory"

# 620 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 637 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 639 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 640 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 641 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 644 "data/maps/PetalburgCity/scripts.pory"

# 645 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 659 "data/maps/PetalburgCity/scripts.pory"

# 660 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 661 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 663 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 664 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 667 "data/maps/PetalburgCity/scripts.pory"

# 668 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 682 "data/maps/PetalburgCity/scripts.pory"

# 683 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 684 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 686 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 687 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 705 "data/maps/PetalburgCity/scripts.pory"

# 706 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 707 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 708 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 709 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 710 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 711 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 712 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 713 "data/maps/PetalburgCity/scripts.pory"

# 714 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 715 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 716 "data/maps/PetalburgCity/scripts.pory"
	end
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 730 "data/maps/PetalburgCity/scripts.pory"

# 731 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 733 "data/maps/PetalburgCity/scripts.pory"

# 734 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 735 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 755 "data/maps/PetalburgCity/scripts.pory"

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 759 "data/maps/PetalburgCity/scripts.pory"

# 760 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 762 "data/maps/PetalburgCity/scripts.pory"

# 763 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_DrifblimStopSign:
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY DRIFBLIM STOP\n"
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "A new way to fly over HOENN!$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 778 "data/maps/PetalburgCity/scripts.pory"

# 779 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
