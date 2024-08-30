# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
# 4 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_Gym/scripts.pory"

# 6 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_OnTransition:
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_SetFlashLevel
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 9 "data/maps/DewfordTown_Gym/scripts.pory"

# 10 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_SetLightsOn
# 12 "data/maps/DewfordTown_Gym/scripts.pory"

# 13 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_SetLightsOn::
# 14 "data/maps/DewfordTown_Gym/scripts.pory"
	setflashlevel 0
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 16 "data/maps/DewfordTown_Gym/scripts.pory"

# 17 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brawly::
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 20 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_BrawlyPostBattleSpeech
# 21 "data/maps/DewfordTown_Gym/scripts.pory"
	createfieldmugshot MUGSHOT_BRAWLY, EMOTE_NORMAL
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_DEFAULT
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	removefieldmugshot
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_BrawlyDefeated
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 28 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 29 "data/maps/DewfordTown_Gym/scripts.pory"

# 30 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyDefeated::
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 33 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 34 "data/maps/DewfordTown_Gym/scripts.pory"
	createfieldmugshot MUGSHOT_BRAWLY, EMOTE_NORMAL
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	removefieldmugshot
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 38 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 39 "data/maps/DewfordTown_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 43 "data/maps/DewfordTown_Gym/scripts.pory"
	call DewfordTown_Gym_EventScript_GiveBulkUp
# 44 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 48 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 49 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
# 53 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 54 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 56 "data/maps/DewfordTown_Gym/scripts.pory"

# 57 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp::
# 58 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 59 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 60 "data/maps/DewfordTown_Gym/scripts.pory"
	createfieldmugshot MUGSHOT_BRAWLY, EMOTE_NORMAL
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	removefieldmugshot
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	return
# 65 "data/maps/DewfordTown_Gym/scripts.pory"

# 66 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveBulkUp2:
# 67 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 68 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	createfieldmugshot MUGSHOT_BRAWLY, EMOTE_NORMAL
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	removefieldmugshot
# 72 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 73 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 75 "data/maps/DewfordTown_Gym/scripts.pory"

# 76 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_BrawlyPostBattleSpeech::
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	createfieldmugshot MUGSHOT_BRAWLY, EMOTE_NORMAL
# 78 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 79 "data/maps/DewfordTown_Gym/scripts.pory"
	removefieldmugshot
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 82 "data/maps/DewfordTown_Gym/scripts.pory"

# 83 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Takao::
# 84 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat
# 85 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 87 "data/maps/DewfordTown_Gym/scripts.pory"

# 88 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Jocelyn::
# 89 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat
# 90 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 92 "data/maps/DewfordTown_Gym/scripts.pory"

# 93 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Laura::
# 94 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat
# 95 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 97 "data/maps/DewfordTown_Gym/scripts.pory"

# 98 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Brenden::
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 102 "data/maps/DewfordTown_Gym/scripts.pory"

# 103 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Cristian::
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 107 "data/maps/DewfordTown_Gym/scripts.pory"

# 108 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Lilith::
# 109 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat
# 110 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 112 "data/maps/DewfordTown_Gym/scripts.pory"

# 113 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 120 "data/maps/DewfordTown_Gym/scripts.pory"

# 121 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 123 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 124 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 125 "data/maps/DewfordTown_Gym/scripts.pory"

# 126 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 127 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 128 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 131 "data/maps/DewfordTown_Gym/scripts.pory"

# 132 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 133 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 135 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 136 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 137 "data/maps/DewfordTown_Gym/scripts.pory"

# 138 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 139 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 140 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 142 "data/maps/DewfordTown_Gym/scripts.pory"

# 143 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 144 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 145 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 147 "data/maps/DewfordTown_Gym/scripts.pory"

# 148 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, how's it going, CHAMPION-\n"
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 151 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER BRAWLY commands\n"
# 152 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING-type POKéMON.\p"
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Going against him with NORMAL-type\n"
# 154 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON is asking for trouble.\p"
# 155 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FIGHTING POKéMON will lay a serious\n"
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "smack down on NORMAL POKéMON,\l"
# 157 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so be careful!\p"
# 158 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "What's worse, the GYM is as dark as\n"
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the ocean floor.\p"
# 160 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But it will get brighter after defeating\n"
# 161 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the TRAINERS in your way.\p"
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Hey, okay, go for it!$"
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah! It's turned too bright in here!\p"
# 166 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your future is bright, too!$"
# 167 "data/maps/DewfordTown_Gym/scripts.pory"

# 168 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoIntro:
# 169 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Might is right!\n"
# 170 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Come on!$"
# 171 "data/maps/DewfordTown_Gym/scripts.pory"

# 172 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoDefeat:
# 173 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Not enough power…$"
# 174 "data/maps/DewfordTown_Gym/scripts.pory"

# 175 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TakaoPostBattle:
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your skill overcame my strength!\n"
# 177 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Your technique is commendable!$"
# 178 "data/maps/DewfordTown_Gym/scripts.pory"

# 179 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynIntro:
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "There's no need for BRAWLY to be\n"
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "involved!\p"
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll crush you!$"
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynDefeat:
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But… How?\n"
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How could I lose so easily?$"
# 187 "data/maps/DewfordTown_Gym/scripts.pory"

