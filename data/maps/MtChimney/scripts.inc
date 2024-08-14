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
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 37 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 38 "data/maps/MtChimney/scripts.pory"
	removefieldmugshot
# 39 "data/maps/MtChimney/scripts.pory"
	return
# 40 "data/maps/MtChimney/scripts.pory"

# 41 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 42 "data/maps/MtChimney/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 43 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 44 "data/maps/MtChimney/scripts.pory"
	removefieldmugshot
# 45 "data/maps/MtChimney/scripts.pory"
	return
# 46 "data/maps/MtChimney/scripts.pory"

# 47 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 48 "data/maps/MtChimney/scripts.pory"
	lockall
# 49 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 50 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 51 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 52 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 53 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 54 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 55 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 56 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 57 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 58 "data/maps/MtChimney/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 59 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 60 "data/maps/MtChimney/scripts.pory"
	removefieldmugshot
# 61 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 62 "data/maps/MtChimney/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 63 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 64 "data/maps/MtChimney/scripts.pory"
	removefieldmugshot
# 65 "data/maps/MtChimney/scripts.pory"
	closemessage
# 66 "data/maps/MtChimney/scripts.pory"
	delay 30
# 67 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 69 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 70 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 71 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 72 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 73 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 74 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 75 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 76 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 77 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 78 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 79 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 80 "data/maps/MtChimney/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 81 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 82 "data/maps/MtChimney/scripts.pory"
	removefieldmugshot
# 83 "data/maps/MtChimney/scripts.pory"
	closemessage
# 84 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 85 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 86 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 87 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 88 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 89 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 90 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 91 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 92 "data/maps/MtChimney/scripts.pory"
	releaseall
# 93 "data/maps/MtChimney/scripts.pory"
	end
# 94 "data/maps/MtChimney/scripts.pory"

# 95 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 96 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 97 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtChimney/scripts.pory"
	return
# 99 "data/maps/MtChimney/scripts.pory"

# 100 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 101 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 102 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtChimney/scripts.pory"
	return
# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 106 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 107 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtChimney/scripts.pory"
	return
# 109 "data/maps/MtChimney/scripts.pory"

# 110 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 111 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 112 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtChimney/scripts.pory"
	return
# 114 "data/maps/MtChimney/scripts.pory"

# 115 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 116 "data/maps/MtChimney/scripts.pory"
	lock
# 117 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 118 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 119 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 120 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 121 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 122 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 123 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 124 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 125 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 126 "data/maps/MtChimney/scripts.pory"
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
# 127 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 128 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 129 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 130 "data/maps/MtChimney/scripts.pory"
	release
# 131 "data/maps/MtChimney/scripts.pory"
	end
# 132 "data/maps/MtChimney/scripts.pory"
.else
# 133 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 134 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 135 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 136 "data/maps/MtChimney/scripts.pory"
	release
# 137 "data/maps/MtChimney/scripts.pory"
	end
# 138 "data/maps/MtChimney/scripts.pory"

# 139 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 140 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 141 "data/maps/MtChimney/scripts.pory"
	release
# 142 "data/maps/MtChimney/scripts.pory"
	end
# 143 "data/maps/MtChimney/scripts.pory"
.endif @ OW_SHOW_ITEM_DESCRIPTIONS
# 144 "data/maps/MtChimney/scripts.pory"

# 145 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 146 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 147 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 148 "data/maps/MtChimney/scripts.pory"
	return
# 149 "data/maps/MtChimney/scripts.pory"

# 150 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 151 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 152 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 153 "data/maps/MtChimney/scripts.pory"
	release
# 154 "data/maps/MtChimney/scripts.pory"
	end
# 155 "data/maps/MtChimney/scripts.pory"

# 156 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 157 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 158 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 159 "data/maps/MtChimney/scripts.pory"
	release
# 160 "data/maps/MtChimney/scripts.pory"
	end
# 161 "data/maps/MtChimney/scripts.pory"

# 162 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 163 "data/maps/MtChimney/scripts.pory"
	walk_up
# 164 "data/maps/MtChimney/scripts.pory"
	walk_up
# 165 "data/maps/MtChimney/scripts.pory"
	walk_up
# 166 "data/maps/MtChimney/scripts.pory"
	walk_up
# 167 "data/maps/MtChimney/scripts.pory"
	walk_up
# 168 "data/maps/MtChimney/scripts.pory"
	walk_up
