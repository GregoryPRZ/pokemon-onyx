# 1 "data/maps/Route128/scripts.pory"

# 2 "data/maps/Route128/scripts.pory"
.set LOCALID_STEVEN, 3
# 3 "data/maps/Route128/scripts.pory"
.set LOCALID_ARCHIE, 4
# 4 "data/maps/Route128/scripts.pory"
.set LOCALID_MAXIE, 5
# 5 "data/maps/Route128/scripts.pory"

# 6 "data/maps/Route128/scripts.pory"
Route128_MapScripts::
# 7 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route128_OnTransition
# 8 "data/maps/Route128/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route128_OnFrame
# 9 "data/maps/Route128/scripts.pory"
	.byte 0
# 10 "data/maps/Route128/scripts.pory"

# 11 "data/maps/Route128/scripts.pory"
Route128_OnTransition:
# 12 "data/maps/Route128/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 13 "data/maps/Route128/scripts.pory"
	end
# 14 "data/maps/Route128/scripts.pory"

# 15 "data/maps/Route128/scripts.pory"
Route128_OnFrame:
# 16 "data/maps/Route128/scripts.pory"
	map_script_2 VAR_ROUTE128_STATE, 1, Route128_EventScript_KyogreAwakenedScene
# 17 "data/maps/Route128/scripts.pory"
	.2byte 0
# 18 "data/maps/Route128/scripts.pory"

# 19 "data/maps/Route128/scripts.pory"
Route128_EventScript_KyogreAwakenedScene::
# 20 "data/maps/Route128/scripts.pory"
	lockall
# 21 "data/maps/Route128/scripts.pory"
	delay 20
# 22 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieLookAround
# 23 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 25 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieWhatHappened, MSGBOX_DEFAULT
# 26 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 27 "data/maps/Route128/scripts.pory"
	closemessage
# 28 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieBackUp
# 29 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 31 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_ArchieIOnlyWanted, MSGBOX_DEFAULT
# 32 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 33 "data/maps/Route128/scripts.pory"
	closemessage
# 34 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachArchie
# 35 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterUp
# 37 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 39 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieDoYouUnderstandNow, MSGBOX_DEFAULT
# 40 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 41 "data/maps/Route128/scripts.pory"
	closemessage
# 42 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieApproachPlayer
# 43 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 45 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 47 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieResposibilityFallsToArchieAndMe, MSGBOX_DEFAULT
# 48 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 49 "data/maps/Route128/scripts.pory"
	closemessage
# 50 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieRunLeft
# 51 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 52 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieWalkLeft
# 53 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 55 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_MaxieThisDefiesBelief, MSGBOX_DEFAULT
# 56 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 57 "data/maps/Route128/scripts.pory"
	closemessage
# 58 "data/maps/Route128/scripts.pory"
	delay 40
# 59 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_MAXIE, Route128_Movement_MaxieExit
# 60 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_ARCHIE, Route128_Movement_ArchieExit
# 61 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_MAXIE
# 63 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_ARCHIE
# 64 "data/maps/Route128/scripts.pory"
	delay 100
# 65 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 66 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 67 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 68 "data/maps/Route128/scripts.pory"
	addobject LOCALID_STEVEN
# 69 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenApproachPlayer
# 70 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 72 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 74 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWhatIsHappening, MSGBOX_DEFAULT
# 75 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 76 "data/maps/Route128/scripts.pory"
	closemessage
# 77 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Route128_Movement_StevenWalkUp
# 78 "data/maps/Route128/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 81 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenWholeWorldWillDrown, MSGBOX_DEFAULT
# 82 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 83 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 84 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route128/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 86 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_StevenImGoingToSootopolis, MSGBOX_DEFAULT
# 87 "data/maps/Route128/scripts.pory"
	removefieldmugshot
# 88 "data/maps/Route128/scripts.pory"
	closemessage
# 89 "data/maps/Route128/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 90 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route128/scripts.pory"
	delay 50
# 92 "data/maps/Route128/scripts.pory"
	setfieldeffectargument 0, 1
# 93 "data/maps/Route128/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 94 "data/maps/Route128/scripts.pory"
	delay 15
# 95 "data/maps/Route128/scripts.pory"
	removeobject LOCALID_STEVEN
# 96 "data/maps/Route128/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 97 "data/maps/Route128/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 98 "data/maps/Route128/scripts.pory"
	setvar VAR_ROUTE128_STATE, 2
# 99 "data/maps/Route128/scripts.pory"
	releaseall
# 100 "data/maps/Route128/scripts.pory"
	end
# 101 "data/maps/Route128/scripts.pory"

# 102 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused1:
# 103 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 104 "data/maps/Route128/scripts.pory"
	step_end
# 105 "data/maps/Route128/scripts.pory"

