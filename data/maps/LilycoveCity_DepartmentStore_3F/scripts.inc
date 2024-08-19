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
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_EvolutionItems
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
LilycoveCity_DepartmentStore_3F_Pokemart_EvolutionItems:
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TART_APPLE
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTECTOR
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SACHET
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LEADERS_CREST
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIMMIGHOUL_COIN
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StrategyItems
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
LilycoveCity_DepartmentStore_3F_Pokemart_StrategyItems:
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLUNDER_POLICY
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_UTILITY_UMBRELLA
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TERRAIN_EXTENDER
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ABILITY_SHIELD
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PUNCHING_GLOVE
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_COVERT_CLOAK
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LOADED_DICE
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BOOSTER_ENERGY
# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BERSERK_GENE
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStones::
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStonesPostgame
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_MegaStones
# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_MegaStones:
# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASAURITE
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAZARDITE
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASTOISITE
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUTTERFREEITE
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEOWTHITE
# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKACHUITE
# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EEVEEITE
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAGARITE
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INTELEONITE
# 109 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RILLABOOMITE
# 110 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CINDERACITE
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ORBEETITE
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CENTISKORCHITE
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREDNAWITE
# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAPPITE
# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_APPLETUNITE
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ALCREMITE
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRIMMSNARLITE
# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HATTERENITE
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DURALUDONITE
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkZCrystals::
# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_ClerkZCrystals
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_ClerkZCrystals:
# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EEVIUM_Z
# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEWNIUM_Z
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DECIDIUM_Z
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PRIMARIUM_Z
# 141 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INCINIUM_Z
# 142 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKANIUM_Z
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKASHUNIUM_Z
# 144 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ALORAICHIUM_Z
# 145 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_KOMMONIUM_Z
# 146 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SNORLIUM_Z
# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MIMIKIUM_Z
# 148 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LYCANIUM_Z
# 149 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 150 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 152 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 153 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkMegaStonesPostgame::
# 154 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 155 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 156 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_MegaStonesPostgame
# 157 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 158 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 159 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 160 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 161 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 162 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_MegaStonesPostgame:
# 163 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASAURITE
# 164 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAZARDITE
# 165 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGASTOISITE
# 166 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BUTTERFREEITE
# 167 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MEOWTHITE
# 168 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PIKACHUITE
# 169 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_EEVEEITE
# 170 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GIGAGARITE
# 171 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_INTELEONITE
# 172 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RILLABOOMITE
# 173 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CINDERACITE
# 174 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ORBEETITE
# 175 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CENTISKORCHITE
# 176 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DREDNAWITE
# 177 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAPPITE
# 178 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_APPLETUNITE
# 179 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ALCREMITE
# 180 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GRIMMSNARLITE
# 181 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HATTERENITE
# 182 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_COPPERAJITE
# 183 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DURALUDONITE
# 184 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SNORLAXITE
# 185 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GARBODORITE
# 186 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MELMETALITE
# 187 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_URSHIFITE
# 188 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MACHAMPITE
# 189 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAIKOUITE
# 190 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 191 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 192 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 193 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 194 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
# 195 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 196 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 197 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 198 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
# 199 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 200 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 201 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 202 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman::
# 203 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 204 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 205 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 206 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
# 207 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up POKéMON,\n"
# 208 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 209 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "PROTEIN boosts ATTACK,\n"
# 210 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and CALCIUM raises SP. ATK.$"
# 211 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 212 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
# 213 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my POKéMON to have more\n"
# 214 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 215 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 216 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "DEFENSE with IRON, or SP. DEF with ZINC.$"
# 217 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 218 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
# 219 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a CARBOS to my POKéMON,\n"
# 220 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its SPEED went up.$"
