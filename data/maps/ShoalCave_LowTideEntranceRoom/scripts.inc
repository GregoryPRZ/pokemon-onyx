# 1 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideEntranceRoom_OnTransition
# 4 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition:
# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE125
# 8 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	special UpdateShoalTideFlag
# 9 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide
# 10 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide
# 11 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 12 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide::
# 13 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM
# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 15 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 16 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide::
# 17 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
# 18 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 20 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert::
# 21 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock
# 22 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	faceplayer
# 23 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	dotimebasedevents
# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_set FLAG_SYS_SHOAL_ITEM, ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 4
# 26 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 27 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 4
# 28 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells
# 29 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WouldYouLikeShellBell, MSGBOX_YESNO
# 30 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell
# 31 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitemspace ITEM_SHELL_BELL
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed
# 33 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell
# 34 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_MakeShellBellRightAway, MSGBOX_DEFAULT
# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SALT, 4
# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	removeitem ITEM_SHOAL_SHELL, 4
# 37 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 38 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull  @ Never FALSE, we already made sure there will be room in the bag.
# 39 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_ExplainShellBell, MSGBOX_DEFAULT
# 40 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_2  @ Not read. Perhaps meant to stop him from re-explaining the Shell Bell if multiple are received in one sitting.
# 41 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 43 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 44 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
@ If the bag is full, check if a slot will be freed when 4 Shoal Salt or Shells are given
# 45 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed::
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells
# 48 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells::
# 51 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 52 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed
# 53 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 54 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 55 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed::
# 56 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setvar VAR_RESULT, 2
# 57 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 58 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 59 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell::
# 60 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag, MSGBOX_DEFAULT
# 61 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 62 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 63 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 64 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells::
# 65 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT
# 66 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 67 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL
# 68 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 69 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
# 70 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 71 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 72 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 73 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell::
# 74 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells, MSGBOX_DEFAULT
# 75 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 76 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 77 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 78 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell::
# 79 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell, MSGBOX_DEFAULT
# 80 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 81 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 82 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 83 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems::
# 84 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_1
# 85 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_2
# 86 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_3
# 87 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_4
# 88 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_1
# 89 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_2
# 90 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_3
# 91 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_4
# 92 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_SHOAL_ITEM
# 93 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
