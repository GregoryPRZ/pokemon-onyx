# 1 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
.set LOCALID_EVIL, 1
# 3 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
.set LOCALID_SPHEAL, 2
# 4 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_MapScripts::
# 5 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.byte 0
# 6 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 7 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_EventScript_Evil::
# 8 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
lock
# 9 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
goto_if_unset FLAG_IS_CHAMPION, MossdeepCity_EvilsHouse_EventScript_TooWeak
# 10 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
goto_if_set FLAG_DEFEATED_MOSSDEEP_EVIL, MossdeepCity_EvilsHouse_EventScript_Defeated
# 11 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
# 12 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 13 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
msgbox MossdeepCity_EvilsHouse_Text_Intro, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
trainerbattle_no_intro TRAINER_EVIL, MossdeepCity_EvilsHouse_Text_EvilDefeat
# 15 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
# 16 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
setflag FLAG_DEFEATED_MOSSDEEP_EVIL
# 17 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FaceRight
# 18 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 19 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
release
# 20 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
end
# 21 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 22 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_EventScript_TooWeak::
# 23 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitse
# 24 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
playse SE_PIN
# 25 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_ExclamationMark
# 26 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 27 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_Delay48
# 28 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 29 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
# 30 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 31 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
msgbox MossdeepCity_EvilsHouse_Text_TooWeak, MSGBOX_DEFAULT
# 32 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FaceRight
# 33 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 34 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
release
# 35 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
end
# 36 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 37 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_EventScript_Defeated::
# 38 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
# 39 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 40 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
# 41 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_FaceRight
# 42 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmovement 0
# 43 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
release
# 44 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
end
# 45 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 46 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_EventScript_Spheal::
# 47 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
lock
# 48 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
faceplayer
# 49 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
applymovement LOCALID_EVIL, Common_Movement_ExclamationMark
# 50 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 51 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
waitmoncry
# 52 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
msgbox MossdeepCity_EvilsHouse_Text_SphealHappy, MSGBOX_DEFAULT
# 53 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
release
# 54 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
end
# 55 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 56 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_Text_Intro:
# 57 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "EVIL: So you want to battle me,\n"
# 58 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "now that you are the HOENNs\l"
# 59 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "new CHAMPION?\p"
# 60 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "Then come at me!\n"
# 61 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "I will crush you no matter what!$"
# 62 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 63 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_Text_EvilDefeat:
# 64 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "How is it possible!\n"
# 65 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "I was supposed to win!$"
# 66 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 67 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_Text_GoodGame:
# 68 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "EVIL: It's unfair to lose like that...\n"
# 69 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "but you're really strong.$"
# 70 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 71 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_Text_TooWeak:
# 72 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "EVIL: What? You want to battle me?\n"
# 73 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "Sorry, but you're gonna prove me\l"
# 74 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "your power.\p"
# 75 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "The only thing I see from\n"
# 76 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "you is weakness.$"
# 77 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"

# 78 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
MossdeepCity_EvilsHouse_Text_SphealHappy:
# 79 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "Spheal seems happy to see\n"
# 80 "data/maps/MossdeepCity_EvilsHouse/scripts.pory"
	.string "a new guest! He hugs you.$"
