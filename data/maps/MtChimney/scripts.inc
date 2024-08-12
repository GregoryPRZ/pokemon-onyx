# 1 "data/maps/MtChimney/scripts.pory"

# 2 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 4 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 5 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 6 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 7 "data/maps/MtChimney/scripts.pory"

# 8 "data/maps/MtChimney/scripts.pory"

# 9 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 10 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 11 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 12 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 13 "data/maps/MtChimney/scripts.pory"

# 14 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 15 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 16 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_VISITED_MT_CHIMNEY
# 17 "data/maps/MtChimney/scripts.pory"
	end
# 18 "data/maps/MtChimney/scripts.pory"

# 19 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 20 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 21 "data/maps/MtChimney/scripts.pory"
	end
# 22 "data/maps/MtChimney/scripts.pory"

# 23 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 24 "data/maps/MtChimney/scripts.pory"
	lock
# 25 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 26 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 27 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 28 "data/maps/MtChimney/scripts.pory"
	closemessage
# 29 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 30 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 31 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 32 "data/maps/MtChimney/scripts.pory"
	release
# 33 "data/maps/MtChimney/scripts.pory"
	end
# 34 "data/maps/MtChimney/scripts.pory"

# 35 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 36 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 37 "data/maps/MtChimney/scripts.pory"
	return
# 38 "data/maps/MtChimney/scripts.pory"

# 39 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 40 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 41 "data/maps/MtChimney/scripts.pory"
	return
# 42 "data/maps/MtChimney/scripts.pory"

# 43 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 44 "data/maps/MtChimney/scripts.pory"
	lockall
# 45 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 46 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 47 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 48 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 49 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 50 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 51 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 52 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 53 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 54 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 55 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 56 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 57 "data/maps/MtChimney/scripts.pory"
	closemessage
# 58 "data/maps/MtChimney/scripts.pory"
	delay 30
# 59 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 60 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 61 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 62 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 63 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 64 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 65 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 67 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 68 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 69 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 70 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 71 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 72 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 73 "data/maps/MtChimney/scripts.pory"
	closemessage
# 74 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 75 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 76 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 77 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 78 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 79 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 80 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 81 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 82 "data/maps/MtChimney/scripts.pory"
	releaseall
# 83 "data/maps/MtChimney/scripts.pory"
	end
# 84 "data/maps/MtChimney/scripts.pory"

# 85 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 86 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 87 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtChimney/scripts.pory"
	return
# 89 "data/maps/MtChimney/scripts.pory"

# 90 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 91 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 92 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtChimney/scripts.pory"
	return
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtChimney/scripts.pory"
	return
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 106 "data/maps/MtChimney/scripts.pory"
	lock
# 107 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 108 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 109 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 110 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 111 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 112 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 113 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 114 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 115 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 116 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 117 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 118 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 119 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 120 "data/maps/MtChimney/scripts.pory"
	release
# 121 "data/maps/MtChimney/scripts.pory"
	end
# 122 "data/maps/MtChimney/scripts.pory"
.else
# 123 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 124 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 125 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 126 "data/maps/MtChimney/scripts.pory"
	release
# 127 "data/maps/MtChimney/scripts.pory"
	end
# 128 "data/maps/MtChimney/scripts.pory"

# 129 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 130 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 131 "data/maps/MtChimney/scripts.pory"
	release
# 132 "data/maps/MtChimney/scripts.pory"
	end
# 133 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 134 "data/maps/MtChimney/scripts.pory"

# 135 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 136 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 137 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 138 "data/maps/MtChimney/scripts.pory"
	return
# 139 "data/maps/MtChimney/scripts.pory"

# 140 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 141 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 142 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 143 "data/maps/MtChimney/scripts.pory"
	release
# 144 "data/maps/MtChimney/scripts.pory"
	end
# 145 "data/maps/MtChimney/scripts.pory"

# 146 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 147 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 148 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 149 "data/maps/MtChimney/scripts.pory"
	release
# 150 "data/maps/MtChimney/scripts.pory"
	end
