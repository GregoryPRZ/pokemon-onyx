# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 15 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 16 "data/maps/EverGrandeCity/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/EverGrandeCity/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity/scripts.pory"

# 27 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DrifblimStop::
# 28 "data/maps/EverGrandeCity/scripts.pory"
	call Common_EventScript_FlyingTaxi
# 29 "data/maps/EverGrandeCity/scripts.pory"
	release
# 30 "data/maps/EverGrandeCity/scripts.pory"
	end
# 31 "data/maps/EverGrandeCity/scripts.pory"

# 32 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DrifblimStopSignSouth::
# 33 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_DrifblimStopSignSouth, MSGBOX_SIGN
# 34 "data/maps/EverGrandeCity/scripts.pory"
	end
# 35 "data/maps/EverGrandeCity/scripts.pory"

# 36 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_DrifblimStopSignNorth::
# 37 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_DrifblimStopSignNorth, MSGBOX_SIGN
# 38 "data/maps/EverGrandeCity/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity/scripts.pory"

# 40 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_DrifblimStopSignSouth:
# 41 "data/maps/EverGrandeCity/scripts.pory"
	.string "SOUTH EVER GRANDE DRIFBLIM STOP\n"
# 42 "data/maps/EverGrandeCity/scripts.pory"
	.string "A new way to fly over HOENN!$"
# 43 "data/maps/EverGrandeCity/scripts.pory"

# 44 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_DrifblimStopSignNorth:
# 45 "data/maps/EverGrandeCity/scripts.pory"
	.string "NORTH EVER GRANDE DRIFBLIM STOP\n"
# 46 "data/maps/EverGrandeCity/scripts.pory"
	.string "A new way to fly over HOENN!$"
# 47 "data/maps/EverGrandeCity/scripts.pory"

# 48 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 49 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 50 "data/maps/EverGrandeCity/scripts.pory"

# 51 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 52 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 53 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 54 "data/maps/EverGrandeCity/scripts.pory"

# 55 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 56 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 57 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 58 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"
