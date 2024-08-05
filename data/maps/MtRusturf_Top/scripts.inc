MtRusturf_Top_MapScripts::
# 6 "data/maps/MtRusturf_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtRusturf_Top_OnTransition
# 7 "data/maps/MtRusturf_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtRusturf_Top_OnResume
	.byte 0


MtRusturf_Top_OnTransition::
# 11 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 12 "data/maps/MtRusturf_Top/scripts.pory"
	call_if_set FLAG_CAUGHT_ARCEUS, MtRusturf_Top_EventScript_HideArceus
# 13 "data/maps/MtRusturf_Top/scripts.pory"
	call_if_unset FLAG_CAUGHT_ARCEUS, MtRusturf_Top_EventScript_TryShowArceus
	end


MtRusturf_Top_EventScript_HideArceus::
# 18 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_HIDE_ARCEUS
	return


MtRusturf_Top_EventScript_TryShowArceus::
# 24 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/MtRusturf_Top/scripts.pory"
	goto_if_set FLAG_DEFEATED_ARCEUS, Common_EventScript_NopReturn
# 26 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/MtRusturf_Top/scripts.pory"
	clearflag FLAG_HIDE_ARCEUS
	return


MtRusturf_Top_OnResume::
# 32 "data/maps/MtRusturf_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtRusturf_Top_EventScript_TryRemoveArceus
	end


MtRusturf_Top_EventScript_TryRemoveArceus::
# 37 "data/maps/MtRusturf_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 38 "data/maps/MtRusturf_Top/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 39 "data/maps/MtRusturf_Top/scripts.pory"
	removeobject 3
	return


MtRusturf_Top_EventScript_Arceus::
# 44 "data/maps/MtRusturf_Top/scripts.pory"
	lockall
# 45 "data/maps/MtRusturf_Top/scripts.pory"
	fadenewbgm MUS_DP_HALL_OF_ORIGIN
# 46 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 47 "data/maps/MtRusturf_Top/scripts.pory"
	special SpawnCameraObject
# 48 "data/maps/MtRusturf_Top/scripts.pory"
	applymovement 3, MtRusturf_Top_Movement_ArceusAppear
# 49 "data/maps/MtRusturf_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtRusturf_Top_Movement_CameraPanUp
# 50 "data/maps/MtRusturf_Top/scripts.pory"
	waitmovement 0
# 51 "data/maps/MtRusturf_Top/scripts.pory"
	delay 50
# 52 "data/maps/MtRusturf_Top/scripts.pory"
	setweather WEATHER_NONE
# 53 "data/maps/MtRusturf_Top/scripts.pory"
	doweather
# 54 "data/maps/MtRusturf_Top/scripts.pory"
	waitse
# 55 "data/maps/MtRusturf_Top/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 56 "data/maps/MtRusturf_Top/scripts.pory"
	delay 30
# 57 "data/maps/MtRusturf_Top/scripts.pory"
	waitmoncry
# 58 "data/maps/MtRusturf_Top/scripts.pory"
	delay 60
# 59 "data/maps/MtRusturf_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MtRusturf_Top_Movement_CameraPanDown
# 60 "data/maps/MtRusturf_Top/scripts.pory"
	applymovement 3, MtRusturf_Top_Movement_ArceusApproach
# 61 "data/maps/MtRusturf_Top/scripts.pory"
	waitmovement 0
# 62 "data/maps/MtRusturf_Top/scripts.pory"
	special RemoveCameraObject
# 63 "data/maps/MtRusturf_Top/scripts.pory"
	setwildbattle SPECIES_ARCEUS, 100
# 64 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 65 "data/maps/MtRusturf_Top/scripts.pory"
	dowildbattle
# 66 "data/maps/MtRusturf_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_CAUGHT_ARCEUS
# 68 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_LAST_TALKED, 3
# 69 "data/maps/MtRusturf_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 70 "data/maps/MtRusturf_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtRusturf_Top_EventScript_DefeatedArceus
# 71 "data/maps/MtRusturf_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtRusturf_Top_EventScript_RanFromArceus
# 72 "data/maps/MtRusturf_Top/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtRusturf_Top_EventScript_RanFromArceus
# 73 "data/maps/MtRusturf_Top/scripts.pory"
	releaseall
	end