# 151 "data/maps/MtChimney/scripts.pory"

# 152 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 153 "data/maps/MtChimney/scripts.pory"
	walk_up
# 154 "data/maps/MtChimney/scripts.pory"
	walk_up
# 155 "data/maps/MtChimney/scripts.pory"
	walk_up
# 156 "data/maps/MtChimney/scripts.pory"
	walk_up
# 157 "data/maps/MtChimney/scripts.pory"
	walk_up
# 158 "data/maps/MtChimney/scripts.pory"
	walk_up
# 159 "data/maps/MtChimney/scripts.pory"
	walk_right
# 160 "data/maps/MtChimney/scripts.pory"
	step_end
# 161 "data/maps/MtChimney/scripts.pory"

# 162 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 163 "data/maps/MtChimney/scripts.pory"
	walk_left
# 164 "data/maps/MtChimney/scripts.pory"
	walk_down
# 165 "data/maps/MtChimney/scripts.pory"
	walk_down
# 166 "data/maps/MtChimney/scripts.pory"
	walk_down
# 167 "data/maps/MtChimney/scripts.pory"
	walk_down
# 168 "data/maps/MtChimney/scripts.pory"
	walk_down
# 169 "data/maps/MtChimney/scripts.pory"
	walk_down
# 170 "data/maps/MtChimney/scripts.pory"
	walk_down
# 171 "data/maps/MtChimney/scripts.pory"
	step_end
# 172 "data/maps/MtChimney/scripts.pory"

# 173 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 174 "data/maps/MtChimney/scripts.pory"
	walk_up
# 175 "data/maps/MtChimney/scripts.pory"
	walk_up
# 176 "data/maps/MtChimney/scripts.pory"
	walk_up
# 177 "data/maps/MtChimney/scripts.pory"
	walk_up
# 178 "data/maps/MtChimney/scripts.pory"
	walk_up
# 179 "data/maps/MtChimney/scripts.pory"
	walk_right
# 180 "data/maps/MtChimney/scripts.pory"
	walk_right
# 181 "data/maps/MtChimney/scripts.pory"
	step_end
# 182 "data/maps/MtChimney/scripts.pory"

# 183 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 184 "data/maps/MtChimney/scripts.pory"
	walk_left
# 185 "data/maps/MtChimney/scripts.pory"
	walk_left
# 186 "data/maps/MtChimney/scripts.pory"
	walk_down
# 187 "data/maps/MtChimney/scripts.pory"
	walk_down
# 188 "data/maps/MtChimney/scripts.pory"
	walk_down
# 189 "data/maps/MtChimney/scripts.pory"
	walk_down
# 190 "data/maps/MtChimney/scripts.pory"
	walk_down
# 191 "data/maps/MtChimney/scripts.pory"
	walk_down
# 192 "data/maps/MtChimney/scripts.pory"
	walk_down
# 193 "data/maps/MtChimney/scripts.pory"
	step_end
# 194 "data/maps/MtChimney/scripts.pory"

# 195 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 196 "data/maps/MtChimney/scripts.pory"
	walk_down
# 197 "data/maps/MtChimney/scripts.pory"
	walk_down
# 198 "data/maps/MtChimney/scripts.pory"
	walk_down
# 199 "data/maps/MtChimney/scripts.pory"
	walk_down
# 200 "data/maps/MtChimney/scripts.pory"
	walk_down
# 201 "data/maps/MtChimney/scripts.pory"
	walk_left
# 202 "data/maps/MtChimney/scripts.pory"
	walk_left
# 203 "data/maps/MtChimney/scripts.pory"
	walk_down
# 204 "data/maps/MtChimney/scripts.pory"
	walk_down
# 205 "data/maps/MtChimney/scripts.pory"
	walk_down
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_left
# 208 "data/maps/MtChimney/scripts.pory"
	walk_left
# 209 "data/maps/MtChimney/scripts.pory"
	walk_left
# 210 "data/maps/MtChimney/scripts.pory"
	walk_left
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_down
# 213 "data/maps/MtChimney/scripts.pory"
	step_end
