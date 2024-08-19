MtRusturf_HeatransRoom_MapScripts::
# 4 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtRusturf_HeatransRoom_OnTransition
# 5 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtRusturf_HeatransRoom_OnResume
	.byte 0


MtRusturf_HeatransRoom_OnTransition::
# 9 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	call_if_set FLAG_CAUGHT_HEATRAN, MtRusturf_HeatransRoom_EventScript_HideHeatran
# 10 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	call_if_unset FLAG_CAUGHT_HEATRAN, MtRusturf_HeatransRoom_EventScript_TryShowHeatran
	end


MtRusturf_HeatransRoom_OnResume::
# 15 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MtRusturf_HeatransRoom_EventScript_TryRemoveHeatran
	end


MtRusturf_HeatransRoom_EventScript_HideHeatran::
# 20 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	setflag FLAG_HIDE_HEATRAN
	return


MtRusturf_HeatransRoom_EventScript_TryRemoveHeatran::
# 25 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 26 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 27 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	removeobject 1
	return


MtRusturf_HeatransRoom_EventScript_TryShowHeatran::
# 32 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_HEATRAN, Common_EventScript_NopReturn
# 33 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	clearflag FLAG_HIDE_HEATRAN
	return


MtRusturf_HeatransRoom_EventScript_Heatran::
# 38 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	lock
# 39 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	faceplayer
# 40 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	waitse
# 41 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
# 42 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	delay 40
# 43 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	waitmoncry
# 44 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	setwildbattle SPECIES_HEATRAN, 70
# 45 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	dowildbattle
# 47 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 48 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	setflag FLAG_CAUGHT_HEATRAN
# 49 "data/maps/MtRusturf_HeatransRoom/scripts.pory"
	release
	end

