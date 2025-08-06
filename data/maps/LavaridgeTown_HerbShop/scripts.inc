# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemartlistend
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ClerkMint::
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_PokemartMint
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_PokemartMint:
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Herb Shop, home of\n"
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in Lavaridge?\p"
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That Charcoal I gave you, it's used\n"
# 92 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a Pokémon.\p"
# 95 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of Fire-type\n"
# 96 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 97 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 98 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 100 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your Pokémon will dislike you for it.\l"
# 101 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"
