# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins:
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTEIN
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CALCIUM
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_IRON
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ZINC
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CARBOS
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HP_UP
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SPEED
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStones::
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStonesPostgame
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_MegaStones
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_MegaStones:
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASAURITE
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAZARDITE
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASTOISITE
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUTTERFREEITE
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEOWTHITE
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKACHUITE
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EEVEEITE
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAGARITE
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INTELEONITE
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RILLABOOMITE
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CINDERACITE
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ORBEETITE
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CENTISKORCHITE
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREDNAWITE
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAPPITE
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_APPLETUNITE
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ALCREMITE
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRIMMSNARLITE
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HATTERENITE
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DURALUDONITE
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStonesPostgame::
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_MegaStonesPostgame
# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_MegaStonesPostgame:
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASAURITE
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAZARDITE
# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASTOISITE
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUTTERFREEITE
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEOWTHITE
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKACHUITE
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EEVEEITE
# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAGARITE
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INTELEONITE
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RILLABOOMITE
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CINDERACITE
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ORBEETITE
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CENTISKORCHITE
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREDNAWITE
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAPPITE
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_APPLETUNITE
# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ALCREMITE
# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRIMMSNARLITE
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HATTERENITE
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DURALUDONITE
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SNORLAXITE
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GARBODORITE
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MELMETALITE
# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_URSHIFITE
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MACHAMPITE
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAIKOUITE
# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 141 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 142 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 144 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "PROTEIN boosts ATTACK,\n"
# 145 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and CALCIUM raises SP. ATK.$"
# 146 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 148 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
# 149 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 150 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"
# 152 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 153 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 154 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
# 155 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"
