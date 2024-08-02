# 1 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_MapScripts::
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
# 5 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
# 6 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	.byte 0
# 7 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnResume:
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 10 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 12, 44
# 11 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 12 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 13 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnTransition:
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
# 15 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE132
# 16 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE133
# 17 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE124
# 18 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad:
# 21 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
# 22 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 23 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 24 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance::
# 25 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, TRUE
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, TRUE
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, TRUE
# 28 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 29 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 30 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 31 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	return
# 32 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 33 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleABC::
# 34 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 35 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_ABC
# 36 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 39 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleGHI::
# 40 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 41 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_GHI
# 42 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleMNO::
# 46 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 47 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_MNO
# 48 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 49 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleTUV::
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 53 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_TUV
# 54 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 55 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 56 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDEF::
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DEF
# 60 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 61 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 62 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 63 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleJKL::
# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_JKL
# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 67 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 68 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 69 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePQRS::
# 70 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_PQRS
# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 74 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 75 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePeriod::
# 76 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 77 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Period
# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 81 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleWXYZ::
# 82 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 83 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_WXYZ
# 84 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleComma::
# 88 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 89 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_Comma
# 90 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 91 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall::
# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 95 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_HoleInWall
# 96 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 97 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 98 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_HoleInWall::
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 102 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 103 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 104 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 105 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDigHere::
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemsgbox SealedChamber_OuterRoom_Braille_DigHere
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 109 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