# 169 "data/maps/MtChimney/scripts.pory"
	walk_right
# 170 "data/maps/MtChimney/scripts.pory"
	step_end
# 171 "data/maps/MtChimney/scripts.pory"

# 172 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 173 "data/maps/MtChimney/scripts.pory"
	walk_left
# 174 "data/maps/MtChimney/scripts.pory"
	walk_down
# 175 "data/maps/MtChimney/scripts.pory"
	walk_down
# 176 "data/maps/MtChimney/scripts.pory"
	walk_down
# 177 "data/maps/MtChimney/scripts.pory"
	walk_down
# 178 "data/maps/MtChimney/scripts.pory"
	walk_down
# 179 "data/maps/MtChimney/scripts.pory"
	walk_down
# 180 "data/maps/MtChimney/scripts.pory"
	walk_down
# 181 "data/maps/MtChimney/scripts.pory"
	step_end
# 182 "data/maps/MtChimney/scripts.pory"

# 183 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 184 "data/maps/MtChimney/scripts.pory"
	walk_up
# 185 "data/maps/MtChimney/scripts.pory"
	walk_up
# 186 "data/maps/MtChimney/scripts.pory"
	walk_up
# 187 "data/maps/MtChimney/scripts.pory"
	walk_up
# 188 "data/maps/MtChimney/scripts.pory"
	walk_up
# 189 "data/maps/MtChimney/scripts.pory"
	walk_right
# 190 "data/maps/MtChimney/scripts.pory"
	walk_right
# 191 "data/maps/MtChimney/scripts.pory"
	step_end
# 192 "data/maps/MtChimney/scripts.pory"

# 193 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 194 "data/maps/MtChimney/scripts.pory"
	walk_left
# 195 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 202 "data/maps/MtChimney/scripts.pory"
	walk_down
# 203 "data/maps/MtChimney/scripts.pory"
	step_end
# 204 "data/maps/MtChimney/scripts.pory"

# 205 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 206 "data/maps/MtChimney/scripts.pory"
	walk_down
# 207 "data/maps/MtChimney/scripts.pory"
	walk_down
# 208 "data/maps/MtChimney/scripts.pory"
	walk_down
# 209 "data/maps/MtChimney/scripts.pory"
	walk_down
# 210 "data/maps/MtChimney/scripts.pory"
	walk_down
# 211 "data/maps/MtChimney/scripts.pory"
	walk_left
# 212 "data/maps/MtChimney/scripts.pory"
	walk_left
# 213 "data/maps/MtChimney/scripts.pory"
	walk_down
# 214 "data/maps/MtChimney/scripts.pory"
	walk_down
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_left
# 218 "data/maps/MtChimney/scripts.pory"
	walk_left
# 219 "data/maps/MtChimney/scripts.pory"
	walk_left
# 220 "data/maps/MtChimney/scripts.pory"
	walk_left
# 221 "data/maps/MtChimney/scripts.pory"
	walk_left
# 222 "data/maps/MtChimney/scripts.pory"
	walk_down
# 223 "data/maps/MtChimney/scripts.pory"
	step_end
# 224 "data/maps/MtChimney/scripts.pory"

# 225 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 226 "data/maps/MtChimney/scripts.pory"
	walk_down
# 227 "data/maps/MtChimney/scripts.pory"
	walk_down
# 228 "data/maps/MtChimney/scripts.pory"
	walk_down
# 229 "data/maps/MtChimney/scripts.pory"
	walk_down
# 230 "data/maps/MtChimney/scripts.pory"
	walk_left
# 231 "data/maps/MtChimney/scripts.pory"
	walk_left
# 232 "data/maps/MtChimney/scripts.pory"
	walk_left
# 233 "data/maps/MtChimney/scripts.pory"
	walk_down
# 234 "data/maps/MtChimney/scripts.pory"
	step_end
# 235 "data/maps/MtChimney/scripts.pory"

# 236 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 237 "data/maps/MtChimney/scripts.pory"
	walk_right
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_left
# 243 "data/maps/MtChimney/scripts.pory"
	walk_left
# 244 "data/maps/MtChimney/scripts.pory"
	walk_left
# 245 "data/maps/MtChimney/scripts.pory"
	walk_left
# 246 "data/maps/MtChimney/scripts.pory"
	walk_left
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	step_end
# 252 "data/maps/MtChimney/scripts.pory"