MtRusturf_Top_EventScript_DefeatedArceus::
# 78 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_DEFEATED_ARCEUS
# 79 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARCEUS
# 80 "data/maps/MtRusturf_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end


MtRusturf_Top_EventScript_RanFromArceus::
# 85 "data/maps/MtRusturf_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARCEUS
# 86 "data/maps/MtRusturf_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
	end


MtRusturf_Top_EventScript_Blayze::
# 91 "data/maps/MtRusturf_Top/scripts.pory"
	fadenewbgm MUS_NONE
# 92 "data/maps/MtRusturf_Top/scripts.pory"
	lock
# 93 "data/maps/MtRusturf_Top/scripts.pory"
	delay 180
# 94 "data/maps/MtRusturf_Top/scripts.pory"
	faceplayer
# 95 "data/maps/MtRusturf_Top/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 96 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_Blayze_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/MtRusturf_Top/scripts.pory"
	trainerbattle_no_intro TRAINER_BLAYZE, MtRusturf_Top_Text_BlayzeDefeatOne
# 98 "data/maps/MtRusturf_Top/scripts.pory"
	goto MtRusturf_Top_EventScript_BlayzeRematch
	end


MtRusturf_Top_EventScript_BlayzeRematch::
# 103 "data/maps/MtRusturf_Top/scripts.pory"
	playbgm MUS_DP_CATASTROPHE, FALSE
# 104 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_BlayzeRematch_Text_0, MSGBOX_DEFAULT
# 106 "data/maps/MtRusturf_Top/scripts.pory"
	playmoncry SPECIES_POLITOED, CRY_MODE_NORMAL
# 107 "data/maps/MtRusturf_Top/scripts.pory"
	delay 40
# 108 "data/maps/MtRusturf_Top/scripts.pory"
	waitmoncry
# 109 "data/maps/MtRusturf_Top/scripts.pory"
	setweather WEATHER_RAIN
# 110 "data/maps/MtRusturf_Top/scripts.pory"
	doweather
# 111 "data/maps/MtRusturf_Top/scripts.pory"
	delay 240
# 112 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_BlayzeRematch_Text_1, MSGBOX_DEFAULT
# 113 "data/maps/MtRusturf_Top/scripts.pory"
	trainerbattle_no_intro TRAINER_BLAYZE_1, MtRusturf_Top_Text_BlayzeDefeatTwo
# 114 "data/maps/MtRusturf_Top/scripts.pory"
	fadedefaultbgm
# 115 "data/maps/MtRusturf_Top/scripts.pory"
	setweather WEATHER_NONE
# 116 "data/maps/MtRusturf_Top/scripts.pory"
	doweather
# 117 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_BlayzeRematch_Text_2, MSGBOX_DEFAULT
# 118 "data/maps/MtRusturf_Top/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 119 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_BlayzeRematch_Text_3, MSGBOX_DEFAULT
# 120 "data/maps/MtRusturf_Top/scripts.pory"
	playmoncry SPECIES_POLITOED, CRY_MODE_NORMAL
# 121 "data/maps/MtRusturf_Top/scripts.pory"
	msgbox MtRusturf_Top_EventScript_BlayzeRematch_Text_4, MSGBOX_DEFAULT
# 122 "data/maps/MtRusturf_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/MtRusturf_Top/scripts.pory"
	removeobject 1
# 124 "data/maps/MtRusturf_Top/scripts.pory"
	removeobject 2
# 125 "data/maps/MtRusturf_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 126 "data/maps/MtRusturf_Top/scripts.pory"
	setflag FLAG_DEFEATED_BLAYZE
# 127 "data/maps/MtRusturf_Top/scripts.pory"
	release
	end


MtRusturf_Top_Movement_CameraPanUp::
# 132 "data/maps/MtRusturf_Top/scripts.pory"
	walk_up
# 133 "data/maps/MtRusturf_Top/scripts.pory"
	walk_up
# 134 "data/maps/MtRusturf_Top/scripts.pory"
	walk_up
