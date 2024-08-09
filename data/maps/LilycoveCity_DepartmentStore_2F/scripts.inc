# 1 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_MapScripts::
# 3 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Cook::
# 6 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_PokefanF::
# 10 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_Sailor::
# 14 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkLeft::
# 18 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 19 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 20 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 21 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 22 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart1
# 23 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 24 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 27 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 28 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart1:
# 29 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 30 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 31 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 32 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 33 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 34 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 35 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 36 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 37 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 38 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 39 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 40 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 41 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 42 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 43 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 44 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkRight::
# 45 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 46 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 47 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 48 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 49 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart2
# 50 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 52 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 54 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 55 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Pokemart2:
# 56 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 57 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 58 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 59 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 60 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 61 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEL
# 62 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 63 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 64 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_WAVE_MAIL
# 65 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MECH_MAIL
# 66 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 67 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 68 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 69 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 70 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkAllBalls::
# 71 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 72 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 73 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 74 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 75 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_PokemartBalls
# 76 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 77 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 78 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 79 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 80 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 81 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartBalls:
# 82 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 83 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 84 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 85 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 86 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 87 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 88 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 89 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 90 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 91 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 92 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 93 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 94 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MOON_BALL
# 95 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NEST_BALL
# 96 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PARK_BALL
# 97 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BEAST_BALL
# 98 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_DREAM_BALL
# 99 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 100 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 101 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 102 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SPORT_BALL
# 103 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 104 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 105 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 106 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 107 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 108 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 109 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MASTER_BALL
# 110 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 111 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 112 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 113 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 114 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_EventScript_ClerkAllMedicine::
# 115 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	lock
# 116 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	faceplayer
# 117 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	message gText_HowMayIServeYou
# 118 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	waitmessage
# 119 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_2F_PokemartMedicine
# 120 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 122 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 123 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 124 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.align 2
# 125 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_PokemartMedicine:
# 126 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_POTION
# 127 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 128 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 129 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REMEDY
# 130 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FINE_REMEDY
# 131 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SUPERB_REMEDY
# 132 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 133 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SODA_POP
# 134 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LEMONADE
# 135 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 136 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 137 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 138 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 139 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 140 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 141 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 142 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 143 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 144 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BIG_MALASADA
# 145 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 146 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_SWEET_HEART
# 147 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_HONEY
# 148 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 149 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 150 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_REVIVE
# 151 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 152 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ETHER
# 153 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 154 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ELIXIR
# 155 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 156 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 157 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 158 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.2byte ITEM_NONE
# 159 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	release
# 160 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	end
# 161 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 162 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_LearnToUseItemsProperly:
# 163 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "Learn to use items properly.\n"
# 164 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "That's basic, really.$"
# 165 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 166 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_GoodGiftForHusband:
# 167 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "My husband is waiting at home.\n"
# 168 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "What would make a good gift for him?$"
# 169 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"

# 170 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
LilycoveCity_DepartmentStore_2F_Text_StockUpOnItems:
# 171 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I'm leaving on a long journey soon.\n"
# 172 "data/maps/LilycoveCity_DepartmentStore_2F/scripts.pory"
	.string "I need to stock up on items.$"
