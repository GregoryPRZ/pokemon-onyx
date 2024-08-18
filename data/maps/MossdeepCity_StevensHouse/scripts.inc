# 1 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 2 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
.set LOCALID_BELDUM_BALL, 2
# 4 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 5 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_MapScripts::
# 6 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_StevensHouse_OnLoad
# 7 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_StevensHouse_OnTransition
# 8 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_StevensHouse_OnFrame
# 9 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.byte 0
# 10 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 11 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnLoad:
# 12 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, MossdeepCity_StevensHouse_EventScript_HideStevensNote
# 13 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 15 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_HideStevensNote::
# 16 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setmetatile 6, 4, METATILE_GenericBuilding_TableEdge, TRUE
# 17 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 18 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 19 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnTransition:
# 20 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call_if_eq VAR_STEVENS_HOUSE_STATE, 2, MossdeepCity_StevensHouse_EventScript_SetStevenPos
# 21 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 23 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SetStevenPos::
# 24 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectxyperm LOCALID_STEVEN, 6, 5
# 25 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setobjectmovementtype LOCALID_STEVEN, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 27 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 28 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_OnFrame:
# 29 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	map_script_2 VAR_STEVENS_HOUSE_STATE, 1, MossdeepCity_StevensHouse_EventScript_StevenGivesDive
# 30 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.2byte 0
# 31 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 32 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_StevenGivesDive::
# 33 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 34 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 35 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 36 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playse SE_PIN
# 37 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
# 38 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 39 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
# 40 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 41 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenApproachPlayer
# 42 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 43 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 44 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_YouveEarnedHMDive, MSGBOX_DEFAULT
# 45 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removefieldmugshot
# 46 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	giveitem ITEM_HM_DIVE
# 47 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 48 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_OMIT_DIVE_FROM_STEVEN_LETTER
# 49 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 50 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_ExplainDive, MSGBOX_DEFAULT
# 51 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removefieldmugshot
# 52 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	closemessage
# 53 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	delay 20
# 54 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	applymovement LOCALID_STEVEN, MossdeepCity_StevensHouse_Movement_StevenReturn
# 55 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmovement 0
# 56 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 57 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT
# 58 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 59 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 60 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 61 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 62 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenApproachPlayer:
# 63 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 64 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 65 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 66 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 67 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 68 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_left
# 69 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_down
# 70 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 71 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 72 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Movement_StevenReturn:
# 73 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_up
# 74 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 75 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 76 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_right
# 77 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	walk_in_place_faster_up
# 78 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	step_end
# 79 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 80 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_BeldumPokeball::
# 81 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 82 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum, MSGBOX_YESNO
# 83 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_LeaveBeldum
# 84 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_GiveBeldum
# 85 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 86 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 87 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_LeaveBeldum::
# 88 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas, MSGBOX_DEFAULT
# 89 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 90 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 91 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 92 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_GiveBeldum::
# 93 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BELDUM
# 94 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	givemon SPECIES_BELDUM, 5
# 95 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, MossdeepCity_StevensHouse_EventScript_SendBeldumParty
# 96 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, MossdeepCity_StevensHouse_EventScript_SendBeldumPC
# 97 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 98 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 99 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 100 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_SendBeldumParty::
# 101 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
	specialvar VAR_RESULT, IsNuzlockeNicknamingActive
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_StevensHouse_EventScript_SendBeldumParty_Nuzlocke
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 103 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 104 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 105 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 106 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 107 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 108 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

MossdeepCity_StevensHouse_EventScript_SendBeldumParty_Nuzlocke::
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
	end

MossdeepCity_StevensHouse_EventScript_SendBeldumPC::
# 110 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare
	specialvar VAR_RESULT, IsNuzlockeNicknamingActive
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_StevensHouse_EventScript_SendBeldumPC_Nuzlocke
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 112 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 113 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 114 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
# 115 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 116 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

MossdeepCity_StevensHouse_EventScript_SendBeldumPC_Nuzlocke::
	call Common_EventScript_NameReceivedBoxMon
	goto MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC
	end