# 214 "data/maps/MtChimney/scripts.pory"

# 215 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_left
# 223 "data/maps/MtChimney/scripts.pory"
	walk_down
# 224 "data/maps/MtChimney/scripts.pory"
	step_end
# 225 "data/maps/MtChimney/scripts.pory"

# 226 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 227 "data/maps/MtChimney/scripts.pory"
	walk_right
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_down
# 231 "data/maps/MtChimney/scripts.pory"
	walk_down
# 232 "data/maps/MtChimney/scripts.pory"
	walk_left
# 233 "data/maps/MtChimney/scripts.pory"
	walk_left
# 234 "data/maps/MtChimney/scripts.pory"
	walk_left
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_left
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	step_end
# 242 "data/maps/MtChimney/scripts.pory"

# 243 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 244 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 245 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 246 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 247 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_left
# 254 "data/maps/MtChimney/scripts.pory"
	walk_left
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_left
# 266 "data/maps/MtChimney/scripts.pory"
	walk_left
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	step_end
# 269 "data/maps/MtChimney/scripts.pory"

# 270 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 271 "data/maps/MtChimney/scripts.pory"
	delay_16
# 272 "data/maps/MtChimney/scripts.pory"
	delay_16
# 273 "data/maps/MtChimney/scripts.pory"
	delay_16
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_left
# 278 "data/maps/MtChimney/scripts.pory"
	walk_left
# 279 "data/maps/MtChimney/scripts.pory"
	walk_left
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	step_end
# 282 "data/maps/MtChimney/scripts.pory"

# 283 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 284 "data/maps/MtChimney/scripts.pory"
	delay_16
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_left
# 293 "data/maps/MtChimney/scripts.pory"
	walk_left
# 294 "data/maps/MtChimney/scripts.pory"
	walk_left
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	step_end
# 300 "data/maps/MtChimney/scripts.pory"

# 301 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 302 "data/maps/MtChimney/scripts.pory"
	delay_16
# 303 "data/maps/MtChimney/scripts.pory"
	walk_left
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_left
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	step_end
# 319 "data/maps/MtChimney/scripts.pory"

# 320 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 321 "data/maps/MtChimney/scripts.pory"
	delay_16
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 328 "data/maps/MtChimney/scripts.pory"
	step_end
# 329 "data/maps/MtChimney/scripts.pory"

# 330 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_left
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	step_end
# 345 "data/maps/MtChimney/scripts.pory"

# 346 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	step_end
# 349 "data/maps/MtChimney/scripts.pory"

# 350 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	step_end
# 359 "data/maps/MtChimney/scripts.pory"

# 360 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 361 "data/maps/MtChimney/scripts.pory"
	delay_16
# 362 "data/maps/MtChimney/scripts.pory"
	delay_16
# 363 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 364 "data/maps/MtChimney/scripts.pory"
	delay_16
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	walk_down
# 370 "data/maps/MtChimney/scripts.pory"
	step_end
# 371 "data/maps/MtChimney/scripts.pory"

# 372 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 373 "data/maps/MtChimney/scripts.pory"
	delay_16
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	delay_16
# 376 "data/maps/MtChimney/scripts.pory"
	delay_16
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 380 "data/maps/MtChimney/scripts.pory"
	delay_16
# 381 "data/maps/MtChimney/scripts.pory"
	walk_down
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	step_end
# 384 "data/maps/MtChimney/scripts.pory"

# 385 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 386 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 387 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 388 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 389 "data/maps/MtChimney/scripts.pory"
	face_right
# 390 "data/maps/MtChimney/scripts.pory"
	step_end
# 391 "data/maps/MtChimney/scripts.pory"

# 392 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 393 "data/maps/MtChimney/scripts.pory"
	walk_left
# 394 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 395 "data/maps/MtChimney/scripts.pory"
	delay_16
# 396 "data/maps/MtChimney/scripts.pory"
	step_end
# 397 "data/maps/MtChimney/scripts.pory"

# 398 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 399 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 400 "data/maps/MtChimney/scripts.pory"
	end
