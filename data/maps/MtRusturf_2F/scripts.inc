MtRusturf_2F_MapScripts::
# 2 "data/maps/MtRusturf_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtRusturf_2F_OnTransition
	.byte 0


MtRusturf_2F_OnTransition::
# 6 "data/maps/MtRusturf_2F/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
	end