# 106 "data/maps/Route128/scripts.pory"
Route128_Movement_Unused2:
# 107 "data/maps/Route128/scripts.pory"
	walk_left
# 108 "data/maps/Route128/scripts.pory"
	walk_left
# 109 "data/maps/Route128/scripts.pory"
	walk_left
# 110 "data/maps/Route128/scripts.pory"
	walk_left
# 111 "data/maps/Route128/scripts.pory"
	walk_left
# 112 "data/maps/Route128/scripts.pory"
	walk_left
# 113 "data/maps/Route128/scripts.pory"
	walk_up
# 114 "data/maps/Route128/scripts.pory"
	walk_up
# 115 "data/maps/Route128/scripts.pory"
	walk_up
# 116 "data/maps/Route128/scripts.pory"
	walk_up
# 117 "data/maps/Route128/scripts.pory"
	walk_up
# 118 "data/maps/Route128/scripts.pory"
	walk_up
# 119 "data/maps/Route128/scripts.pory"
	step_end
# 120 "data/maps/Route128/scripts.pory"

# 121 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenWalkUp:
# 122 "data/maps/Route128/scripts.pory"
	walk_up
# 123 "data/maps/Route128/scripts.pory"
	step_end
# 124 "data/maps/Route128/scripts.pory"

# 125 "data/maps/Route128/scripts.pory"
Route128_Movement_StevenApproachPlayer:
# 126 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 127 "data/maps/Route128/scripts.pory"
	step_end
# 128 "data/maps/Route128/scripts.pory"

# 129 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieLookAround:
# 130 "data/maps/Route128/scripts.pory"
	walk_fast_down
# 131 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/Route128/scripts.pory"
	delay_16
# 133 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 134 "data/maps/Route128/scripts.pory"
	delay_16
# 135 "data/maps/Route128/scripts.pory"
	delay_16
# 136 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 137 "data/maps/Route128/scripts.pory"
	step_end
# 138 "data/maps/Route128/scripts.pory"

# 139 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieBackUp:
# 140 "data/maps/Route128/scripts.pory"
	lock_facing_direction
# 141 "data/maps/Route128/scripts.pory"
	walk_slow_up
# 142 "data/maps/Route128/scripts.pory"
	delay_16
# 143 "data/maps/Route128/scripts.pory"
	unlock_facing_direction
# 144 "data/maps/Route128/scripts.pory"
	step_end
# 145 "data/maps/Route128/scripts.pory"

# 146 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieRunLeft:
# 147 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 148 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 149 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 150 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_right
# 151 "data/maps/Route128/scripts.pory"
	step_end
# 152 "data/maps/Route128/scripts.pory"

# 153 "data/maps/Route128/scripts.pory"
Route128_Movement_ArchieExit:
# 154 "data/maps/Route128/scripts.pory"
	delay_16
# 155 "data/maps/Route128/scripts.pory"
	delay_16
# 156 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 158 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 159 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 160 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 161 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 162 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 163 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 164 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 165 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 166 "data/maps/Route128/scripts.pory"
	step_end
# 167 "data/maps/Route128/scripts.pory"

# 168 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieWalkLeft:
# 169 "data/maps/Route128/scripts.pory"
	walk_left
# 170 "data/maps/Route128/scripts.pory"
	walk_left
# 171 "data/maps/Route128/scripts.pory"
	delay_8
# 172 "data/maps/Route128/scripts.pory"
	delay_4
# 173 "data/maps/Route128/scripts.pory"
	step_end
# 174 "data/maps/Route128/scripts.pory"

# 175 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachArchie:
# 176 "data/maps/Route128/scripts.pory"
	walk_left
# 177 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 178 "data/maps/Route128/scripts.pory"
	step_end
# 179 "data/maps/Route128/scripts.pory"

# 180 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieExit:
# 181 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route128/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 185 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 186 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 187 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 188 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 189 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 190 "data/maps/Route128/scripts.pory"
	walk_fast_up
# 191 "data/maps/Route128/scripts.pory"
	step_end
# 192 "data/maps/Route128/scripts.pory"

# 193 "data/maps/Route128/scripts.pory"
Route128_Movement_MaxieApproachPlayer:
# 194 "data/maps/Route128/scripts.pory"
	walk_right
# 195 "data/maps/Route128/scripts.pory"
	walk_in_place_faster_down
# 196 "data/maps/Route128/scripts.pory"
	step_end
# 197 "data/maps/Route128/scripts.pory"

# 198 "data/maps/Route128/scripts.pory"
Route128_EventScript_Isaiah::
# 199 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ISAIAH_1, Route128_Text_IsaiahIntro, Route128_Text_IsaiahDefeat, Route128_EventScript_RegisterIsaiah
# 200 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 201 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchIsaiah
# 202 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostBattle, MSGBOX_DEFAULT
# 203 "data/maps/Route128/scripts.pory"
	release
