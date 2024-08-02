# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 4 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 7 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 8 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 11 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 13 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE101
# 14 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 15 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 16 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 17 "data/maps/OldaleTown/scripts.pory"
	end
# 18 "data/maps/OldaleTown/scripts.pory"

# 19 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 20 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 21 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 22 "data/maps/OldaleTown/scripts.pory"
	return
# 23 "data/maps/OldaleTown/scripts.pory"

# 24 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 25 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 27 "data/maps/OldaleTown/scripts.pory"
	return
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 30 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 31 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/OldaleTown/scripts.pory"
	return
# 33 "data/maps/OldaleTown/scripts.pory"

# 34 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 35 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 36 "data/maps/OldaleTown/scripts.pory"
	end
# 37 "data/maps/OldaleTown/scripts.pory"

# 38 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 39 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 40 "data/maps/OldaleTown/scripts.pory"
	end
# 41 "data/maps/OldaleTown/scripts.pory"

# 42 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 43 "data/maps/OldaleTown/scripts.pory"
	lock
# 44 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 45 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 46 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 47 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 50 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 51 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 52 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 53 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 54 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 55 "data/maps/OldaleTown/scripts.pory"
	end
# 56 "data/maps/OldaleTown/scripts.pory"

# 57 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 58 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 60 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 61 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 62 "data/maps/OldaleTown/scripts.pory"
	end
# 63 "data/maps/OldaleTown/scripts.pory"

# 64 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 65 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 66 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 67 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 69 "data/maps/OldaleTown/scripts.pory"
	end
# 70 "data/maps/OldaleTown/scripts.pory"

# 71 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 73 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 74 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 75 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 76 "data/maps/OldaleTown/scripts.pory"
	end
# 77 "data/maps/OldaleTown/scripts.pory"

# 78 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 79 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 80 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 81 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 82 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 83 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 84 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/OldaleTown/scripts.pory"
	release
# 86 "data/maps/OldaleTown/scripts.pory"
	end
# 87 "data/maps/OldaleTown/scripts.pory"

# 88 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	release
# 91 "data/maps/OldaleTown/scripts.pory"
	end
# 92 "data/maps/OldaleTown/scripts.pory"

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 94 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 95 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/OldaleTown/scripts.pory"
	release
# 97 "data/maps/OldaleTown/scripts.pory"
	end
# 98 "data/maps/OldaleTown/scripts.pory"

# 99 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 102 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 103 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 104 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 108 "data/maps/OldaleTown/scripts.pory"
	step_end
# 109 "data/maps/OldaleTown/scripts.pory"

# 110 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 115 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 116 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 117 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 121 "data/maps/OldaleTown/scripts.pory"
	step_end
# 122 "data/maps/OldaleTown/scripts.pory"

# 123 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 128 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 132 "data/maps/OldaleTown/scripts.pory"
	step_end
# 133 "data/maps/OldaleTown/scripts.pory"

# 134 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 140 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 146 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 148 "data/maps/OldaleTown/scripts.pory"
	step_end
# 149 "data/maps/OldaleTown/scripts.pory"

# 150 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 155 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 156 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 157 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 158 "data/maps/OldaleTown/scripts.pory"
	step_end
# 159 "data/maps/OldaleTown/scripts.pory"

# 160 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 161 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 162 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 163 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 164 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 165 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 166 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	step_end
# 171 "data/maps/OldaleTown/scripts.pory"

# 172 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	step_end
# 181 "data/maps/OldaleTown/scripts.pory"

# 182 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 188 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 189 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 194 "data/maps/OldaleTown/scripts.pory"
	step_end
# 195 "data/maps/OldaleTown/scripts.pory"

# 196 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 197 "data/maps/OldaleTown/scripts.pory"
	lock
# 198 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 199 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 200 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 201 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 202 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 203 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/OldaleTown/scripts.pory"
	release
# 205 "data/maps/OldaleTown/scripts.pory"
	end
# 206 "data/maps/OldaleTown/scripts.pory"

# 207 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 208 "data/maps/OldaleTown/scripts.pory"
	lockall
# 209 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 210 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 211 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 213 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 214 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 215 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 217 "data/maps/OldaleTown/scripts.pory"
	end
# 218 "data/maps/OldaleTown/scripts.pory"

# 219 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 220 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 221 "data/maps/OldaleTown/scripts.pory"
	release
# 222 "data/maps/OldaleTown/scripts.pory"
	end
# 223 "data/maps/OldaleTown/scripts.pory"