# 188 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JocelynPostBattle:
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm not going to waste this loss.\n"
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll use it to motivate me to train!\p"
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "One day I'll become a GYM LEADER…\p"
# 192 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "No, I'll become the POKéMON LEAGUE\n"
# 193 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "CHAMPION!$"
# 194 "data/maps/DewfordTown_Gym/scripts.pory"

# 195 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraIntro:
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Don't you dare brush me off!\n"
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not my fault if you cry!$"
# 198 "data/maps/DewfordTown_Gym/scripts.pory"

# 199 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraDefeat:
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Waaaaaaah!\n"
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I lost!$"
# 202 "data/maps/DewfordTown_Gym/scripts.pory"

# 203 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LauraPostBattle:
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I battle in the dark to make my heart\n"
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "stronger.\p"
# 206 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "But because it's so dark, I can never\n"
# 207 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "see BRAWLY's face…$"
# 208 "data/maps/DewfordTown_Gym/scripts.pory"

# 209 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithIntro:
# 210 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ufufu…\n"
# 211 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Are you stumbling around in the dark?$"
# 212 "data/maps/DewfordTown_Gym/scripts.pory"

# 213 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithDefeat:
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, you…\n"
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I don't want to know you!$"
# 216 "data/maps/DewfordTown_Gym/scripts.pory"

# 217 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_LilithPostBattle:
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You deserve to stay lost and end up\n"
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "back at the entrance again!$"
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenIntro:
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'll show you the gumption of\n"
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "a sailing man!$"
# 224 "data/maps/DewfordTown_Gym/scripts.pory"

# 225 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenDefeat:
# 226 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "How'd this happen?\n"
# 227 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's not like me to lose this way!$"
# 228 "data/maps/DewfordTown_Gym/scripts.pory"

# 229 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrendenPostBattle:
# 230 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, aye! You're worthy of seeing\n"
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "our GYM LEADER.$"
# 232 "data/maps/DewfordTown_Gym/scripts.pory"

# 233 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianIntro:
# 234 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you mean to pass, it has to be\n"
# 235 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "through me!$"
# 236 "data/maps/DewfordTown_Gym/scripts.pory"

# 237 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianDefeat:
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grrrrr!\n"
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Vastly overpowered!$"
# 240 "data/maps/DewfordTown_Gym/scripts.pory"

# 241 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_CristianPostBattle:
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You win!\n"
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Go after that BADGE!$"
# 244 "data/maps/DewfordTown_Gym/scripts.pory"

# 245 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyIntro:
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm BRAWLY!\n"
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD's GYM LEADER!\p"
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I've been churned in the rough waves\n"
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "of these parts, and I've grown tough\l"
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the pitch-black cave!\p"
# 251 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "So you wanted to challenge me?\n"
# 252 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Let me see what you're made of!$"
# 253 "data/maps/DewfordTown_Gym/scripts.pory"

# 254 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyDefeat:
# 255 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Whoah, wow! You made a much bigger\n"
# 256 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "splash than I expected!\p"
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You swamped me!\p"
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Okay, you've got me.\n"
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Take this GYM BADGE!$"
# 260 "data/maps/DewfordTown_Gym/scripts.pory"

# 261 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedKnuckleBadge:
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER} received the KNUCKLE BADGE\n"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from BRAWLY.$"
# 264 "data/maps/DewfordTown_Gym/scripts.pory"

# 265 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The KNUCKLE BADGE makes all POKéMON\n"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "up to Level 30, even those you get in\l"
# 268 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "trades, obey without question.\p"
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "And, you'll be able to use the HM move\n"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "FLASH outside of battle.\p"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you'd like, use this TECHNICAL\n"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "MACHINE, too.$"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainBulkUp:
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TM08 contains BULK UP.\p"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's a move that raises both ATTACK\n"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "and DEFENSE stats.\p"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …$"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"

# 280 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredBrawly:
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"

# 284 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostBattle:
# 285 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can see your talent becoming a giant\n"
# 286 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "wave to cause a storm of astonishment\l"
# 287 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "among TRAINERS one day!$"
# 288 "data/maps/DewfordTown_Gym/scripts.pory"

# 289 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 290 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM$"
# 291 "data/maps/DewfordTown_Gym/scripts.pory"

# 292 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 293 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "DEWFORD TOWN POKéMON GYM\p"
# 294 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
# 295 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 296 "data/maps/DewfordTown_Gym/scripts.pory"

# 297 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPreRematch:
# 298 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 299 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 300 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 301 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 302 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 303 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "you've gone!$"
# 304 "data/maps/DewfordTown_Gym/scripts.pory"

# 305 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchDefeat:
# 306 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow!\n"
# 307 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Swamped again!$"
# 308 "data/maps/DewfordTown_Gym/scripts.pory"

# 309 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyPostRematch:
# 310 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 311 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 312 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 313 "data/maps/DewfordTown_Gym/scripts.pory"

# 314 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
# 315 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 316 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 317 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 318 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 319 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 320 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that can battle.\p"
# 321 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 322 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