# 253 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 254 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 259 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 260 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 261 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 262 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 263 "data/maps/MtChimney/scripts.pory"
	walk_left
# 264 "data/maps/MtChimney/scripts.pory"
	walk_left
# 265 "data/maps/MtChimney/scripts.pory"
	walk_down
# 266 "data/maps/MtChimney/scripts.pory"
	walk_down
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_left
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_down
# 271 "data/maps/MtChimney/scripts.pory"
	walk_down
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_left
# 274 "data/maps/MtChimney/scripts.pory"
	walk_left
# 275 "data/maps/MtChimney/scripts.pory"
	walk_left
# 276 "data/maps/MtChimney/scripts.pory"
	walk_left
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	step_end
# 279 "data/maps/MtChimney/scripts.pory"

# 280 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 281 "data/maps/MtChimney/scripts.pory"
	delay_16
# 282 "data/maps/MtChimney/scripts.pory"
	delay_16
# 283 "data/maps/MtChimney/scripts.pory"
	delay_16
# 284 "data/maps/MtChimney/scripts.pory"
	walk_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_left
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	step_end
# 292 "data/maps/MtChimney/scripts.pory"

# 293 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 294 "data/maps/MtChimney/scripts.pory"
	delay_16
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_left
# 301 "data/maps/MtChimney/scripts.pory"
	walk_left
# 302 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	step_end
# 310 "data/maps/MtChimney/scripts.pory"

# 311 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 312 "data/maps/MtChimney/scripts.pory"
	delay_16
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_down
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	walk_left
# 319 "data/maps/MtChimney/scripts.pory"
	walk_left
# 320 "data/maps/MtChimney/scripts.pory"
	walk_down
# 321 "data/maps/MtChimney/scripts.pory"
	walk_down
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_left
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	step_end
# 329 "data/maps/MtChimney/scripts.pory"

# 330 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 331 "data/maps/MtChimney/scripts.pory"
	delay_16
# 332 "data/maps/MtChimney/scripts.pory"
	walk_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_left
# 334 "data/maps/MtChimney/scripts.pory"
	walk_left
# 335 "data/maps/MtChimney/scripts.pory"
	walk_left
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/MtChimney/scripts.pory"
	step_end
# 339 "data/maps/MtChimney/scripts.pory"

# 340 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 341 "data/maps/MtChimney/scripts.pory"
	walk_down
# 342 "data/maps/MtChimney/scripts.pory"
	walk_down
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_left
# 349 "data/maps/MtChimney/scripts.pory"
	walk_left
# 350 "data/maps/MtChimney/scripts.pory"
	walk_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_down
# 354 "data/maps/MtChimney/scripts.pory"
	step_end
# 355 "data/maps/MtChimney/scripts.pory"

# 356 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	step_end
# 359 "data/maps/MtChimney/scripts.pory"

# 360 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_down
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	step_end
# 369 "data/maps/MtChimney/scripts.pory"

# 370 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 371 "data/maps/MtChimney/scripts.pory"
	delay_16
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 374 "data/maps/MtChimney/scripts.pory"
	delay_16
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_down
# 378 "data/maps/MtChimney/scripts.pory"
	walk_down
# 379 "data/maps/MtChimney/scripts.pory"
	walk_down
# 380 "data/maps/MtChimney/scripts.pory"
	step_end
# 381 "data/maps/MtChimney/scripts.pory"

# 382 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 383 "data/maps/MtChimney/scripts.pory"
	delay_16
# 384 "data/maps/MtChimney/scripts.pory"
	delay_16
# 385 "data/maps/MtChimney/scripts.pory"
	delay_16
# 386 "data/maps/MtChimney/scripts.pory"
	delay_16
# 387 "data/maps/MtChimney/scripts.pory"
	delay_16
# 388 "data/maps/MtChimney/scripts.pory"
	delay_16
# 389 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 390 "data/maps/MtChimney/scripts.pory"
	delay_16
# 391 "data/maps/MtChimney/scripts.pory"
	walk_down
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	step_end
# 394 "data/maps/MtChimney/scripts.pory"

# 395 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 396 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 397 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 398 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 399 "data/maps/MtChimney/scripts.pory"
	face_right
# 400 "data/maps/MtChimney/scripts.pory"
	step_end
# 401 "data/maps/MtChimney/scripts.pory"

# 402 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 403 "data/maps/MtChimney/scripts.pory"
	walk_left