MossdeepCity_StevensHouse_EventScript_BeldumTransferredToPC::
# 118 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	call Common_EventScript_TransferredToPC
# 119 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	goto MossdeepCity_StevensHouse_EventScript_ReceivedBeldum
# 120 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 121 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 122 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldumFanfare::
# 123 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_BELDUM
# 124 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removeobject LOCALID_BELDUM_BALL
# 125 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	message MossdeepCity_StevensHouse_Text_ObtainedBeldum
# 127 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitmessage
# 128 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	waitfanfare
# 129 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BELDUM
# 130 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	return
# 131 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 132 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_ReceivedBeldum::
# 133 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL
# 134 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_BELDUM
# 135 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 136 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 137 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 138 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_RockDisplay::
# 139 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_CollectionOfRareRocks, MSGBOX_SIGN
# 140 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 141 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 142 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Steven::
# 143 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 144 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis, MSGBOX_NPC
# 145 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	removefieldmugshot
# 146 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 147 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 148 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_Letter::
# 149 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	lockall
# 150 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	msgbox MossdeepCity_StevensHouse_Text_LetterFromSteven, MSGBOX_DEFAULT
# 151 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	releaseall
# 152 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 153 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 154 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused, leftover from RS
# 155 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_EventScript_DiveItemBall::
# 156 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	finditem ITEM_HM_DIVE
# 157 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_DIVE
# 158 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	end
# 159 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 160 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_YouveEarnedHMDive:
# 161 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}…\p"
# 162 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "As you can see, there's not much here,\n"
# 163 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "but this is my home.\p"
# 164 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Thank you for all that you've done.\p"
# 165 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "This is my token of appreciation.\n"
# 166 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's the HIDDEN MACHINE DIVE.\p"
# 167 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "No need to be shy--you've earned\n"
# 168 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "this HM.$"
# 169 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 170 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ExplainDive:
# 171 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: While you're using SURF, you\n"
# 172 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "should notice dark patches of water.\p"
# 173 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Use DIVE if you come to deep water\n"
# 174 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "like it. You'll drop to the seafloor.\p"
# 175 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "When you want to come back up, use\n"
# 176 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "DIVE again.\p"
# 177 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "In some places, it won't be possible\n"
# 178 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "for you to surface, though.$"
# 179 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 180 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_UnderwateCavernBetweenMossdeepSootopolis:
# 181 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN: Apparently, there's an\n"
# 182 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "underwater cavern between\l"
# 183 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "MOSSDEEP and SOOTOPOLIS.\p"
# 184 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "You know, the one that CAPT. STERN\n"
# 185 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "found in his submarine.$"
# 186 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 187 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_TakeBallContainingBeldum:
# 188 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} checked the POKé BALL.\p"
# 189 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It contained the POKéMON\n"
# 190 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "BELDUM.\p"
# 191 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Take the POKé BALL?$"
# 192 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 193 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_ObtainedBeldum:
# 194 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} obtained a BELDUM.$"
# 195 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 196 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
@ Unused
# 197 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_NoSpaceForAnotherMon:
# 198 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "There is no space for another POKéMON.$"
# 199 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 200 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LeftPokeBallWhereItWas:
# 201 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "{PLAYER} left the POKé BALL where\n"
# 202 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "it was.$"
# 203 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 204 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_LetterFromSteven:
# 205 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a letter.\p"
# 206 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "… … … … … …\p"
# 207 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "To {PLAYER}{KUN}…\p"
# 208 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I've decided to do a little soul-\n"
# 209 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "searching and train on the road.\p"
# 210 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I don't plan to return home for some\n"
# 211 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "time.\p"
# 212 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I have a favor to ask of you.\p"
# 213 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I want you to take the POKé BALL on\n"
# 214 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "the desk.\p"
# 215 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "Inside it is a BELDUM, my favorite\n"
# 216 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "POKéMON.\p"
# 217 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "I'm counting on you.\p"
# 218 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "May our paths cross someday.\p"
# 219 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "STEVEN STONE$"
# 220 "data/maps/MossdeepCity_StevensHouse/scripts.pory"

# 221 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
MossdeepCity_StevensHouse_Text_CollectionOfRareRocks:
# 222 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 223 "data/maps/MossdeepCity_StevensHouse/scripts.pory"
	.string "stones assembled by STEVEN.$"
