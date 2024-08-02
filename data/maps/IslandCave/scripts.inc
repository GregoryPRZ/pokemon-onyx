# 1 "data/maps/IslandCave/scripts.pory"

# 2 "data/maps/IslandCave/scripts.pory"
IslandCave_MapScripts::
# 3 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
# 4 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
# 5 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
# 6 "data/maps/IslandCave/scripts.pory"
	.byte 0
# 7 "data/maps/IslandCave/scripts.pory"

# 8 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume:
# 9 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_EventScript_TryRemoveRegice
# 10 "data/maps/IslandCave/scripts.pory"
	end
# 11 "data/maps/IslandCave/scripts.pory"

# 12 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice::
# 13 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/IslandCave/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 15 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 16 "data/maps/IslandCave/scripts.pory"
	return
# 17 "data/maps/IslandCave/scripts.pory"

# 18 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad:
# 19 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_HideRegiEntrance
# 20 "data/maps/IslandCave/scripts.pory"
	end
# 21 "data/maps/IslandCave/scripts.pory"

# 22 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_HideRegiEntrance::
# 23 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 24 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 25 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 26 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 27 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 28 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 29 "data/maps/IslandCave/scripts.pory"
	return
# 30 "data/maps/IslandCave/scripts.pory"

# 31 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition:
# 32 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 33 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_VISITED_ROUTE105
# 34 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 35 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGICE, IslandCave_EventScript_ShowRegice
# 36 "data/maps/IslandCave/scripts.pory"
	end
# 37 "data/maps/IslandCave/scripts.pory"

# 38 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ShowRegice::
# 39 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
# 40 "data/maps/IslandCave/scripts.pory"
	return
# 41 "data/maps/IslandCave/scripts.pory"

# 42 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_OpenRegiEntrance::
# 43 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, TRUE
# 44 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, TRUE
# 45 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, TRUE
# 46 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, TRUE
# 47 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, FALSE
# 48 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, TRUE
# 49 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 50 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 51 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 52 "data/maps/IslandCave/scripts.pory"
	end
# 53 "data/maps/IslandCave/scripts.pory"

# 54 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle::
# 55 "data/maps/IslandCave/scripts.pory"
	lockall
# 56 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 57 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
# 58 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 59 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 60 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 61 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 62 "data/maps/IslandCave/scripts.pory"
	end
# 63 "data/maps/IslandCave/scripts.pory"

# 64 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_BigHoleInWall::
# 65 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 66 "data/maps/IslandCave/scripts.pory"
	releaseall
# 67 "data/maps/IslandCave/scripts.pory"
	end
# 68 "data/maps/IslandCave/scripts.pory"

# 69 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide::
# 70 "data/maps/IslandCave/scripts.pory"
	lockall
# 71 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_REGICE_PUZZLE_FAILED, IslandCave_EventScript_ClearSteps
# 72 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 73 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CloseBrailleMsg
# 74 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_REGICE_PUZZLE_STARTED
# 75 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 76 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 77 "data/maps/IslandCave/scripts.pory"
	end
# 78 "data/maps/IslandCave/scripts.pory"

# 79 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CloseBrailleMsg::
# 80 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 81 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 82 "data/maps/IslandCave/scripts.pory"
	releaseall
# 83 "data/maps/IslandCave/scripts.pory"
	end
# 84 "data/maps/IslandCave/scripts.pory"

# 85 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ClearSteps::
# 86 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 87 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 88 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 89 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_REGICE_PUZZLE_FAILED
# 90 "data/maps/IslandCave/scripts.pory"
	return
# 91 "data/maps/IslandCave/scripts.pory"

# 92 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice::
# 93 "data/maps/IslandCave/scripts.pory"
	lock
# 94 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 95 "data/maps/IslandCave/scripts.pory"
	waitse
# 96 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 97 "data/maps/IslandCave/scripts.pory"
	delay 40
# 98 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 99 "data/maps/IslandCave/scripts.pory"
	setwildbattle SPECIES_REGICE, 40
# 100 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 101 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 102 "data/maps/IslandCave/scripts.pory"
	waitstate
# 103 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 105 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, IslandCave_EventScript_DefeatedRegice
# 106 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IslandCave_EventScript_RanFromRegice
# 107 "data/maps/IslandCave/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IslandCave_EventScript_RanFromRegice
# 108 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 109 "data/maps/IslandCave/scripts.pory"
	release
# 110 "data/maps/IslandCave/scripts.pory"
	end
# 111 "data/maps/IslandCave/scripts.pory"

# 112 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_DefeatedRegice::
# 113 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 114 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 115 "data/maps/IslandCave/scripts.pory"
	end
# 116 "data/maps/IslandCave/scripts.pory"

# 117 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_RanFromRegice::
# 118 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 119 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 120 "data/maps/IslandCave/scripts.pory"
	end
