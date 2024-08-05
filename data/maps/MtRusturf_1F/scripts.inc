MtRusturf_1F_MapScripts::
	.byte 0


MtRusturf_1F_EventScript_TimePortal::
# 4 "data/maps/MtRusturf_1F/scripts.pory"
	lock
# 5 "data/maps/MtRusturf_1F/scripts.pory"
	msgbox MtRusturf_1F_EventScript_TimePortal_Text_0, MSGBOX_YESNO
# 6 "data/maps/MtRusturf_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtRusturf_1F_EventScript_TimePortal_2
# 9 "data/maps/MtRusturf_1F/scripts.pory"
	release
	end

MtRusturf_1F_EventScript_TimePortal_1:
# 12 "data/maps/MtRusturf_1F/scripts.pory"
	release
	end

MtRusturf_1F_EventScript_TimePortal_2:
# 7 "data/maps/MtRusturf_1F/scripts.pory"
	warpteleport MAP_MT_RUSTURF_PAST, 0, 5, 23
	goto MtRusturf_1F_EventScript_TimePortal_1


MtRusturf_1F_EventScript_TimePortal_Text_0:
# 5 "data/maps/MtRusturf_1F/scripts.pory"
	.string "Do you want to touch the statue?$"
