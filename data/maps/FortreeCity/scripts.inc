# 1 "data/maps/FortreeCity/scripts.pory"

# 2 "data/maps/FortreeCity/scripts.pory"
FortreeCity_MapScripts::
# 3 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_OnTransition
# 4 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FortreeCity_OnResume
# 5 "data/maps/FortreeCity/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity/scripts.pory"

# 7 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnTransition:
# 8 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
	setflag FLAG_VISITED_ROUTE118
	setflag FLAG_VISITED_ROUTE119
	setflag FLAG_VISITED_ROUTE123
	end
# 13 "data/maps/FortreeCity/scripts.pory"

# 14 "data/maps/FortreeCity/scripts.pory"
FortreeCity_OnResume:
# 15 "data/maps/FortreeCity/scripts.pory"
	setstepcallback STEP_CB_FORTREE_BRIDGE
# 16 "data/maps/FortreeCity/scripts.pory"
	end
# 17 "data/maps/FortreeCity/scripts.pory"

# 18 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Man::
# 19 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SawGiganticPokemonInSky, MSGBOX_NPC
# 20 "data/maps/FortreeCity/scripts.pory"
	end
# 21 "data/maps/FortreeCity/scripts.pory"

# 22 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Woman::
# 23 "data/maps/FortreeCity/scripts.pory"
	lock
# 24 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 25 "data/maps/FortreeCity/scripts.pory"
	goto_if_set FLAG_KECLEON_FLED_FORTREE, FortreeCity_EventScript_WomanGymAccessible
# 26 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingBlockingGym, MSGBOX_DEFAULT
# 27 "data/maps/FortreeCity/scripts.pory"
	release
# 28 "data/maps/FortreeCity/scripts.pory"
	end
# 29 "data/maps/FortreeCity/scripts.pory"

# 30 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_WomanGymAccessible::
# 31 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_ThisTimeIllBeatWinona, MSGBOX_DEFAULT
# 32 "data/maps/FortreeCity/scripts.pory"
	release
# 33 "data/maps/FortreeCity/scripts.pory"
	end
# 34 "data/maps/FortreeCity/scripts.pory"

# 35 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Girl::
# 36 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_TreesGrowByDrinkingRainwater, MSGBOX_NPC
# 37 "data/maps/FortreeCity/scripts.pory"
	end
# 38 "data/maps/FortreeCity/scripts.pory"

# 39 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_OldMan::
# 40 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_EveryoneHealthyAndLively, MSGBOX_NPC
# 41 "data/maps/FortreeCity/scripts.pory"
	end
# 42 "data/maps/FortreeCity/scripts.pory"

# 43 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Boy::
# 44 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_BugPokemonComeThroughWindow, MSGBOX_NPC
# 45 "data/maps/FortreeCity/scripts.pory"
	end
# 46 "data/maps/FortreeCity/scripts.pory"

# 47 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GameboyKid::
# 48 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_PokemonThatEvolveWhenTraded, MSGBOX_NPC
# 49 "data/maps/FortreeCity/scripts.pory"
	end
# 50 "data/maps/FortreeCity/scripts.pory"

# 51 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_CitySign::
# 52 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_CitySign, MSGBOX_SIGN
# 53 "data/maps/FortreeCity/scripts.pory"
	end
# 54 "data/maps/FortreeCity/scripts.pory"

# 55 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_GymSign::
# 56 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_GymSign, MSGBOX_SIGN
# 57 "data/maps/FortreeCity/scripts.pory"
	end
# 58 "data/maps/FortreeCity/scripts.pory"

# 59 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_Kecleon::
# 60 "data/maps/FortreeCity/scripts.pory"
	lock
# 61 "data/maps/FortreeCity/scripts.pory"
	faceplayer
# 62 "data/maps/FortreeCity/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 63 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FortreeCity_EventScript_AskUseDevonScope
# 64 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 65 "data/maps/FortreeCity/scripts.pory"
	release
# 66 "data/maps/FortreeCity/scripts.pory"
	end
# 67 "data/maps/FortreeCity/scripts.pory"

# 68 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_AskUseDevonScope::
# 69 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 70 "data/maps/FortreeCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FortreeCity_EventScript_UseDevonScope
# 71 "data/maps/FortreeCity/scripts.pory"
	release
# 72 "data/maps/FortreeCity/scripts.pory"
	end
# 73 "data/maps/FortreeCity/scripts.pory"

# 74 "data/maps/FortreeCity/scripts.pory"
FortreeCity_EventScript_UseDevonScope::
# 75 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 76 "data/maps/FortreeCity/scripts.pory"
	closemessage
# 77 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 78 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 79 "data/maps/FortreeCity/scripts.pory"
	waitse
# 80 "data/maps/FortreeCity/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 81 "data/maps/FortreeCity/scripts.pory"
	delay 40
# 82 "data/maps/FortreeCity/scripts.pory"
	waitmoncry
# 83 "data/maps/FortreeCity/scripts.pory"
	applymovement VAR_LAST_TALKED, FortreeCity_Movement_KecleonFlee
# 84 "data/maps/FortreeCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/FortreeCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 86 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 87 "data/maps/FortreeCity/scripts.pory"
	release
# 88 "data/maps/FortreeCity/scripts.pory"
	end
# 89 "data/maps/FortreeCity/scripts.pory"

# 90 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Movement_KecleonFlee:
# 91 "data/maps/FortreeCity/scripts.pory"
	walk_right
# 92 "data/maps/FortreeCity/scripts.pory"
	step_end
# 93 "data/maps/FortreeCity/scripts.pory"