# 224 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 225 "data/maps/OldaleTown/scripts.pory"
	lockall
# 226 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 227 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 229 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 230 "data/maps/OldaleTown/scripts.pory"
	end
# 231 "data/maps/OldaleTown/scripts.pory"

# 232 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 233 "data/maps/OldaleTown/scripts.pory"
	lockall
# 234 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 235 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 236 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 237 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 238 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 239 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 240 "data/maps/OldaleTown/scripts.pory"
	end
# 241 "data/maps/OldaleTown/scripts.pory"

# 242 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 243 "data/maps/OldaleTown/scripts.pory"
	lockall
# 244 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 245 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 246 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 247 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 249 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 250 "data/maps/OldaleTown/scripts.pory"
	end
# 251 "data/maps/OldaleTown/scripts.pory"

# 252 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 253 "data/maps/OldaleTown/scripts.pory"
	lockall
# 254 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 255 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 256 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 259 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 260 "data/maps/OldaleTown/scripts.pory"
	end
# 261 "data/maps/OldaleTown/scripts.pory"

# 262 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 263 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 264 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 265 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 266 "data/maps/OldaleTown/scripts.pory"
	end
# 267 "data/maps/OldaleTown/scripts.pory"

# 268 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 269 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 270 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 271 "data/maps/OldaleTown/scripts.pory"
	end
# 272 "data/maps/OldaleTown/scripts.pory"

# 273 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 275 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 276 "data/maps/OldaleTown/scripts.pory"
	end
# 277 "data/maps/OldaleTown/scripts.pory"

# 278 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 279 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 280 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 281 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 282 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 283 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 284 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 285 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 286 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 287 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 288 "data/maps/OldaleTown/scripts.pory"
	end
# 289 "data/maps/OldaleTown/scripts.pory"

# 290 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 291 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 292 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 293 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/OldaleTown/scripts.pory"
	return
# 295 "data/maps/OldaleTown/scripts.pory"

# 296 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 297 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 298 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 299 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 300 "data/maps/OldaleTown/scripts.pory"
	return
# 301 "data/maps/OldaleTown/scripts.pory"

# 302 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 303 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 304 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 305 "data/maps/OldaleTown/scripts.pory"
	step_end
# 306 "data/maps/OldaleTown/scripts.pory"

# 307 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 308 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 309 "data/maps/OldaleTown/scripts.pory"
	step_end
# 310 "data/maps/OldaleTown/scripts.pory"

# 311 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 312 "data/maps/OldaleTown/scripts.pory"
	face_left
# 313 "data/maps/OldaleTown/scripts.pory"
	step_end
# 314 "data/maps/OldaleTown/scripts.pory"

# 315 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 316 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 317 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 318 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 319 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 320 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 321 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 322 "data/maps/OldaleTown/scripts.pory"
	step_end
# 323 "data/maps/OldaleTown/scripts.pory"

# 324 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 325 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 326 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 327 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 328 "data/maps/OldaleTown/scripts.pory"
	step_end
# 329 "data/maps/OldaleTown/scripts.pory"

# 330 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 331 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 332 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 333 "data/maps/OldaleTown/scripts.pory"
	step_end
# 334 "data/maps/OldaleTown/scripts.pory"

# 335 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 336 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 337 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 338 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 340 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 341 "data/maps/OldaleTown/scripts.pory"
	step_end
# 342 "data/maps/OldaleTown/scripts.pory"

# 343 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 345 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 346 "data/maps/OldaleTown/scripts.pory"
	step_end
# 347 "data/maps/OldaleTown/scripts.pory"

# 348 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 349 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 350 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 351 "data/maps/OldaleTown/scripts.pory"

# 352 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 355 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 356 "data/maps/OldaleTown/scripts.pory"

# 357 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 358 "data/maps/OldaleTown/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 359 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 363 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 364 "data/maps/OldaleTown/scripts.pory"

# 365 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 369 "data/maps/OldaleTown/scripts.pory"

# 370 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 371 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 372 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 377 "data/maps/OldaleTown/scripts.pory"

# 378 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON!\p"
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 382 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 383 "data/maps/OldaleTown/scripts.pory"

# 384 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "a rare POKéMON.\p"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 388 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 389 "data/maps/OldaleTown/scripts.pory"

# 390 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 394 "data/maps/OldaleTown/scripts.pory"

# 395 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 399 "data/maps/OldaleTown/scripts.pory"

# 400 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"
