# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
.set LOCALID_BOBBY, 1
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_MapScripts::
# 5 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.byte 0
# 6 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 7 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_Bobby::
# 8 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	lock
# 9 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_BOBBY, MeteorFalls_BobbysCave_EventScript_Defeated
# 10 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitse
# 11 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playse SE_PIN
# 12 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_BOBBY, Common_Movement_ExclamationMark
# 13 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 14 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_BOBBY, Common_Movement_Delay48
# 15 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_BOBBY, Common_Movement_FacePlayer
# 17 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 18 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_BobbysCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
# 19 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	trainerbattle_no_intro TRAINER_BOBBY, MeteorFalls_BobbysCave_Text_BobbyDefeat
# 20 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_BobbysCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 21 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	giveitem ITEM_TERA_ORB
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setflag FLAG_DEFEATED_METEOR_FALLS_BOBBY
# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_Defeated::
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_BOBBY, Common_Movement_FacePlayer
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_BobbysCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "BOBBY: A trainer! I don't have the time,\n"
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Let's just fight!$"
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_BobbyDefeat:
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "The haxx got me in this run!\n"
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I have to reset the game.$"
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_MyPredictionCameTrue:
# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "BOBBY: That was so haaard, the haxx\n"
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "didn't like me...\p"
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Now calm down and go away!$"
