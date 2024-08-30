# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 5
# 4 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 7
# 6 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 7 "data/maps/RusturfTunnel/scripts.pory"

# 8 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 9 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 11 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 12 "data/maps/RusturfTunnel/scripts.pory"

# 13 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 14 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 15 "data/maps/RusturfTunnel/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 17 "data/maps/RusturfTunnel/scripts.pory"

# 18 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 19 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_VISITED_ROUTE116
# 20 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 21 "data/maps/RusturfTunnel/scripts.pory"
	end
# 22 "data/maps/RusturfTunnel/scripts.pory"

# 23 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 24 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 25 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 26 "data/maps/RusturfTunnel/scripts.pory"
	return
# 27 "data/maps/RusturfTunnel/scripts.pory"

# 28 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 29 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 30 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 31 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 32 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 33 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 34 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 35 "data/maps/RusturfTunnel/scripts.pory"
	release
# 36 "data/maps/RusturfTunnel/scripts.pory"
	end
# 37 "data/maps/RusturfTunnel/scripts.pory"

# 38 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 39 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 40 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 41 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 42 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 43 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 44 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 45 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 46 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 47 "data/maps/RusturfTunnel/scripts.pory"
	release
# 48 "data/maps/RusturfTunnel/scripts.pory"
	end
# 49 "data/maps/RusturfTunnel/scripts.pory"

# 50 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 51 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 52 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 53 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 54 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 55 "data/maps/RusturfTunnel/scripts.pory"
	release
# 56 "data/maps/RusturfTunnel/scripts.pory"
	end
# 57 "data/maps/RusturfTunnel/scripts.pory"

# 58 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 59 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 62 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 63 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 64 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 65 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 66 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 67 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 68 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 69 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 70 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 72 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 73 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 74 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 75 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 78 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 79 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 80 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 81 "data/maps/RusturfTunnel/scripts.pory"
	end
# 82 "data/maps/RusturfTunnel/scripts.pory"

# 83 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 84 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 85 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 86 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 87 "data/maps/RusturfTunnel/scripts.pory"
	return
# 88 "data/maps/RusturfTunnel/scripts.pory"

# 89 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 90 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 91 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 92 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 93 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 94 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 95 "data/maps/RusturfTunnel/scripts.pory"
	return
# 96 "data/maps/RusturfTunnel/scripts.pory"

# 97 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 98 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 99 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 100 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 101 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 102 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 108 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 109 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 110 "data/maps/RusturfTunnel/scripts.pory"
	return
# 111 "data/maps/RusturfTunnel/scripts.pory"

# 112 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 113 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 114 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 115 "data/maps/RusturfTunnel/scripts.pory"
	return
# 116 "data/maps/RusturfTunnel/scripts.pory"

# 117 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 118 "data/maps/RusturfTunnel/scripts.pory"
	return
# 119 "data/maps/RusturfTunnel/scripts.pory"

# 120 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 121 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 122 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 123 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 124 "data/maps/RusturfTunnel/scripts.pory"
	return
# 125 "data/maps/RusturfTunnel/scripts.pory"

# 126 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 127 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 128 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 129 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 130 "data/maps/RusturfTunnel/scripts.pory"
	return
# 131 "data/maps/RusturfTunnel/scripts.pory"

# 132 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 133 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 134 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 135 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 136 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 137 "data/maps/RusturfTunnel/scripts.pory"
	return
# 138 "data/maps/RusturfTunnel/scripts.pory"

# 139 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 140 "data/maps/RusturfTunnel/scripts.pory"
	playse SE_PIN
# 141 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 142 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 143 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 144 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 145 "data/maps/RusturfTunnel/scripts.pory"
	return
# 146 "data/maps/RusturfTunnel/scripts.pory"

# 147 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 151 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 152 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 155 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 157 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 158 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 159 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 160 "data/maps/RusturfTunnel/scripts.pory"

# 161 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 162 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 165 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 166 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 169 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 170 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 171 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 172 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 173 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 174 "data/maps/RusturfTunnel/scripts.pory"

# 175 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 176 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 178 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 179 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 180 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 181 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 182 "data/maps/RusturfTunnel/scripts.pory"

# 183 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 184 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 187 "data/maps/RusturfTunnel/scripts.pory"

# 188 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 189 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 191 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 193 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 194 "data/maps/RusturfTunnel/scripts.pory"

# 195 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 196 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 200 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 201 "data/maps/RusturfTunnel/scripts.pory"

# 202 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 206 "data/maps/RusturfTunnel/scripts.pory"

# 207 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 209 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 210 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 211 "data/maps/RusturfTunnel/scripts.pory"

# 212 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 213 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 214 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 215 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 216 "data/maps/RusturfTunnel/scripts.pory"

# 217 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 221 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 222 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 227 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 228 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 229 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 230 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 231 "data/maps/RusturfTunnel/scripts.pory"

# 232 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 233 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 234 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 235 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 236 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 237 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 238 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 239 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 240 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 241 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 242 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 243 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 244 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 245 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 246 "data/maps/RusturfTunnel/scripts.pory"

# 247 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 248 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 249 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 250 "data/maps/RusturfTunnel/scripts.pory"

# 251 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 252 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 253 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 254 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 255 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 256 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 257 "data/maps/RusturfTunnel/scripts.pory"

# 258 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 259 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 260 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 261 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 262 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 263 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 264 "data/maps/RusturfTunnel/scripts.pory"

# 265 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 266 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 267 "data/maps/RusturfTunnel/scripts.pory"
	end
# 268 "data/maps/RusturfTunnel/scripts.pory"

# 269 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 270 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 271 "data/maps/RusturfTunnel/scripts.pory"
	end
# 272 "data/maps/RusturfTunnel/scripts.pory"