# 404 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 405 "data/maps/MtChimney/scripts.pory"
	delay_16
# 406 "data/maps/MtChimney/scripts.pory"
	step_end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 409 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 410 "data/maps/MtChimney/scripts.pory"
	end
# 411 "data/maps/MtChimney/scripts.pory"

# 412 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 413 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 414 "data/maps/MtChimney/scripts.pory"
	end
# 415 "data/maps/MtChimney/scripts.pory"

# 416 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 417 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 418 "data/maps/MtChimney/scripts.pory"
	end
# 419 "data/maps/MtChimney/scripts.pory"

# 420 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 421 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 422 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/MtChimney/scripts.pory"
	end
# 424 "data/maps/MtChimney/scripts.pory"

# 425 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 426 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 427 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 428 "data/maps/MtChimney/scripts.pory"
	end
# 429 "data/maps/MtChimney/scripts.pory"

# 430 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 431 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 432 "data/maps/MtChimney/scripts.pory"
	end
# 433 "data/maps/MtChimney/scripts.pory"

# 434 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 435 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 436 "data/maps/MtChimney/scripts.pory"
	end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 439 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 440 "data/maps/MtChimney/scripts.pory"
	end
# 441 "data/maps/MtChimney/scripts.pory"

# 442 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 443 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 444 "data/maps/MtChimney/scripts.pory"
	end
# 445 "data/maps/MtChimney/scripts.pory"

# 446 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 447 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 448 "data/maps/MtChimney/scripts.pory"
	end
# 449 "data/maps/MtChimney/scripts.pory"

# 450 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 451 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 452 "data/maps/MtChimney/scripts.pory"
	end
# 453 "data/maps/MtChimney/scripts.pory"

# 454 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 455 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 456 "data/maps/MtChimney/scripts.pory"
	end
# 457 "data/maps/MtChimney/scripts.pory"

# 458 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 459 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 460 "data/maps/MtChimney/scripts.pory"
	end
# 461 "data/maps/MtChimney/scripts.pory"

# 462 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 463 "data/maps/MtChimney/scripts.pory"
	lockall
# 464 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 465 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 466 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 467 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 468 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 469 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 470 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 471 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 472 "data/maps/MtChimney/scripts.pory"
	releaseall
# 473 "data/maps/MtChimney/scripts.pory"
	end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 476 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 477 "data/maps/MtChimney/scripts.pory"
	releaseall
# 478 "data/maps/MtChimney/scripts.pory"
	end
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 481 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 482 "data/maps/MtChimney/scripts.pory"
	releaseall
# 483 "data/maps/MtChimney/scripts.pory"
	end
# 484 "data/maps/MtChimney/scripts.pory"

# 485 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 486 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 487 "data/maps/MtChimney/scripts.pory"
	releaseall
# 488 "data/maps/MtChimney/scripts.pory"
	end
# 489 "data/maps/MtChimney/scripts.pory"

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 491 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 492 "data/maps/MtChimney/scripts.pory"
	end
# 493 "data/maps/MtChimney/scripts.pory"

# 494 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 495 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
# 496 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 497 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
# 498 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 499 "data/maps/MtChimney/scripts.pory"
	release
# 500 "data/maps/MtChimney/scripts.pory"
	end
# 501 "data/maps/MtChimney/scripts.pory"

# 502 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 503 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 504 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 505 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 506 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 507 "data/maps/MtChimney/scripts.pory"
	release
# 508 "data/maps/MtChimney/scripts.pory"
	end
# 509 "data/maps/MtChimney/scripts.pory"

# 510 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 511 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 512 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 513 "data/maps/MtChimney/scripts.pory"
	end
# 514 "data/maps/MtChimney/scripts.pory"

# 515 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 516 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 517 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/MtChimney/scripts.pory"
	end
# 519 "data/maps/MtChimney/scripts.pory"

# 520 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 521 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 522 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/MtChimney/scripts.pory"
	end
# 524 "data/maps/MtChimney/scripts.pory"

# 525 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 526 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 527 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 528 "data/maps/MtChimney/scripts.pory"
	end
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Courtney::
# 531 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_COURTNEY_MT_CHIMNEY, MtChimney_Text_CourtneyIntro, MtChimney_Text_CourtneyDefeat
# 532 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_CourtneyPostBattle, MSGBOX_AUTOCLOSE
# 533 "data/maps/MtChimney/scripts.pory"
	end
