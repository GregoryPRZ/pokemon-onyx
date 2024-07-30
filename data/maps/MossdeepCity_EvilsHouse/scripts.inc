.set LOCALID_EVIL, 1

MossdeepCity_EvilsHouse_MapScripts::
	.byte 0

MossdeepCity_EvilsHouse_EventScript_Evil::
lock
goto_if_unset FLAG_DEFEATED_ELITE_4_DRAKE, MossdeepCity_EvilsHouse_EventScript_TooWeak
goto_if_set FLAG_DEFEATED_MOSSDEEP_EVIL, MossdeepCity_EvilsHouse_EventScript_Defeated
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
waitmovement 0
msgbox MossdeepCity_EvilsHouse_Text_Intro, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_EVIL, MossdeepCity_EvilsHouse_Text_EvilDefeat
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
setflag FLAG_DEFEATED_MOSSDEEP_EVIL
applymovement LOCALID_EVIL, Common_Movement_FaceRight
waitmovement 0
release
end

MossdeepCity_EvilsHouse_EventScript_TooWeak::
waitse
playse SE_PIN
applymovement LOCALID_EVIL, Common_Movement_ExclamationMark
waitmovement 0
applymovement LOCALID_EVIL, Common_Movement_Delay48
waitmovement 0
msgbox MossdeepCity_EvilsHouse_Text_TooWeak, MSGBOX_DEFAULT
applymovement LOCALID_EVIL, Common_Movement_FaceRight
waitmovement 0
release
end

MossdeepCity_EvilsHouse_EventScript_Defeated::
applymovement LOCALID_EVIL, Common_Movement_FacePlayer
waitmovement 0
msgbox MossdeepCity_EvilsHouse_Text_GoodGame, MSGBOX_DEFAULT
applymovement LOCALID_EVIL, Common_Movement_FaceRight
waitmovement 0
release
end

MossdeepCity_EvilsHouse_Text_Intro:
	.string "EVIL: So you want to battle me,\n"
	.string "now that you are the HOENNs\l"
	.string "new CHAMPION?\p"
	.string "Then come at me!\n"
	.string "I will crush you no matter what!$"

MossdeepCity_EvilsHouse_Text_EvilDefeat:
	.string "How is it possible!\n"
	.string "I was supposed to win!$"

MossdeepCity_EvilsHouse_Text_GoodGame:
	.string "EVIL: It's unfair to lose like that...\n"
	.string "but you're really strong.$"

MossdeepCity_EvilsHouse_Text_TooWeak:
	.string "EVIL: What? You want to battle me?\n"
	.string "Sorry, but you're gonna prove me\l"
	.string "your power.\p"
	.string "The only thing I see from\n"
	.string "you is weakness.$"