# 94 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SawGiganticPokemonInSky:
# 95 "data/maps/FortreeCity/scripts.pory"
	.string "No one believes me, but I saw this\n"
# 96 "data/maps/FortreeCity/scripts.pory"
	.string "gigantic POKéMON in the sky.\p"
# 97 "data/maps/FortreeCity/scripts.pory"
	.string "It seemed to squirm as it flew toward\n"
# 98 "data/maps/FortreeCity/scripts.pory"
	.string "ROUTE 131.\p"
# 99 "data/maps/FortreeCity/scripts.pory"
	.string "By the way… Sniff…\n"
# 100 "data/maps/FortreeCity/scripts.pory"
	.string "Um… You, uh…smell singed.\p"
# 101 "data/maps/FortreeCity/scripts.pory"
	.string "Were you at a volcano or something?$"
# 102 "data/maps/FortreeCity/scripts.pory"

# 103 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingBlockingGym:
# 104 "data/maps/FortreeCity/scripts.pory"
	.string "I want to go to the POKéMON GYM,\n"
# 105 "data/maps/FortreeCity/scripts.pory"
	.string "but something's blocking the way.\p"
# 106 "data/maps/FortreeCity/scripts.pory"
	.string "After all the bother I went through\n"
# 107 "data/maps/FortreeCity/scripts.pory"
	.string "training on ROUTE 120…$"
# 108 "data/maps/FortreeCity/scripts.pory"

# 109 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_ThisTimeIllBeatWinona:
# 110 "data/maps/FortreeCity/scripts.pory"
	.string "I've got my pride-and-joy POKéMON\n"
# 111 "data/maps/FortreeCity/scripts.pory"
	.string "with me. This time, I'll beat WINONA.$"
# 112 "data/maps/FortreeCity/scripts.pory"

# 113 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_TreesGrowByDrinkingRainwater:
# 114 "data/maps/FortreeCity/scripts.pory"
	.string "The ground absorbs rainwater, and\n"
# 115 "data/maps/FortreeCity/scripts.pory"
	.string "trees grow by drinking that water…\p"
# 116 "data/maps/FortreeCity/scripts.pory"
	.string "Our FORTREE CITY exists because\n"
# 117 "data/maps/FortreeCity/scripts.pory"
	.string "there's both water and soil.$"
# 118 "data/maps/FortreeCity/scripts.pory"

# 119 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_EveryoneHealthyAndLively:
# 120 "data/maps/FortreeCity/scripts.pory"
	.string "The CITY consists of homes built on\n"
# 121 "data/maps/FortreeCity/scripts.pory"
	.string "trees.\p"
# 122 "data/maps/FortreeCity/scripts.pory"
	.string "Perhaps because of that lifestyle,\n"
# 123 "data/maps/FortreeCity/scripts.pory"
	.string "everyone is healthy and lively.\p"
# 124 "data/maps/FortreeCity/scripts.pory"
	.string "Why, even myself--I feel as if I've\n"
# 125 "data/maps/FortreeCity/scripts.pory"
	.string "grown thirty years younger.$"
# 126 "data/maps/FortreeCity/scripts.pory"

# 127 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_BugPokemonComeThroughWindow:
# 128 "data/maps/FortreeCity/scripts.pory"
	.string "Living on top of trees is okay.\p"
# 129 "data/maps/FortreeCity/scripts.pory"
	.string "But sometimes BUG POKéMON come in\n"
# 130 "data/maps/FortreeCity/scripts.pory"
	.string "through windows.\l"
# 131 "data/maps/FortreeCity/scripts.pory"
	.string "It can be really startling.$"
# 132 "data/maps/FortreeCity/scripts.pory"

# 133 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_PokemonThatEvolveWhenTraded:
# 134 "data/maps/FortreeCity/scripts.pory"
	.string "There are POKéMON that evolve when\n"
# 135 "data/maps/FortreeCity/scripts.pory"
	.string "you trade them! That's what I heard.$"
# 136 "data/maps/FortreeCity/scripts.pory"

# 137 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_SomethingUnseeable:
# 138 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.$"
# 139 "data/maps/FortreeCity/scripts.pory"

# 140 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UnseeableUseDevonScope:
# 141 "data/maps/FortreeCity/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 142 "data/maps/FortreeCity/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 143 "data/maps/FortreeCity/scripts.pory"

# 144 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_UsedDevonScopePokemonFled:
# 145 "data/maps/FortreeCity/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 146 "data/maps/FortreeCity/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 147 "data/maps/FortreeCity/scripts.pory"
	.string "visible!\p"
# 148 "data/maps/FortreeCity/scripts.pory"
	.string "The startled POKéMON fled!$"
# 149 "data/maps/FortreeCity/scripts.pory"

# 150 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_CitySign:
# 151 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY\n"
# 152 "data/maps/FortreeCity/scripts.pory"
	.string "“The treetop city that frolics with\l"
# 153 "data/maps/FortreeCity/scripts.pory"
	.string "nature.”$"
# 154 "data/maps/FortreeCity/scripts.pory"

# 155 "data/maps/FortreeCity/scripts.pory"
FortreeCity_Text_GymSign:
# 156 "data/maps/FortreeCity/scripts.pory"
	.string "FORTREE CITY POKéMON GYM\n"
# 157 "data/maps/FortreeCity/scripts.pory"
	.string "LEADER: WINONA\p"
# 158 "data/maps/FortreeCity/scripts.pory"
	.string "“The bird user taking flight into\n"
# 159 "data/maps/FortreeCity/scripts.pory"
	.string "the world.”$"
