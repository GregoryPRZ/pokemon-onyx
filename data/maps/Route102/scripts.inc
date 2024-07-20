# 1 "data/maps/Route102/scripts.pory"

# 2 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 3 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_OnTransition
# 4 "data/maps/Route102/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route102_OnResume
# 5 "data/maps/Route102/scripts.pory"
	.byte 0
# 6 "data/maps/Route102/scripts.pory"

# 7 "data/maps/Route102/scripts.pory"
Route102_OnTransition:
# 8 "data/maps/Route102/scripts.pory"
	special GetDayOrNight
# 9 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route102_OnTransition_Night
# 10 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route102_OnTransition_Day
# 11 "data/maps/Route102/scripts.pory"
	end
# 12 "data/maps/Route102/scripts.pory"
	
# 13 "data/maps/Route102/scripts.pory"
Route102_OnTransition_Night:
# 14 "data/maps/Route102/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 15 "data/maps/Route102/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 16 "data/maps/Route102/scripts.pory"
	end
# 17 "data/maps/Route102/scripts.pory"

# 18 "data/maps/Route102/scripts.pory"
Route102_OnTransition_Day:
# 19 "data/maps/Route102/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 20 "data/maps/Route102/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 21 "data/maps/Route102/scripts.pory"
	end
# 22 "data/maps/Route102/scripts.pory"
	
# 23 "data/maps/Route102/scripts.pory"
Route102_OnResume:
# 24 "data/maps/Route102/scripts.pory"
	special GetDayOrNight
# 25 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route102_OnResume_Night
# 26 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route102_OnResume_Day
# 27 "data/maps/Route102/scripts.pory"
	end
# 28 "data/maps/Route102/scripts.pory"
	
# 29 "data/maps/Route102/scripts.pory"
Route102_OnResume_Night:
# 30 "data/maps/Route102/scripts.pory"
	setvar VAR_DAYNIGHT, 1
# 31 "data/maps/Route102/scripts.pory"
	end
# 32 "data/maps/Route102/scripts.pory"
	
# 33 "data/maps/Route102/scripts.pory"
Route102_OnResume_Day:
# 34 "data/maps/Route102/scripts.pory"
	setvar VAR_DAYNIGHT, 0
# 35 "data/maps/Route102/scripts.pory"
	end
# 36 "data/maps/Route102/scripts.pory"

# 37 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 38 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 39 "data/maps/Route102/scripts.pory"
	end
# 40 "data/maps/Route102/scripts.pory"

# 41 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 42 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 43 "data/maps/Route102/scripts.pory"
	end
# 44 "data/maps/Route102/scripts.pory"

# 45 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 46 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 47 "data/maps/Route102/scripts.pory"
	end
# 48 "data/maps/Route102/scripts.pory"

# 49 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 50 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 51 "data/maps/Route102/scripts.pory"
	end
# 52 "data/maps/Route102/scripts.pory"

# 53 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 54 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 55 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 56 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 57 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 58 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 59 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 60 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 61 "data/maps/Route102/scripts.pory"
	release
# 62 "data/maps/Route102/scripts.pory"
	end
# 63 "data/maps/Route102/scripts.pory"

# 64 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 65 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 66 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 68 "data/maps/Route102/scripts.pory"
	release
# 69 "data/maps/Route102/scripts.pory"
	end
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 72 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 73 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 74 "data/maps/Route102/scripts.pory"
	release
# 75 "data/maps/Route102/scripts.pory"
	end
# 76 "data/maps/Route102/scripts.pory"

# 77 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 78 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 79 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 80 "data/maps/Route102/scripts.pory"
	release
# 81 "data/maps/Route102/scripts.pory"
	end
# 82 "data/maps/Route102/scripts.pory"

# 83 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 84 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 85 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 86 "data/maps/Route102/scripts.pory"
	release
# 87 "data/maps/Route102/scripts.pory"
	end
# 88 "data/maps/Route102/scripts.pory"

# 89 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 90 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 91 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/Route102/scripts.pory"
	end
# 93 "data/maps/Route102/scripts.pory"

# 94 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 95 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 96 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/Route102/scripts.pory"
	end
# 98 "data/maps/Route102/scripts.pory"

# 99 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 100 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 101 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/Route102/scripts.pory"
	end
# 103 "data/maps/Route102/scripts.pory"

# 104 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 105 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 106 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/Route102/scripts.pory"
	end
# 108 "data/maps/Route102/scripts.pory"

# 109 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 110 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 111 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 112 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 113 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 114 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 115 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 116 "data/maps/Route102/scripts.pory"

# 117 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 118 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 119 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 120 "data/maps/Route102/scripts.pory"

# 121 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 122 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 123 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 124 "data/maps/Route102/scripts.pory"

# 125 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 126 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 127 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 128 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 129 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 130 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 131 "data/maps/Route102/scripts.pory"

# 132 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 133 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 134 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 135 "data/maps/Route102/scripts.pory"

# 136 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 137 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 138 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 139 "data/maps/Route102/scripts.pory"

# 140 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 141 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 142 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