# 135 "data/maps/MtRusturf_Top/scripts.pory"
	step_end
	return


MtRusturf_Top_Movement_CameraPanDown::
# 139 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 140 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 141 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 142 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 143 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 144 "data/maps/MtRusturf_Top/scripts.pory"
	step_end
	return


MtRusturf_Top_Movement_ArceusApproach::
# 148 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 149 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 150 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 151 "data/maps/MtRusturf_Top/scripts.pory"
	walk_down
# 152 "data/maps/MtRusturf_Top/scripts.pory"
	walk_in_place_down
# 153 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 154 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 155 "data/maps/MtRusturf_Top/scripts.pory"
	step_end
	return


MtRusturf_Top_Movement_ArceusAppear::
# 159 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 160 "data/maps/MtRusturf_Top/scripts.pory"
	delay_16
# 161 "data/maps/MtRusturf_Top/scripts.pory"
	walk_in_place_down
# 162 "data/maps/MtRusturf_Top/scripts.pory"
	walk_in_place_down
# 163 "data/maps/MtRusturf_Top/scripts.pory"
	walk_in_place_down
# 164 "data/maps/MtRusturf_Top/scripts.pory"
	walk_in_place_down
# 165 "data/maps/MtRusturf_Top/scripts.pory"
	step_end
	return


MtRusturf_Top_EventScript_Blayze_Text_0:
# 96 "data/maps/MtRusturf_Top/scripts.pory"
	.string "BLAYZE: I knew you would come here. Let\n"
	.string "me introduce myself. I'm the creator of\l"
	.string "this ROM hack. I'm the one who made you\l"
	.string "go through many challenges in this\l"
	.string "region. You must think you don't\l"
	.string "understand what I'm talking about, and\l"
	.string "why I'm standing here, at the top of a\l"
	.string "mountain, with my POKéMON, doing\l"
	.string "nothing but to stare at the horizon.\l"
	.string "Well, it's because I waited for you, just\l"
	.string "for one thing... To battle you, and see\l"
	.string "how this travel made you strong. Just\l"
	.string "as a warning though, I won't hold back.\l"
	.string "Show me what you've got!$"

MtRusturf_Top_EventScript_BlayzeRematch_Text_0:
# 104 "data/maps/MtRusturf_Top/scripts.pory"
	.string "That was a good match, very well done!\n"
	.string "But... You haven't seen the best of me...\l"
	.string "prepare for a rematch here and now!\l"
	.string "Politoed, can you set the rain for me,\l"
	.string "please?$"

MtRusturf_Top_EventScript_BlayzeRematch_Text_1:
# 112 "data/maps/MtRusturf_Top/scripts.pory"
	.string "Thank you, Politoed! Now, let's fight!$"

MtRusturf_Top_EventScript_BlayzeRematch_Text_2:
# 117 "data/maps/MtRusturf_Top/scripts.pory"
	.string "The way you battle... That was really\n"
	.string "insane! I'm glad to see how this travel\l"
	.string "made you this strong! As a proof of\l"
	.string "your victory and your strength, You can\l"
	.string "battle the almighty POKéMON, ARCEUS.\l"
	.string "Here, if you want to catch him, take\l"
	.string "this.$"

MtRusturf_Top_EventScript_BlayzeRematch_Text_3:
# 119 "data/maps/MtRusturf_Top/scripts.pory"
	.string "I feel like he doesn't have to travel\n"
	.string "with me anymore... So it's up to you to\l"
	.string "either leave him alone or bring him with\l"
	.string "you. I hope we'll meet again someday!$"

MtRusturf_Top_EventScript_BlayzeRematch_Text_4:
# 121 "data/maps/MtRusturf_Top/scripts.pory"
	.string "Toeeeeed!$"

MtRusturf_Top_Text_BlayzeDefeatOne::
# 168 "data/maps/MtRusturf_Top/scripts.pory"
	.string "That was a good fight!$"

MtRusturf_Top_Text_BlayzeDefeatTwo::
# 172 "data/maps/MtRusturf_Top/scripts.pory"
	.string "That's... No... That's really insane!$"
