# 1 "data/maps/PacifidlogTown/scripts.pory"

# 2 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_MapScripts::
# 3 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PacifidlogTown_OnTransition
# 4 "data/maps/PacifidlogTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PacifidlogTown_OnResume
# 5 "data/maps/PacifidlogTown/scripts.pory"
	.byte 0
# 6 "data/maps/PacifidlogTown/scripts.pory"

# 7 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnTransition:
# 8 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_PACIFIDLOG_TOWN
# 9 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE127
# 10 "data/maps/PacifidlogTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE128
# 11 "data/maps/PacifidlogTown/scripts.pory"
	end
# 12 "data/maps/PacifidlogTown/scripts.pory"

# 13 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_OnResume:
# 14 "data/maps/PacifidlogTown/scripts.pory"
	setstepcallback STEP_CB_PACIFIDLOG_BRIDGE
# 15 "data/maps/PacifidlogTown/scripts.pory"
	end
# 16 "data/maps/PacifidlogTown/scripts.pory"

# 17 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_NinjaBoy::
# 18 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_NeatHousesOnWater, MSGBOX_NPC
# 19 "data/maps/PacifidlogTown/scripts.pory"
	end
# 20 "data/maps/PacifidlogTown/scripts.pory"

# 21 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Girl::
# 22 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_FastRunningCurrent, MSGBOX_NPC
# 23 "data/maps/PacifidlogTown/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown/scripts.pory"

# 25 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_Fisherman::
# 26 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_SkyPillarTooScary, MSGBOX_NPC
# 27 "data/maps/PacifidlogTown/scripts.pory"
	end
# 28 "data/maps/PacifidlogTown/scripts.pory"

# 29 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_TownSign::
# 30 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_TownSign, MSGBOX_SIGN
# 31 "data/maps/PacifidlogTown/scripts.pory"
	end
# 32 "data/maps/PacifidlogTown/scripts.pory"

# 33 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_DrifblimStop::
# 34 "data/maps/PacifidlogTown/scripts.pory"
	call Common_EventScript_FlyingTaxi
# 35 "data/maps/PacifidlogTown/scripts.pory"
	release
# 36 "data/maps/PacifidlogTown/scripts.pory"
	end
# 37 "data/maps/PacifidlogTown/scripts.pory"

# 38 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_EventScript_DrifblimStopSign::
# 39 "data/maps/PacifidlogTown/scripts.pory"
	msgbox PacifidlogTown_Text_DrifblimStopSign, MSGBOX_SIGN
# 40 "data/maps/PacifidlogTown/scripts.pory"
	end
# 41 "data/maps/PacifidlogTown/scripts.pory"

# 42 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_DrifblimStopSign:
# 43 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN DRIFBLIM STOP\n"
# 44 "data/maps/PacifidlogTown/scripts.pory"
	.string "A new way to fly over HOENN!$"
# 45 "data/maps/PacifidlogTown/scripts.pory"

# 46 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_FastRunningCurrent:
# 47 "data/maps/PacifidlogTown/scripts.pory"
	.string "The sea between PACIFIDLOG and\n"
# 48 "data/maps/PacifidlogTown/scripts.pory"
	.string "SLATEPORT has a fast-running tide.\p"
# 49 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you decide to SURF, you could end\n"
# 50 "data/maps/PacifidlogTown/scripts.pory"
	.string "up swept away somewhere else.$"
# 51 "data/maps/PacifidlogTown/scripts.pory"

# 52 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_NeatHousesOnWater:
# 53 "data/maps/PacifidlogTown/scripts.pory"
	.string "See, isn't it neat?\n"
# 54 "data/maps/PacifidlogTown/scripts.pory"
	.string "These houses are on water!\p"
# 55 "data/maps/PacifidlogTown/scripts.pory"
	.string "I was born here!$"
# 56 "data/maps/PacifidlogTown/scripts.pory"

# 57 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_SkyPillarTooScary:
# 58 "data/maps/PacifidlogTown/scripts.pory"
	.string "The SKY PILLAR?\p"
# 59 "data/maps/PacifidlogTown/scripts.pory"
	.string "…Oh, you must mean that tall, tall\n"
# 60 "data/maps/PacifidlogTown/scripts.pory"
	.string "tower a little further out.\p"
# 61 "data/maps/PacifidlogTown/scripts.pory"
	.string "If you asked me, I wouldn't climb it.\n"
# 62 "data/maps/PacifidlogTown/scripts.pory"
	.string "It's too scary to get up that high.\p"
# 63 "data/maps/PacifidlogTown/scripts.pory"
	.string "Life at sea level in PACIFIDLOG,\n"
# 64 "data/maps/PacifidlogTown/scripts.pory"
	.string "that suits me fine.$"
# 65 "data/maps/PacifidlogTown/scripts.pory"

# 66 "data/maps/PacifidlogTown/scripts.pory"
PacifidlogTown_Text_TownSign:
# 67 "data/maps/PacifidlogTown/scripts.pory"
	.string "PACIFIDLOG TOWN\p"
# 68 "data/maps/PacifidlogTown/scripts.pory"
	.string "“Where the morning sun smiles upon\n"
# 69 "data/maps/PacifidlogTown/scripts.pory"
	.string "the waters.”$"