# 273 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 274 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 275 "data/maps/RusturfTunnel/scripts.pory"
	end
# 276 "data/maps/RusturfTunnel/scripts.pory"

# 277 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 278 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 279 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 280 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 281 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 282 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 283 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 284 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 285 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 286 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 287 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 288 "data/maps/RusturfTunnel/scripts.pory"
	end
# 289 "data/maps/RusturfTunnel/scripts.pory"

# 290 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 291 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 292 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 293 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 294 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 295 "data/maps/RusturfTunnel/scripts.pory"

# 296 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 297 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 298 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 299 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 300 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 301 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 302 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 303 "data/maps/RusturfTunnel/scripts.pory"
	release
# 304 "data/maps/RusturfTunnel/scripts.pory"
	end
# 305 "data/maps/RusturfTunnel/scripts.pory"

# 306 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 307 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 308 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 309 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 310 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 311 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 312 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 313 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 314 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 315 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 316 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 317 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 318 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 319 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 320 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 321 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 322 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 323 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 324 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 325 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 326 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 327 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 328 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 329 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 330 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 331 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 332 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 333 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 334 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 335 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 336 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 337 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 338 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 339 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 340 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 341 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 342 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 343 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 344 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 345 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 346 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 347 "data/maps/RusturfTunnel/scripts.pory"
	release
# 348 "data/maps/RusturfTunnel/scripts.pory"
	end
# 349 "data/maps/RusturfTunnel/scripts.pory"

# 350 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 351 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 352 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 353 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 354 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 355 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 357 "data/maps/RusturfTunnel/scripts.pory"

# 358 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 359 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 360 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 362 "data/maps/RusturfTunnel/scripts.pory"

# 363 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 370 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 371 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 373 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 374 "data/maps/RusturfTunnel/scripts.pory"

# 375 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 379 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 380 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 381 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 383 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 384 "data/maps/RusturfTunnel/scripts.pory"

# 385 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 386 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 394 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 395 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 396 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 397 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 398 "data/maps/RusturfTunnel/scripts.pory"

# 399 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 400 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 401 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 402 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 403 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 404 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 405 "data/maps/RusturfTunnel/scripts.pory"

# 406 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 407 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 408 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 409 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 410 "data/maps/RusturfTunnel/scripts.pory"

# 411 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 413 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 414 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 415 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 420 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 421 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 422 "data/maps/RusturfTunnel/scripts.pory"

# 423 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 424 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 425 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/RusturfTunnel/scripts.pory"
	end
# 427 "data/maps/RusturfTunnel/scripts.pory"

# 428 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Clefairy::
# 429 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 430 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 431 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, RusturfTunnel_EventScript_ClefairyPass
# 432 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 433 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 434 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ClefairyBlock
# 435 "data/maps/RusturfTunnel/scripts.pory"
	release
# 436 "data/maps/RusturfTunnel/scripts.pory"
	end
# 437 "data/maps/RusturfTunnel/scripts.pory"

# 438 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClefairyPass::
# 439 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 440 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 441 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ClefairyPass
# 442 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 443 "data/maps/RusturfTunnel/scripts.pory"
	removeobject 11
# 444 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 445 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_CLEFAIRY
# 446 "data/maps/RusturfTunnel/scripts.pory"
	release
# 447 "data/maps/RusturfTunnel/scripts.pory"
	end
# 448 "data/maps/RusturfTunnel/scripts.pory"

# 449 "data/maps/RusturfTunnel/scripts.pory"

# 450 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ClefairyBlock:
# 451 "data/maps/RusturfTunnel/scripts.pory"
	.string "The CLEFAIRY doesn't\n"
# 452 "data/maps/RusturfTunnel/scripts.pory"
	.string "want to let you pass.$"
# 453 "data/maps/RusturfTunnel/scripts.pory"

# 454 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ClefairyPass:
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "The CLEFAIRY recognized\n"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "your power! He wants you\l"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "to pass and follow him.$"
# 458 "data/maps/RusturfTunnel/scripts.pory"

# 459 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 460 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 461 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 462 "data/maps/RusturfTunnel/scripts.pory"

# 463 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 464 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 465 "data/maps/RusturfTunnel/scripts.pory"

# 466 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 474 "data/maps/RusturfTunnel/scripts.pory"

# 475 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 478 "data/maps/RusturfTunnel/scripts.pory"

# 479 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 480 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 481 "data/maps/RusturfTunnel/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "from DEVON.\p"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 487 "data/maps/RusturfTunnel/scripts.pory"

# 488 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO!\n"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 491 "data/maps/RusturfTunnel/scripts.pory"

# 492 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 493 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 500 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 501 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 504 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 505 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 507 "data/maps/RusturfTunnel/scripts.pory"

# 508 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 509 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 510 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 513 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 514 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 515 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 516 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 519 "data/maps/RusturfTunnel/scripts.pory"

# 520 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 521 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 522 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 524 "data/maps/RusturfTunnel/scripts.pory"

# 525 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 526 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 527 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 528 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 530 "data/maps/RusturfTunnel/scripts.pory"

# 531 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 532 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 535 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 536 "data/maps/RusturfTunnel/scripts.pory"

# 537 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 538 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 540 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 541 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 542 "data/maps/RusturfTunnel/scripts.pory"

# 543 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 544 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 545 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 546 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 548 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 549 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 550 "data/maps/RusturfTunnel/scripts.pory"

# 551 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 552 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 553 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 554 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 555 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 556 "data/maps/RusturfTunnel/scripts.pory"

# 557 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 558 "data/maps/RusturfTunnel/scripts.pory"
	.string "My POKéMON…\n"
# 559 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 560 "data/maps/RusturfTunnel/scripts.pory"

# 561 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 562 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 563 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect POKéMON, right?\l"
# 564 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
