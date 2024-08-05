MtRusturf_Past_MapScripts::
	.byte 0


MtMoon_EventScript_DoorLocked::
# 4 "data/maps/MtRusturf_Past/scripts.pory"
	lock
# 5 "data/maps/MtRusturf_Past/scripts.pory"
	msgbox MtMoon_EventScript_DoorLocked_Text_0, MSGBOX_DEFAULT
# 6 "data/maps/MtRusturf_Past/scripts.pory"
	release
	end


MtMoon_EventScript_Clefairy::
# 11 "data/maps/MtRusturf_Past/scripts.pory"
	lock
# 12 "data/maps/MtRusturf_Past/scripts.pory"
	faceplayer
# 13 "data/maps/MtRusturf_Past/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 14 "data/maps/MtRusturf_Past/scripts.pory"
	waitmoncry
# 15 "data/maps/MtRusturf_Past/scripts.pory"
	msgbox MtMoon_EventScript_Clefairy_Text_0, MSGBOX_DEFAULT
# 16 "data/maps/MtRusturf_Past/scripts.pory"
	release
	end


MtMoon_EventScript_SquareSign::
# 21 "data/maps/MtRusturf_Past/scripts.pory"
	lock
# 22 "data/maps/MtRusturf_Past/scripts.pory"
	msgbox MtMoon_EventScript_SquareSign_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/MtRusturf_Past/scripts.pory"
	release
	end


MtMoon_EventScript_TimePortal::
# 28 "data/maps/MtRusturf_Past/scripts.pory"
	lock
# 29 "data/maps/MtRusturf_Past/scripts.pory"
	msgbox MtMoon_EventScript_TimePortal_Text_0, MSGBOX_YESNO
# 30 "data/maps/MtRusturf_Past/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MtMoon_EventScript_TimePortal_2
# 33 "data/maps/MtRusturf_Past/scripts.pory"
	release
	end

MtMoon_EventScript_TimePortal_1:
# 36 "data/maps/MtRusturf_Past/scripts.pory"
	release
	end

MtMoon_EventScript_TimePortal_2:
# 31 "data/maps/MtRusturf_Past/scripts.pory"
	warpteleport MAP_MT_RUSTURF_1F, 32, 17
	goto MtMoon_EventScript_TimePortal_1


MtMoon_EventScript_DoorLocked_Text_0:
# 5 "data/maps/MtRusturf_Past/scripts.pory"
	.string "The door is locked.$"

MtMoon_EventScript_Clefairy_Text_0:
# 15 "data/maps/MtRusturf_Past/scripts.pory"
	.string "Clefaaaairy!$"

MtMoon_EventScript_SquareSign_Text_0:
# 22 "data/maps/MtRusturf_Past/scripts.pory"
	.string "Mt. Moon Square - Rest and look calmly\n"
	.string "at Clefairy's choreography at full\l"
	.string "moon!$"

MtMoon_EventScript_TimePortal_Text_0:
# 29 "data/maps/MtRusturf_Past/scripts.pory"
	.string "Do you want to come back to Mt. Rusturf?$"
