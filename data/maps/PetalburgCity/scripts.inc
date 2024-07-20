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
PetalburgCity_EventScript_WallyHouseSign::
# 242 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 247 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 252 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 253 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 254 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 258 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 259 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 260 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 261 "data/maps/PetalburgCity/scripts.pory"
	end
# 262 "data/maps/PetalburgCity/scripts.pory"

# 263 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 264 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 265 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 266 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 267 "data/maps/PetalburgCity/scripts.pory"
	end
# 268 "data/maps/PetalburgCity/scripts.pory"

# 269 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 270 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 271 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 273 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 274 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 275 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 277 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 282 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 283 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 284 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 285 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 286 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 288 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 293 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 294 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 295 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 297 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 298 "data/maps/PetalburgCity/scripts.pory"
	end
# 299 "data/maps/PetalburgCity/scripts.pory"

# 300 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 301 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 302 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	return
# 306 "data/maps/PetalburgCity/scripts.pory"

# 307 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	return
# 311 "data/maps/PetalburgCity/scripts.pory"

# 312 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 313 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 314 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	return
# 318 "data/maps/PetalburgCity/scripts.pory"

# 319 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 320 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 321 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	return
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 335 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity/scripts.pory"
	return
# 337 "data/maps/PetalburgCity/scripts.pory"

# 338 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	return
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 345 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 347 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 348 "data/maps/PetalburgCity/scripts.pory"
	return
# 349 "data/maps/PetalburgCity/scripts.pory"

# 350 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 352 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 353 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 354 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 355 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 358 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 368 "data/maps/PetalburgCity/scripts.pory"

# 369 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 370 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 374 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 375 "data/maps/PetalburgCity/scripts.pory"

# 376 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 377 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 382 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 383 "data/maps/PetalburgCity/scripts.pory"

# 384 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 395 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 396 "data/maps/PetalburgCity/scripts.pory"

# 397 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 411 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 412 "data/maps/PetalburgCity/scripts.pory"

# 413 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 424 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 425 "data/maps/PetalburgCity/scripts.pory"

# 426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 439 "data/maps/PetalburgCity/scripts.pory"

# 440 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 453 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 454 "data/maps/PetalburgCity/scripts.pory"

# 455 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 465 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 466 "data/maps/PetalburgCity/scripts.pory"

# 467 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 468 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 469 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 480 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 481 "data/maps/PetalburgCity/scripts.pory"

# 482 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 492 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 493 "data/maps/PetalburgCity/scripts.pory"

# 494 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 505 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 508 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 509 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 510 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 511 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 512 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 513 "data/maps/PetalburgCity/scripts.pory"
	end
# 514 "data/maps/PetalburgCity/scripts.pory"

# 515 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 516 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 517 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 518 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 519 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 520 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 521 "data/maps/PetalburgCity/scripts.pory"
	end
# 522 "data/maps/PetalburgCity/scripts.pory"

# 523 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 524 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 525 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 526 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 527 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 528 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 529 "data/maps/PetalburgCity/scripts.pory"
	end
# 530 "data/maps/PetalburgCity/scripts.pory"

# 531 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 532 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 533 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 534 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 535 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 536 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 537 "data/maps/PetalburgCity/scripts.pory"
	end
# 538 "data/maps/PetalburgCity/scripts.pory"

# 539 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 540 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 541 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 546 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 548 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 552 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 553 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 554 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 555 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 557 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 558 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 559 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 560 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 562 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 563 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 564 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 565 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 566 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 567 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 568 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 569 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 570 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 571 "data/maps/PetalburgCity/scripts.pory"
	end
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 576 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity/scripts.pory"
	return
# 578 "data/maps/PetalburgCity/scripts.pory"

# 579 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 582 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/PetalburgCity/scripts.pory"
	return
# 584 "data/maps/PetalburgCity/scripts.pory"

# 585 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 588 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/PetalburgCity/scripts.pory"
	return
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 592 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 593 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 594 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 595 "data/maps/PetalburgCity/scripts.pory"
	return
# 596 "data/maps/PetalburgCity/scripts.pory"

# 597 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 598 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 605 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 610 "data/maps/PetalburgCity/scripts.pory"

# 611 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 626 "data/maps/PetalburgCity/scripts.pory"

# 627 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 628 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 632 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 635 "data/maps/PetalburgCity/scripts.pory"

# 636 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 650 "data/maps/PetalburgCity/scripts.pory"

# 651 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 652 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 658 "data/maps/PetalburgCity/scripts.pory"

# 659 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 673 "data/maps/PetalburgCity/scripts.pory"

# 674 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 675 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 681 "data/maps/PetalburgCity/scripts.pory"

# 682 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 696 "data/maps/PetalburgCity/scripts.pory"

# 697 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 698 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 700 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 701 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 704 "data/maps/PetalburgCity/scripts.pory"

# 705 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 706 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 707 "data/maps/PetalburgCity/scripts.pory"
	end
# 708 "data/maps/PetalburgCity/scripts.pory"

# 709 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 713 "data/maps/PetalburgCity/scripts.pory"

# 714 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 715 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 716 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 718 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 719 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 724 "data/maps/PetalburgCity/scripts.pory"

# 725 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 728 "data/maps/PetalburgCity/scripts.pory"

# 729 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 750 "data/maps/PetalburgCity/scripts.pory"

# 751 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 758 "data/maps/PetalburgCity/scripts.pory"

# 759 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 760 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 764 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 765 "data/maps/PetalburgCity/scripts.pory"

# 766 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 767 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
