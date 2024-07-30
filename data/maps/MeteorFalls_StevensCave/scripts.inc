# 1 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 2 "data/maps/MeteorFalls_StevensCave/scripts.pory"
.set LOCALID_BOBBY, 1
# 3 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 4 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_StevensCave_MapScripts::
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
	goto MeteorFalls_BobbysCave_EventScript_GiveMewtwo
# 22 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 23 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 24 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 25 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_GiveMewtwo::
# 26 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_MEWTWO
# 27 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	givemon SPECIES_MEWTWO, 100, ITEM_MEWTWONITE_Y
# 28 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MeteorFalls_BobbysCave_EventScript_SendMewtwoParty
# 29 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MeteorFalls_BobbysCave_EventScript_SendMewtwoPC
# 30 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 31 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 32 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 33 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_SendMewtwoParty::
# 34 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call MeteorFalls_BobbysCave_EventScript_ReceivedMewtwoFanfare
# 35 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 36 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MeteorFalls_BobbysCave_EventScript_ReceivedMewtwo
# 37 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 38 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 39 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto MeteorFalls_BobbysCave_EventScript_ReceivedMewtwo
# 40 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 41 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 42 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_SendMewtwoPC::
# 43 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call MeteorFalls_BobbysCave_EventScript_ReceivedMewtwoFanfare
# 44 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 45 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MeteorFalls_BobbysCave_EventScript_MewtwoTransferredToPC
# 46 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 47 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto MeteorFalls_BobbysCave_EventScript_MewtwoTransferredToPC
# 48 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 49 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 50 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_MewtwoTransferredToPC::
# 51 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	call Common_EventScript_TransferredToPC
# 52 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	goto MeteorFalls_BobbysCave_EventScript_ReceivedMewtwo
# 53 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 54 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 55 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_ReceivedMewtwoFanfare::
# 56 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEWTWO
# 57 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 58 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedMewtwo
# 59 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmessage
# 60 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitfanfare
# 61 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MEWTWO
# 62 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	return
# 63 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 64 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_Defeated::
# 65 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	applymovement LOCALID_BOBBY, Common_Movement_FacePlayer
# 66 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	waitmovement 0
# 67 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	msgbox MeteorFalls_BobbysCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
# 68 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	release
# 69 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	end
# 70 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 71 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_EventScript_ReceivedMewtwo::
# 72 "data/maps/MeteorFalls_StevensCave/scripts.pory"
setflag FLAG_DEFEATED_METEOR_FALLS_BOBBY
# 73 "data/maps/MeteorFalls_StevensCave/scripts.pory"
release
# 74 "data/maps/MeteorFalls_StevensCave/scripts.pory"
end
# 75 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 76 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedMewtwo:
# 77 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "{PLAYER} obtained MEWTWO.$"
# 78 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 79 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_ShouldKnowHowGoodIAmExpectWorst:
# 80 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "BOBBY: Yo! what's up! You're a trainer?\p"
# 81 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Alright, I don't have the time,\n"
# 82 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Let's just fight!$"
# 83 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 84 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_BobbyDefeat:
# 85 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "The haxx got me in this run!\n"
# 86 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "I have to reset the game.$"
# 87 "data/maps/MeteorFalls_StevensCave/scripts.pory"

# 88 "data/maps/MeteorFalls_StevensCave/scripts.pory"
MeteorFalls_BobbysCave_Text_MyPredictionCameTrue:
# 89 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "BOBBY: That was so haaard, the haxx\n"
# 90 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "didn't like me...\p"
# 91 "data/maps/MeteorFalls_StevensCave/scripts.pory"
	.string "Now calm down and go away!$"
