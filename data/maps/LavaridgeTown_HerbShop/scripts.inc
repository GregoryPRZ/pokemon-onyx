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
	.2byte ITEM_NONE
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ClerkMint::
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_PokemartMint
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_PokemartMint:
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the HERB SHOP, home of\n"
# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in LAVARIDGE?\p"
# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 92 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That CHARCOAL I gave you, it's used\n"
# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 95 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 96 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a POKéMON.\p"
# 97 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of FIRE-type\n"
# 98 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 100 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 101 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 102 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your POKéMON will dislike you for it.\l"
# 103 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"