# 204 "data/maps/Route128/scripts.pory"
	end
# 205 "data/maps/Route128/scripts.pory"

# 206 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterIsaiah::
# 207 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 208 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahRegister, MSGBOX_DEFAULT
# 210 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_ISAIAH_1
# 211 "data/maps/Route128/scripts.pory"
	release
# 212 "data/maps/Route128/scripts.pory"
	end
# 213 "data/maps/Route128/scripts.pory"

# 214 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchIsaiah::
# 215 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_ISAIAH_1, Route128_Text_IsaiahRematchIntro, Route128_Text_IsaiahRematchDefeat
# 216 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_IsaiahPostRematch, MSGBOX_AUTOCLOSE
# 217 "data/maps/Route128/scripts.pory"
	end
# 218 "data/maps/Route128/scripts.pory"

# 219 "data/maps/Route128/scripts.pory"
Route128_EventScript_Katelyn::
# 220 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_KATELYN_1, Route128_Text_KatelynIntro, Route128_Text_KatelynDefeat, Route128_EventScript_RegisterKatelyn
# 221 "data/maps/Route128/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 222 "data/maps/Route128/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route128_EventScript_RematchKatelyn
# 223 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostBattle, MSGBOX_DEFAULT
# 224 "data/maps/Route128/scripts.pory"
	release
# 225 "data/maps/Route128/scripts.pory"
	end
# 226 "data/maps/Route128/scripts.pory"

# 227 "data/maps/Route128/scripts.pory"
Route128_EventScript_RegisterKatelyn::
# 228 "data/maps/Route128/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 229 "data/maps/Route128/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynRegister, MSGBOX_DEFAULT
# 231 "data/maps/Route128/scripts.pory"
	register_matchcall TRAINER_KATELYN_1
# 232 "data/maps/Route128/scripts.pory"
	release
# 233 "data/maps/Route128/scripts.pory"
	end
# 234 "data/maps/Route128/scripts.pory"

# 235 "data/maps/Route128/scripts.pory"
Route128_EventScript_RematchKatelyn::
# 236 "data/maps/Route128/scripts.pory"
	trainerbattle_rematch TRAINER_KATELYN_1, Route128_Text_KatelynRematchIntro, Route128_Text_KatelynRematchDefeat
# 237 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_KatelynPostRematch, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route128/scripts.pory"
	end
# 239 "data/maps/Route128/scripts.pory"

# 240 "data/maps/Route128/scripts.pory"
Route128_EventScript_Alexa::
# 241 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_ALEXA, Route128_Text_AlexaIntro, Route128_Text_AlexaDefeat
# 242 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route128/scripts.pory"
	end
# 244 "data/maps/Route128/scripts.pory"

# 245 "data/maps/Route128/scripts.pory"
Route128_EventScript_Ruben::
# 246 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_RUBEN, Route128_Text_RubenIntro, Route128_Text_RubenDefeat
# 247 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_RubenPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route128/scripts.pory"
	end
# 249 "data/maps/Route128/scripts.pory"

# 250 "data/maps/Route128/scripts.pory"
Route128_EventScript_Wayne::
# 251 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_WAYNE, Route128_Text_WayneIntro, Route128_Text_WayneDefeat
# 252 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_WaynePostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route128/scripts.pory"
	end
# 254 "data/maps/Route128/scripts.pory"

# 255 "data/maps/Route128/scripts.pory"
Route128_EventScript_Harrison::
# 256 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_HARRISON, Route128_Text_HarrisonIntro, Route128_Text_HarrisonDefeat
# 257 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_HarrisonPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route128/scripts.pory"
	end
# 259 "data/maps/Route128/scripts.pory"

# 260 "data/maps/Route128/scripts.pory"
Route128_EventScript_Carlee::
# 261 "data/maps/Route128/scripts.pory"
	trainerbattle_single TRAINER_CARLEE, Route128_Text_CarleeIntro, Route128_Text_CarleeDefeat
# 262 "data/maps/Route128/scripts.pory"
	msgbox Route128_Text_CarleePostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route128/scripts.pory"
	end
# 264 "data/maps/Route128/scripts.pory"

# 265 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieWhatHappened:
# 266 "data/maps/Route128/scripts.pory"
	.string "ARCHIE: What happened…\n"
# 267 "data/maps/Route128/scripts.pory"
	.string "What is this wretched scene…\p"
# 268 "data/maps/Route128/scripts.pory"
	.string "Did I…make a horrible mistake?$"
# 269 "data/maps/Route128/scripts.pory"

