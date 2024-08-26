# 1 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_RICH_BOY, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GENTLEMAN, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_SCIENTIST, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_STEVEN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Grunt names numbered like their Trainer values (which are for the full Space Center)
# 7 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_6, 5
# 8 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_5, 6
# 9 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_GRUNT_7, 7
# 10 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_TABITHA, 8
# 11 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
.set LOCALID_MAXIE, 9
# 12 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 13 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_MapScripts::
# 14 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_2F_OnTransition
# 15 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_SpaceCenter_2F_OnFrame
# 16 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.byte 0
# 17 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 18 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnTransition:
# 19 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians
# 20 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_MOSSDEEP_SPACE_CENTER_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts
# 21 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 23 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveCivilians::
# 24 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 25 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 3
# 26 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 3, 2
# 28 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 1, 3
# 30 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_RIGHT
# 31 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 32 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 33 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MoveDefeatedGrunts::
# 34 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_6, 11, 2
# 35 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_7, 15, 2
# 36 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_GRUNT_5, 13, 4
# 37 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 38 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 39 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_OnFrame:
# 40 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	map_script_2 VAR_MOSSDEEP_SPACE_CENTER_STATE, 1, MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts
# 41 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.2byte 0
# 42 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 43 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ThreeMagmaGrunts::
# 44 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_PIN
# 45 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 46 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 47 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 48 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 49 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn, MSGBOX_YESNO
# 50 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 51 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_GoodAnswer, MSGBOX_DEFAULT
# 52 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 53 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_SpaceCenter_2F_Movement_PlayerExit
# 54 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	warp MAP_MOSSDEEP_CITY_SPACE_CENTER_1F, 13, 1
# 56 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 57 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 58 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 59 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 60 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_PlayerExit:
# 61 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_up
# 62 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 63 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 64 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts::
# 65 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro, MSGBOX_DEFAULT
# 66 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_5, MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat
# 67 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_5, MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated
# 68 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 69 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 70 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 71 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro, MSGBOX_DEFAULT
# 72 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_6, MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat
# 73 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_6, MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated
# 74 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 76 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro, MSGBOX_DEFAULT
# 78 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_7, MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat
# 79 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_GRUNT_7, MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated
# 80 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 81 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 2
# 82 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_6
# 83 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_7
# 84 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT_5
# 85 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 86 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 87 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 88 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt6Defeated:
# 89 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 90 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_left
# 91 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 92 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 93 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 94 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt5Defeated:
# 95 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 96 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_down
# 97 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 98 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 99 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 100 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_Grunt7Defeated:
# 101 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 102 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_right
# 103 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 104 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 105 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 106 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Scientist::
# 107 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 108 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 109 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 110 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 111 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal
# 112 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma
# 113 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 114 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 115 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistNormal::
# 116 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets, MSGBOX_DEFAULT
# 117 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 118 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 119 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 120 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ScientistMagma::
# 121 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel, MSGBOX_DEFAULT
# 122 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 123 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 124 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 125 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Gentleman::
# 126 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 127 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 128 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 129 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 130 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal
# 131 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma
# 132 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 133 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 134 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanNormal::
# 135 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut, MSGBOX_DEFAULT
# 136 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 137 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 138 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 139 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_GentlemanMagma::
# 140 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis, MSGBOX_DEFAULT
# 141 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 142 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 143 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 144 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoy::
# 145 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 146 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 147 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 148 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 149 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_lt VAR_MOSSDEEP_CITY_STATE, 2, MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal
# 150 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma
# 151 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 152 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 153 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyNormal::
# 154 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace, MSGBOX_DEFAULT
# 155 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 156 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 157 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 158 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RichBoyMagma::
# 159 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace, MSGBOX_DEFAULT
# 160 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 161 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 162 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 163 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
@ Battle for the below 3 grunts is handled in MossdeepCity_SpaceCenter_2F_EventScript_BattleThreeMagmaGrunts
# 164 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt6::
# 165 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle, MSGBOX_NPC
# 166 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 167 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 168 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt7::
# 169 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle, MSGBOX_NPC
# 170 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 171 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 172 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Grunt5::
# 173 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle, MSGBOX_NPC
# 174 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 175 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 176 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Tabitha::
# 177 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock
# 178 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	faceplayer
# 179 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou, MSGBOX_DEFAULT
# 180 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 181 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 182 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	release
# 183 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 184 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 185 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Maxie::
# 186 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 187 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 188 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere, MSGBOX_DEFAULT
# 189 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 190 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 191 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 192 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 193 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_Steven::
# 194 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 195 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_set FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER, MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 196 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER
# 197 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 198 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel, MSGBOX_DEFAULT
# 199 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 200 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 201 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano, MSGBOX_DEFAULT
# 202 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 203 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 204 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 30
# 205 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	playse SE_NOT_EFFECTIVE
# 206 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 207 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth
# 208 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFight
# 209 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 210 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 211 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 212 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 213 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFightMovementSouth::
# 214 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth
# 215 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 216 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 217 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 218 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 219 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFight:
# 220 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 221 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 222 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_up
# 223 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 224 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 225 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 226 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 227 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_down
# 228 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 229 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 230 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Movement_StevenFightSouth:
# 231 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_left
# 232 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lock_facing_direction
# 233 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 234 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_fast_right
# 235 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	unlock_facing_direction
# 236 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 237 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay_16
# 238 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 239 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	walk_slow_left
# 240 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	face_down
# 241 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	step_end
# 242 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 243 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt::
# 244 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 245 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 246 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 247 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle, MSGBOX_YESNO
# 248 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 249 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle
# 250 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 251 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly, MSGBOX_DEFAULT
# 252 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 253 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 254 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 255 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 256 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 257 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 258 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 259 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_ChoosePartyForMultiBattle::
# 260 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 261 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 262 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SavePlayerParty
# 263 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special ChooseHalfPartyForBattle
# 265 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 266 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto_if_ne VAR_RESULT, 0, MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle
# 267 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special LoadPlayerParty
# 268 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	goto MossdeepCity_SpaceCenter_2F_EventScript_ReadyForBattlePrompt
# 269 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 270 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DoStevenMultiBattle::
# 271 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	multi_2_vs_2 TRAINER_MAXIE_MOSSDEEP, MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand, TRAINER_TABITHA_MOSSDEEP, MossdeepCity_SpaceCenter_Text_TabithaDefeat, PARTNER_STEVEN
# 272 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case 1, MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha
# 274 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 275 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	special SetCB2WhiteOut
# 276 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitstate
# 277 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 278 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_DefeatedMaxieTabitha::
# 279 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 280 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided, MSGBOX_DEFAULT
# 281 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 282 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 283 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 284 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterLeft
# 285 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterDown
# 286 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 287 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 60
# 288 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_WalkInPlaceFasterUp
# 289 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	applymovement LOCALID_TABITHA, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmovement 0
# 291 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	delay 20
# 292 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 293 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp, MSGBOX_DEFAULT
# 294 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 295 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 296 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_CITY_STATE, 3
# 297 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadedefaultbgm
# 298 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 299 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 3
# 300 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
# 301 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
# 302 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
# 303 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_6
# 304 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_7
# 305 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_GRUNT_5
# 306 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_TABITHA
# 307 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_MAXIE
# 308 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_SCIENTIST, 5, 6
# 309 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_SCIENTIST, DIR_SOUTH
# 310 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_GENTLEMAN, 11, 8
# 311 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_GENTLEMAN, DIR_NORTH
# 312 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxy LOCALID_RICH_BOY, 6, 2
# 313 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_RICH_BOY, DIR_NORTH
# 314 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer
# 315 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 316 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 317 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome, MSGBOX_DEFAULT
# 318 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removefieldmugshot
# 319 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 320 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 321 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 322 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 323 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_STEVEN
# 324 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
# 325 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 326 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 1
# 327 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 328 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 329 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 5, 6
# 330 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_WANDER_AROUND
# 331 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	addobject LOCALID_SCIENTIST
# 332 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 333 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#ifdef BUGFIX
# 334 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 335 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
#endif
# 336 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 337 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 338 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayer::
# 339 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	switch VAR_FACING
# 340 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_SOUTH, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth
# 341 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest
# 342 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 343 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 344 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerSouth::
# 345 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_NORTH
# 346 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 347 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_StevenFacePlayerWest::
# 349 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	turnobject LOCALID_STEVEN, DIR_EAST
# 350 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 351 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 352 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_RivalRayquazaCall::
# 353 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	lockall
# 354 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	checkplayergender
# 355 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall
# 356 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall
# 357 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	closemessage
# 358 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	clearflag FLAG_DEFEATED_MAGMA_SPACE_CENTER
# 359 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	releaseall
# 360 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	end
# 361 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 362 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_MayRayquazaCall::
# 363 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_MayRayquazaCall
# 364 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 365 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 366 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 367 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_EventScript_BrendanRayquazaCall::
# 368 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	pokenavcall MatchCall_Text_BrendanRayquazaCall
# 369 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	waitmessage
# 370 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	return
# 371 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 372 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MossdeepIdealForRockets:
# 373 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MOSSDEEP has mainly sunny weather,\n"
# 374 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "and its winds are stable.\p"
# 375 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's an ideal location for launching\n"
# 376 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "rockets.$"
# 377 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 378 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WhyWouldMagmaStealRocketFuel:
# 379 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Why would TEAM MAGMA want to steal\n"
# 380 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "our rocket fuel in the first place?$"
# 381 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 382 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WouldveLikedToBeAstronaut:
# 383 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If only I was a little younger, I would\n"
# 384 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "have liked being an astronaut…\p"
# 385 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "No… It's not too late!\n"
# 386 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I can and will try!$"
# 387 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 388 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MagmaCantGetAwayWithThis:
# 389 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If TEAM MAGMA takes the rocket fuel,\n"
# 390 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I won't be able to go to space!\p"
# 391 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "They can't be allowed to get away\n"
# 392 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "with such an outrage!$"
# 393 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 394 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WishOrdinaryPeopleCouldGoIntoSpace:
# 395 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I wish ordinary people could go into\n"
# 396 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "space one day…$"
# 397 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 398 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_DoesMagmaWantToGoToSpace:
# 399 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "TEAM MAGMA…\n"
# 400 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Do they want to go to space, too?$"
# 401 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 402 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_YoureOutnumberedTakeUsOn:
# 403 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's wrong with you?\p"
# 404 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're outnumbered three to one,\n"
# 405 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "but you still want to take us on?$"
# 406 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 407 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_GoodAnswer:
# 408 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Good answer!\n"
# 409 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what a smart person'll do!$"
# 410 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 411 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Intro:
# 412 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "A reckless go-getter, are you?\n"
# 413 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Okay, I'll go first!$"
# 414 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 415 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5Defeat:
# 416 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost!\n"
# 417 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 418 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 419 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Intro:
# 420 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It's too soon to be relieved!\n"
# 421 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm up next!$"
# 422 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 423 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6Defeat:
# 424 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I lost, too!\n"
# 425 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But!$"
# 426 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 427 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Intro:
# 428 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I bet you want to take a break.\n"
# 429 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "But I'm not about to let you do that!$"
# 430 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 431 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7Defeat:
# 432 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We should've taken a break…\n"
# 433 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "That's what we should've done…$"
# 434 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 435 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt6PostBattle:
# 436 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Three of us here, and look at the sorry\n"
# 437 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "mess we got ourselves into.$"
# 438 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 439 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt7PostBattle:
# 440 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We three losing like this…\n"
# 441 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We look worse than usual by triple!$"
# 442 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 443 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_Grunt5PostBattle:
# 444 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are we being useful to our leader\n"
# 445 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "at all?$"
# 446 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 447 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_WellTakeCareOfYou:
# 448 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Hehehe!\p"
# 449 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We come all the way here to get some\n"
# 450 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel, and we're interfered with again!\p"
# 451 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If you're going to mess with us too,\n"
# 452 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we'll take care of you at the same time!$"
# 453 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 454 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieDontInterfere:
# 455 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Clear out of the way!\n"
# 456 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Don't you dare interfere!$"
# 457 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 458 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenWhyStealRocketFuel:
# 459 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: TEAM MAGMA…\p"
# 460 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "What's the point of stealing rocket\n"
# 461 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "fuel?$"
# 462 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 463 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieUseFuelToEruptVolcano:
# 464 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: Fufufu… Since you're so\n"
# 465 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "curious, you deserve an explanation.\p"
# 466 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We're going to jettison the entire\n"
# 467 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "load into MT. CHIMNEY!\p"
# 468 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "With GROUDON gone, we have no need\n"
# 469 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "for that slag heap of a mountain!\p"
# 470 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "So we'll use the fuel's power to make\n"
# 471 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the volcano erupt!\p"
# 472 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "It will be savage!$"
# 473 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 474 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenAreYouReadyToBattle:
# 475 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}!\n"
# 476 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "You're going to help me?\p"
# 477 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Let's go into battle together!\n"
# 478 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Are you ready?$"
# 479 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 480 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenHurryGetReadyQuickly:
# 481 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Then, hurry!\n"
# 482 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Get ready quickly!$"
# 483 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 484 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_JustWantToExpandLand:
# 485 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "All I want…\n"
# 486 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I just want to expand the land mass…$"
# 487 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 488 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_Text_TabithaDefeat:
# 489 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I'm with our leader…$"
# 490 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 491 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeFailedIsAquaAlsoMisguided:
# 492 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: We failed to make the volcano\n"
# 493 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "erupt…\p"
# 494 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We failed to control GROUDON after\n"
# 495 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "we had awoken it…\p"
# 496 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Is our goal to expand the land\n"
# 497 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "misguided?\p"
# 498 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\n"
# 499 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 500 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If…\n"
# 501 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "If we, TEAM MAGMA, are wrong…\l"
# 502 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "… … … … … …\p"
# 503 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Then might TEAM AQUA's goal to expand\n"
# 504 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "the sea also be equally misguided?$"
# 505 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 506 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_MaxieWeWillGiveUp:
# 507 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "MAXIE: All right…\n"
# 508 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "We will give up on the fuel…\p"
# 509 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "There appear to be more important\n"
# 510 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "matters that I must examine…$"
# 511 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"

# 512 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
MossdeepCity_SpaceCenter_2F_Text_StevenThankYouComeSeeMeAtHome:
# 513 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "STEVEN: Whew, that was too tense.\n"
# 514 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "{PLAYER}{KUN}, thank you.\p"
# 515 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I have something to give you as\n"
# 516 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "thanks for your support.\p"
# 517 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Please come see me at home\n"
# 518 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "after this.\p"
# 519 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "Oh, yes, I don't live in RUSTBORO CITY.\n"
# 520 "data/maps/MossdeepCity_SpaceCenter_2F/scripts.pory"
	.string "I live right here on this island.$"