# 534 "data/maps/MtChimney/scripts.pory"

# 535 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 536 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
# 537 "data/maps/MtChimney/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 538 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
# 539 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 540 "data/maps/MtChimney/scripts.pory"
	release
# 541 "data/maps/MtChimney/scripts.pory"
	end
# 542 "data/maps/MtChimney/scripts.pory"

# 543 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 544 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 545 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 546 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 547 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 548 "data/maps/MtChimney/scripts.pory"
	release
# 549 "data/maps/MtChimney/scripts.pory"
	end
# 550 "data/maps/MtChimney/scripts.pory"

# 551 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 552 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 553 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 554 "data/maps/MtChimney/scripts.pory"
	end
# 555 "data/maps/MtChimney/scripts.pory"

# 556 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 557 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 558 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 559 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 560 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 561 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 562 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 563 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 564 "data/maps/MtChimney/scripts.pory"

# 565 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 566 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 567 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 568 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 569 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 570 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 571 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 572 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 573 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 574 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 575 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 576 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 577 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 578 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 579 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 580 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 581 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 582 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 583 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 584 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 585 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 586 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 587 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 588 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 589 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 590 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 591 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 594 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 598 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 601 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 602 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 603 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 605 "data/maps/MtChimney/scripts.pory"

# 606 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 607 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 612 "data/maps/MtChimney/scripts.pory"

# 613 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 619 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 622 "data/maps/MtChimney/scripts.pory"

# 623 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 624 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyIntro:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "...Ha.\p"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "... ...Analyzing.\p"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "...Hah.$"
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyDefeat:
# 646 "data/maps/MtChimney/scripts.pory"
	.string "...Funny.$"
# 647 "data/maps/MtChimney/scripts.pory"

# 648 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_CourtneyPostBattle:
# 649 "data/maps/MtChimney/scripts.pory"
	.string "... ...Change...the world.$"
# 650 "data/maps/MtChimney/scripts.pory"

# 651 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 652 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 657 "data/maps/MtChimney/scripts.pory"

# 658 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 659 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 660 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 662 "data/maps/MtChimney/scripts.pory"

# 663 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 664 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 668 "data/maps/MtChimney/scripts.pory"

# 669 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 670 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 672 "data/maps/MtChimney/scripts.pory"

# 673 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 674 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 675 "data/maps/MtChimney/scripts.pory"

# 676 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 677 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 678 "data/maps/MtChimney/scripts.pory"

# 679 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 680 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 688 "data/maps/MtChimney/scripts.pory"

# 689 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 690 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 692 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 697 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 706 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 707 "data/maps/MtChimney/scripts.pory"

# 708 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 709 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 715 "data/maps/MtChimney/scripts.pory"

# 716 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 717 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 721 "data/maps/MtChimney/scripts.pory"

# 722 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 723 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 724 "data/maps/MtChimney/scripts.pory"

# 725 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 726 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 727 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 728 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 729 "data/maps/MtChimney/scripts.pory"

# 730 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 732 "data/maps/MtChimney/scripts.pory"

# 733 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 734 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 735 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 736 "data/maps/MtChimney/scripts.pory"

# 737 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 738 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 739 "data/maps/MtChimney/scripts.pory"

# 740 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 741 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 749 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 750 "data/maps/MtChimney/scripts.pory"

# 751 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 752 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 753 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 756 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 758 "data/maps/MtChimney/scripts.pory"

# 759 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 760 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 766 "data/maps/MtChimney/scripts.pory"

# 767 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 768 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 775 "data/maps/MtChimney/scripts.pory"

# 776 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 777 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "myself an EXPERT now, can I?$"
# 779 "data/maps/MtChimney/scripts.pory"

# 780 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 783 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 784 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 785 "data/maps/MtChimney/scripts.pory"

# 786 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 787 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 794 "data/maps/MtChimney/scripts.pory"

# 795 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 796 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 798 "data/maps/MtChimney/scripts.pory"

# 799 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 800 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 809 "data/maps/MtChimney/scripts.pory"

# 810 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 811 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 828 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 829 "data/maps/MtChimney/scripts.pory"

# 830 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 832 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 833 "data/maps/MtChimney/scripts.pory"

# 834 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 835 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 836 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 853 "data/maps/MtChimney/scripts.pory"

# 854 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 855 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 856 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"