# 401 "data/maps/MtChimney/scripts.pory"

# 402 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 403 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 404 "data/maps/MtChimney/scripts.pory"
	end
# 405 "data/maps/MtChimney/scripts.pory"

# 406 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 407 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 408 "data/maps/MtChimney/scripts.pory"
	end
# 409 "data/maps/MtChimney/scripts.pory"

# 410 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 411 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 412 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 413 "data/maps/MtChimney/scripts.pory"
	end
# 414 "data/maps/MtChimney/scripts.pory"

# 415 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 416 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 417 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/MtChimney/scripts.pory"
	end
# 419 "data/maps/MtChimney/scripts.pory"

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 421 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 422 "data/maps/MtChimney/scripts.pory"
	end
# 423 "data/maps/MtChimney/scripts.pory"

# 424 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 425 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 426 "data/maps/MtChimney/scripts.pory"
	end
# 427 "data/maps/MtChimney/scripts.pory"

# 428 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 429 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 430 "data/maps/MtChimney/scripts.pory"
	end
# 431 "data/maps/MtChimney/scripts.pory"

# 432 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 433 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 434 "data/maps/MtChimney/scripts.pory"
	end
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 437 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 438 "data/maps/MtChimney/scripts.pory"
	end
# 439 "data/maps/MtChimney/scripts.pory"

# 440 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 441 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 442 "data/maps/MtChimney/scripts.pory"
	end
# 443 "data/maps/MtChimney/scripts.pory"

# 444 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 445 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 446 "data/maps/MtChimney/scripts.pory"
	end
# 447 "data/maps/MtChimney/scripts.pory"

# 448 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 449 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 450 "data/maps/MtChimney/scripts.pory"
	end
# 451 "data/maps/MtChimney/scripts.pory"

# 452 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 453 "data/maps/MtChimney/scripts.pory"
	lockall
# 454 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 455 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 456 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 457 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 458 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 459 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 460 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 461 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 462 "data/maps/MtChimney/scripts.pory"
	releaseall
# 463 "data/maps/MtChimney/scripts.pory"
	end
# 464 "data/maps/MtChimney/scripts.pory"

# 465 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 466 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 467 "data/maps/MtChimney/scripts.pory"
	releaseall
# 468 "data/maps/MtChimney/scripts.pory"
	end
# 469 "data/maps/MtChimney/scripts.pory"

# 470 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 471 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 472 "data/maps/MtChimney/scripts.pory"
	releaseall
# 473 "data/maps/MtChimney/scripts.pory"
	end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 476 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 477 "data/maps/MtChimney/scripts.pory"
	releaseall
# 478 "data/maps/MtChimney/scripts.pory"
	end
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 481 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 482 "data/maps/MtChimney/scripts.pory"
	end
# 483 "data/maps/MtChimney/scripts.pory"

# 484 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 485 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 486 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 487 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 488 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 489 "data/maps/MtChimney/scripts.pory"
	release
# 490 "data/maps/MtChimney/scripts.pory"
	end
# 491 "data/maps/MtChimney/scripts.pory"

# 492 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 493 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 494 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 496 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 497 "data/maps/MtChimney/scripts.pory"
	release
# 498 "data/maps/MtChimney/scripts.pory"
	end
# 499 "data/maps/MtChimney/scripts.pory"

# 500 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 501 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 502 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 503 "data/maps/MtChimney/scripts.pory"
	end
# 504 "data/maps/MtChimney/scripts.pory"

# 505 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 506 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 507 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/MtChimney/scripts.pory"
	end
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 511 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 512 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/MtChimney/scripts.pory"
	end
# 514 "data/maps/MtChimney/scripts.pory"

# 515 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 516 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 517 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/MtChimney/scripts.pory"
	end
# 519 "data/maps/MtChimney/scripts.pory"

# 520 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 521 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyIntro, MtChimney_Text_CourtneyDefeat
# 522 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/MtChimney/scripts.pory"
	end
# 524 "data/maps/MtChimney/scripts.pory"