# 270 "data/maps/Route128/scripts.pory"
Route128_Text_ArchieIOnlyWanted:
# 271 "data/maps/Route128/scripts.pory"
	.string "I…\n"
# 272 "data/maps/Route128/scripts.pory"
	.string "I only wanted…$"
# 273 "data/maps/Route128/scripts.pory"

# 274 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieDoYouUnderstandNow:
# 275 "data/maps/Route128/scripts.pory"
	.string "MAXIE: Do you understand now,\n"
# 276 "data/maps/Route128/scripts.pory"
	.string "ARCHIE?\p"
# 277 "data/maps/Route128/scripts.pory"
	.string "Do you finally see how disastrous\n"
# 278 "data/maps/Route128/scripts.pory"
	.string "your dream turned out to be?\p"
# 279 "data/maps/Route128/scripts.pory"
	.string "We have to hurry! We have to do\n"
# 280 "data/maps/Route128/scripts.pory"
	.string "something before the situation goes\l"
# 281 "data/maps/Route128/scripts.pory"
	.string "completely out of control!$"
# 282 "data/maps/Route128/scripts.pory"

# 283 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieResposibilityFallsToArchieAndMe:
# 284 "data/maps/Route128/scripts.pory"
	.string "MAXIE: {PLAYER}, don't say anything.\p"
# 285 "data/maps/Route128/scripts.pory"
	.string "I know that I have no right to be\n"
# 286 "data/maps/Route128/scripts.pory"
	.string "critical of ARCHIE…\p"
# 287 "data/maps/Route128/scripts.pory"
	.string "But the way things are now, I doubt\n"
# 288 "data/maps/Route128/scripts.pory"
	.string "that we humans will be capable of\l"
# 289 "data/maps/Route128/scripts.pory"
	.string "doing anything about it.\p"
# 290 "data/maps/Route128/scripts.pory"
	.string "But neither can we stand by and\n"
# 291 "data/maps/Route128/scripts.pory"
	.string "just watch helplessly.\p"
# 292 "data/maps/Route128/scripts.pory"
	.string "The responsibility for putting an end\n"
# 293 "data/maps/Route128/scripts.pory"
	.string "to this falls to ARCHIE and me…$"
# 294 "data/maps/Route128/scripts.pory"

# 295 "data/maps/Route128/scripts.pory"
Route128_Text_MaxieThisDefiesBelief:
# 296 "data/maps/Route128/scripts.pory"
	.string "MAXIE: This defies belief…\p"
# 297 "data/maps/Route128/scripts.pory"
	.string "Those super-ancient POKéMON…\p"
# 298 "data/maps/Route128/scripts.pory"
	.string "Their power is unbelievable.\n"
# 299 "data/maps/Route128/scripts.pory"
	.string "They've upset the balance of nature…$"
# 300 "data/maps/Route128/scripts.pory"

# 301 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWhatIsHappening:
# 302 "data/maps/Route128/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 303 "data/maps/Route128/scripts.pory"
	.string "What is happening?$"
# 304 "data/maps/Route128/scripts.pory"

# 305 "data/maps/Route128/scripts.pory"
Route128_Text_StevenWholeWorldWillDrown:
# 306 "data/maps/Route128/scripts.pory"
	.string "This is terrible…\p"
# 307 "data/maps/Route128/scripts.pory"
	.string "After the scorching heat wave ended,\n"
# 308 "data/maps/Route128/scripts.pory"
	.string "this deluge began.\p"
# 309 "data/maps/Route128/scripts.pory"
	.string "If this doesn't stop, all of HOENN…\n"
# 310 "data/maps/Route128/scripts.pory"
	.string "No, the whole world will drown.\p"
# 311 "data/maps/Route128/scripts.pory"
	.string "This huge rain cloud is spreading\n"
# 312 "data/maps/Route128/scripts.pory"
	.string "from above SOOTOPOLIS…\p"
# 313 "data/maps/Route128/scripts.pory"
	.string "What in the world is taking place there?\p"
# 314 "data/maps/Route128/scripts.pory"
	.string "There's no point arguing here…\n"
# 315 "data/maps/Route128/scripts.pory"
	.string "SOOTOPOLIS might provide answers…$"
# 316 "data/maps/Route128/scripts.pory"

# 317 "data/maps/Route128/scripts.pory"
Route128_Text_StevenImGoingToSootopolis:
# 318 "data/maps/Route128/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 319 "data/maps/Route128/scripts.pory"
	.string "I don't know what you intend to do,\l"
# 320 "data/maps/Route128/scripts.pory"
	.string "but don't do anything reckless.\p"
# 321 "data/maps/Route128/scripts.pory"
	.string "Okay.\n"
# 322 "data/maps/Route128/scripts.pory"
	.string "I'm going to SOOTOPOLIS.$"
