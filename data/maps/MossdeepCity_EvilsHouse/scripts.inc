.set LOCALID_EVIL, 1

MossdeepCity_EvilsHouse_MapScripts::
	.byte 0

MossdeepCity_EvilsHouse_EventScript_Evil::
lock
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
goto_if_set FLAG_DEFEATED_MOSSDEEP_EVIL, MossdeepCity_EvilsHouse_EventScript_Defeated
msgbox MossdeepCity_EvilsHouse_Text_Intro, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_EVIL, MossdeepCity_EvilsHouse_Text_EvilDefeat
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
setflag FLAG_DEFEATED_MOSSDEEP_EVIL
release
end

MossdeepCity_EvilsHouse_EventScript_Defeated::
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
release
end

MossdeepCity_EvilsHouse_Text_Intro:
	.string "So you want to battle me,\n"
	.string "now that you are the HOENNs\l"
	.string "new CHAMPION?\p"
	.string "Then come at me!\n"
	.string "I will crush you no matter what!$"

MossdeepCity_EvilsHouse_Text_EvilDefeat:
	.string "How is it possible!\n"
	.string "I was supposed to win!$"

MossdeepCity_EvilsHouse_Text_GoodGame:
	.string "It's unfair to lose like that...\n"
	.string "but you're really strong.$"