# 525 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 526 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 527 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 528 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 530 "data/maps/MtChimney/scripts.pory"
	release
# 531 "data/maps/MtChimney/scripts.pory"
	end
# 532 "data/maps/MtChimney/scripts.pory"

# 533 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 534 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 535 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 536 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 537 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 538 "data/maps/MtChimney/scripts.pory"
	release
# 539 "data/maps/MtChimney/scripts.pory"
	end
# 540 "data/maps/MtChimney/scripts.pory"

# 541 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 542 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 543 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 544 "data/maps/MtChimney/scripts.pory"
	end
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 547 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 548 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 549 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 550 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 551 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 552 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 553 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 554 "data/maps/MtChimney/scripts.pory"

# 555 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 556 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 557 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 564 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 565 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 566 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 584 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 588 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 592 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 593 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 594 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 595 "data/maps/MtChimney/scripts.pory"

# 596 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 597 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 602 "data/maps/MtChimney/scripts.pory"

# 603 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 604 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 607 "data/maps/MtChimney/scripts.pory"

# 608 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 609 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 619 "data/maps/MtChimney/scripts.pory"

# 620 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 623 "data/maps/MtChimney/scripts.pory"

# 624 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 625 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "...Ha.\p"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "... ...Analyzing.\p"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "...Hah.$"
# 634 "data/maps/MtChimney/scripts.pory"

# 635 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 636 "data/maps/MtChimney/scripts.pory"
	.string "...Funny."
# 637 "data/maps/MtChimney/scripts.pory"

# 638 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 639 "data/maps/MtChimney/scripts.pory"
	.string "... ...Change...the world.$"
# 640 "data/maps/MtChimney/scripts.pory"

# 641 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 642 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 652 "data/maps/MtChimney/scripts.pory"

# 653 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 654 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 655 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 660 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 662 "data/maps/MtChimney/scripts.pory"

# 663 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 664 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 665 "data/maps/MtChimney/scripts.pory"

# 666 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 667 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 670 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 678 "data/maps/MtChimney/scripts.pory"

# 679 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 680 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 685 "data/maps/MtChimney/scripts.pory"

# 686 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 687 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 688 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 697 "data/maps/MtChimney/scripts.pory"

# 698 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 699 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 701 "data/maps/MtChimney/scripts.pory"

# 702 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 703 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 705 "data/maps/MtChimney/scripts.pory"

# 706 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 707 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 708 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 716 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 721 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 733 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 734 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 735 "data/maps/MtChimney/scripts.pory"

# 736 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 737 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 740 "data/maps/MtChimney/scripts.pory"

# 741 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 742 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 744 "data/maps/MtChimney/scripts.pory"

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 746 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 751 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 754 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 756 "data/maps/MtChimney/scripts.pory"

# 757 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 758 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 761 "data/maps/MtChimney/scripts.pory"

# 762 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 763 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 764 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 765 "data/maps/MtChimney/scripts.pory"

# 766 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 767 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 769 "data/maps/MtChimney/scripts.pory"

# 770 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 771 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 772 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 780 "data/maps/MtChimney/scripts.pory"

# 781 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 782 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 784 "data/maps/MtChimney/scripts.pory"

# 785 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 786 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 794 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 795 "data/maps/MtChimney/scripts.pory"

# 796 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 797 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 799 "data/maps/MtChimney/scripts.pory"

# 800 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 802 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 803 "data/maps/MtChimney/scripts.pory"

# 804 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 805 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 806 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 807 "data/maps/MtChimney/scripts.pory"

# 808 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 809 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 810 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 814 "data/maps/MtChimney/scripts.pory"

# 815 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 816 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 817 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 819 "data/maps/MtChimney/scripts.pory"

# 820 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 823 "data/maps/MtChimney/scripts.pory"

# 824 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 825 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 828 "data/maps/MtChimney/scripts.pory"

# 829 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 830 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 835 "data/maps/MtChimney/scripts.pory"

# 836 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 837 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 839 "data/maps/MtChimney/scripts.pory"

# 840 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 841 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 842 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
