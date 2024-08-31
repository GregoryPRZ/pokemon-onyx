LilycoveCity_House1_MapScripts::
	.byte 0


LilycoveCity_House1_EventScript_Cynthia::
# 5 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 6 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 7 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_set FLAG_DEFEATED_LILYCOVE_CYNTHIA, LilycoveCity_House1_EventScript_CynthiaDefeated
# 8 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_Cynthia_Text_0, MSGBOX_YESNO
# 9 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, LilycoveCity_House1_EventScript_CynthiaBattle
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_Cynthia_Text_1
# 11 "data/maps/LilycoveCity_House1/scripts.pory"
	release
	end


LilycoveCity_House1_EventScript_CynthiaBattle::
# 16 "data/maps/LilycoveCity_House1/scripts.pory"
	goto_if_unset FLAG_IS_CHAMPION, LilycoveCity_House1_EventScript_CynthiaComeBackWhenChampion
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_CynthiaBattle_Text_0, MSGBOX_DEFAULT
# 18 "data/maps/LilycoveCity_House1/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNTHIA, LilycoveCity_House1_Text_CynthiaDefeat
# 19 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_CynthiaBattle_Text_1, MSGBOX_DEFAULT
# 20 "data/maps/LilycoveCity_House1/scripts.pory"
	setflag FLAG_DEFEATED_LILYCOVE_CYNTHIA
# 21 "data/maps/LilycoveCity_House1/scripts.pory"
	release
	end


LilycoveCity_House1_EventScript_CynthiaComeBackWhenChampion::
# 25 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_CynthiaComeBackWhenChampion_Text_0, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity_House1/scripts.pory"
	release
	end


LilycoveCity_House1_EventScript_CynthiaDefeated::
# 31 "data/maps/LilycoveCity_House1/scripts.pory"
	lock
# 32 "data/maps/LilycoveCity_House1/scripts.pory"
	faceplayer
# 33 "data/maps/LilycoveCity_House1/scripts.pory"
	msgbox LilycoveCity_House1_EventScript_CynthiaDefeated_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/LilycoveCity_House1/scripts.pory"
	release
	end


LilycoveCity_House1_EventScript_Cynthia_Text_0:
# 8 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "What's this?\p"
	.string "What an uncanny resemblance... It's\n"
	.string "surprising to meet another Trainer who\l"
	.string "has intense eyes like that Pokémon\l"
	.string "Trainer. What's your name? ... OK. I'll\l"
	.string "remember that! {PLAYER}, nice to meet\l"
	.string "you. I'm Cynthia. I'm a Pokémon Trainer,\l"
	.string "too, like you. I have an insatiable\l"
	.string "curiosity for researching Pokémon\l"
	.string "myths. In order to get to know each\l"
	.string "other better as Pokémon Trainers, I\l"
	.string "would like our Pokémon to have a match.\l"
	.string "Would you care to be my opponent?$"

LilycoveCity_House1_EventScript_Cynthia_Text_1:
# 10 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Ha ha. You prefer to take things slowly\n"
	.string "and rationally, am I right? When you're\l"
	.string "ready, come and talk to me. I'll be happy\l"
	.string "to see you.$"

LilycoveCity_House1_EventScript_CynthiaBattle_Text_0:
# 17 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Before I send out my Pokémon, my heart\n"
	.string "always begins to race... Interesting...\l"
	.string "My Pokémon in their Poké Balls are\l"
	.string "radiating a happy feeling. Are you the\l"
	.string "reason? What are you?$"

LilycoveCity_House1_EventScript_CynthiaBattle_Text_1:
# 19 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "That was beyond my expectation! What\n"
	.string "an exceptional battle! You certainly\l"
	.string "bear a resemblance to that Trainer who\l"
	.string "faced Giratina... Oh, pardon me. I was\l"
	.string "just thinking out loud. I love being\l"
	.string "here in spring and summer. I can't stay\l"
	.string "all year, because there's so much to\l"
	.string "investigate in Sinnoh, as well. You're a\l"
	.string "great Trainer, and it would make me\l"
	.string "happy to see you again sometime.$"

LilycoveCity_House1_EventScript_CynthiaComeBackWhenChampion_Text_0:
# 25 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "Oh! But you should come back when you\n"
	.string "finish your trip. Beat the champion\l"
	.string "first, and i'll be happy to battle you.$"

LilycoveCity_House1_EventScript_CynthiaDefeated_Text_0:
# 33 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "I love to come here in spring and\n"
	.string "summer. But there are a lot of things to\l"
	.string "investigate in Sinnoh, as well. I'd be\l"
	.string "delighted to see you again. You're an\l"
	.string "awesome Pokémon Trainer!$"

LilycoveCity_House1_Text_CynthiaDefeat::
# 39 "data/maps/LilycoveCity_House1/scripts.pory"
	.string "My heart is pounding so hard because I had such a\nheated battle with you. You are a really great Trainer!!$"
