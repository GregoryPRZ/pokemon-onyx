# 1 "data/maps/FieryPath/scripts.pory"

# 2 "data/maps/FieryPath/scripts.pory"
FieryPath_MapScripts::
# 3 "data/maps/FieryPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FieryPath_OnTransition
# 4 "data/maps/FieryPath/scripts.pory"
	.byte 0
# 5 "data/maps/FieryPath/scripts.pory"

# 6 "data/maps/FieryPath/scripts.pory"
FieryPath_OnTransition:
# 7 "data/maps/FieryPath/scripts.pory"
	call_if_unset FLAG_LANDMARK_FIERY_PATH, FieryPath_EventScript_MoveScottToFallarbor
# 8 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_LANDMARK_FIERY_PATH
# 9 "data/maps/FieryPath/scripts.pory"
	end
# 10 "data/maps/FieryPath/scripts.pory"

# 11 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_MoveScottToFallarbor::
# 12 "data/maps/FieryPath/scripts.pory"
	setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
# 13 "data/maps/FieryPath/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 14 "data/maps/FieryPath/scripts.pory"
	return
# 15 "data/maps/FieryPath/scripts.pory"

# 16 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_BlayzeTest::
# 17 "data/maps/FieryPath/scripts.pory"
	lock
# 18 "data/maps/FieryPath/scripts.pory"
	faceplayer
# 19 "data/maps/FieryPath/scripts.pory"
	msgbox FieryPath_Text_BlayzeIntro, MSGBOX_DEFAULT
# 20 "data/maps/FieryPath/scripts.pory"
	trainerbattle_no_intro TRAINER_BLAYZE, FieryPath_Text_BlayzeDefeat
# 21 "data/maps/FieryPath/scripts.pory"
	goto FieryPath_EventScript_BlayzeDefeated
# 22 "data/maps/FieryPath/scripts.pory"
	end
# 23 "data/maps/FieryPath/scripts.pory"

# 24 "data/maps/FieryPath/scripts.pory"
FieryPath_EventScript_BlayzeDefeated::
# 25 "data/maps/FieryPath/scripts.pory"
	msgbox FieryPath_Text_BlayzeDefeated, MSGBOX_DEFAULT
# 26 "data/maps/FieryPath/scripts.pory"
	release
# 27 "data/maps/FieryPath/scripts.pory"
	end
# 28 "data/maps/FieryPath/scripts.pory"

# 29 "data/maps/FieryPath/scripts.pory"
FieryPath_Text_BlayzeDefeat:
# 30 "data/maps/FieryPath/scripts.pory"
	.string "GG!$"
# 31 "data/maps/FieryPath/scripts.pory"

# 32 "data/maps/FieryPath/scripts.pory"
FieryPath_Text_BlayzeDefeated:
# 33 "data/maps/FieryPath/scripts.pory"
	.string "GG!$"
# 34 "data/maps/FieryPath/scripts.pory"

# 35 "data/maps/FieryPath/scripts.pory"
FieryPath_Text_BlayzeIntro:
# 36 "data/maps/FieryPath/scripts.pory"
	.string "Hello!$"
