# 1 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_MAXIE, 3
# 5 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 6 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 7 "data/maps/SeafloorCavern_Room9/scripts.pory"
.set LOCALID_KYOGRE_SLEEPING, 7
# 8 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 9 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_MapScripts::
# 10 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.byte 0
# 11 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 12 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_EventScript_ArchieAwakenKyogre::
# 13 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lockall
# 14 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 15 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 16 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 17 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 18 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 19 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 20 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafloorCavern_Room9_Movement_Delay32
# 21 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 22 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 23 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 24 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieHoldItRightThere, MSGBOX_DEFAULT
# 25 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 26 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 27 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8004
# 28 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 29 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 30 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieApproachPlayer
# 31 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 32 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 33 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieSoItWasYou, MSGBOX_DEFAULT
# 34 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 35 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 37 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 38 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieBeholdKyogre, MSGBOX_DEFAULT
# 39 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 40 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_FacePlayer
# 41 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 42 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 43 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieYouMustDisappear, MSGBOX_DEFAULT
# 44 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 45 "data/maps/SeafloorCavern_Room9/scripts.pory"
	trainerbattle_no_intro TRAINER_ARCHIE, SeafloorCavern_Room9_Text_ArchieDefeat
# 46 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 47 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWithThisRedOrb, MSGBOX_DEFAULT
# 48 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 49 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setweather WEATHER_NONE
# 50 "data/maps/SeafloorCavern_Room9/scripts.pory"
	doweather
# 51 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special Script_FadeOutMapMusic
# 52 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 53 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_RedOrbShinesByItself, MSGBOX_DEFAULT
# 54 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special WaitWeather
# 55 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 56 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 1
# 57 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_M_DETECT
# 58 "data/maps/SeafloorCavern_Room9/scripts.pory"
	dofieldeffectsparkle 16, 42, 0
# 59 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 60 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 61 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_RESULT, 0
# 62 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playfanfare MUS_AWAKEN_LEGEND
# 63 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_ORB
# 64 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special DoOrbEffect
# 65 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 68 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 150
# 69 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE_SLEEPING
# 70 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject LOCALID_KYOGRE
# 71 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 72 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 60
# 73 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreApproach
# 74 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 75 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special FadeOutOrbEffect
# 76 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 77 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 78 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 79 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 80 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 81 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 82 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 83 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement LOCALID_KYOGRE, SeafloorCavern_Room9_Movement_KyogreExit
# 84 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 85 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removeobject LOCALID_KYOGRE
# 86 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 4
# 87 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, 2  @ vertical pan
# 88 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 89 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 90 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 91 "data/maps/SeafloorCavern_Room9/scripts.pory"
	special ShakeCamera
# 92 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 93 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 30
# 94 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8004, LOCALID_ARCHIE
# 95 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8005, LOCALID_MAXIE
# 96 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8006, LOCALID_GRUNT_1
# 97 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_0x8007, LOCALID_GRUNT_2
# 98 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 99 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo, MSGBOX_DEFAULT
# 100 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 101 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_LOGIN
# 102 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 103 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 104 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 105 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieAMessageFromOutside, MSGBOX_DEFAULT
# 106 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 107 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 108 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieListenMessage
# 109 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 110 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 111 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard, MSGBOX_DEFAULT
# 112 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 113 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 114 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PC_OFF
# 115 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay 20
# 116 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterDown
# 117 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 118 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 119 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear, MSGBOX_DEFAULT
# 120 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 121 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 122 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8005
# 123 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8006
# 124 "data/maps/SeafloorCavern_Room9/scripts.pory"
	addobject VAR_0x8007
# 125 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8007, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 126 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8006, SeafloorCavern_Room9_Movement_MagmaGruntArrive
# 127 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieArrive
# 128 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 129 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 130 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 131 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 132 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought, MSGBOX_DEFAULT
# 133 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 134 "data/maps/SeafloorCavern_Room9/scripts.pory"
	playse SE_PIN
# 135 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_ExclamationMark
# 136 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 137 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_Delay48
# 138 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 139 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_ARCHIE, EMOTE_NORMAL
# 140 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty, MSGBOX_DEFAULT
# 141 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 142 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 143 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue, MSGBOX_DEFAULT
# 144 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 145 "data/maps/SeafloorCavern_Room9/scripts.pory"
	closemessage
# 146 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8005, SeafloorCavern_Room9_Movement_MaxieExit
# 147 "data/maps/SeafloorCavern_Room9/scripts.pory"
	applymovement VAR_0x8004, SeafloorCavern_Room9_Movement_ArchieExit
# 148 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitmovement 0
# 149 "data/maps/SeafloorCavern_Room9/scripts.pory"
	createfieldmugshot MUGSHOT_MAXIE, EMOTE_NORMAL
# 150 "data/maps/SeafloorCavern_Room9/scripts.pory"
	msgbox SeafloorCavern_Room9_Text_MaxieComeOnPlayer, MSGBOX_DEFAULT
# 151 "data/maps/SeafloorCavern_Room9/scripts.pory"
	removefieldmugshot
# 152 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_ROUTE128_STATE, 1
# 153 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 1
# 154 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 155 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 156 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 157 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 158 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 159 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 160 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
# 161 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_LEGENDARIES_IN_SOOTOPOLIS
# 162 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_ARCHIE
# 163 "data/maps/SeafloorCavern_Room9/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_128_MAXIE
# 164 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_SYS_WEATHER_CTRL
# 165 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 166 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN
# 167 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_STEVENS_HOUSE_STATE, 2
# 168 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setvar VAR_SEAFLOOR_CAVERN_STATE, 1
# 169 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
# 170 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
# 171 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
# 172 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE
# 173 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS
# 174 "data/maps/SeafloorCavern_Room9/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 175 "data/maps/SeafloorCavern_Room9/scripts.pory"
	warp MAP_ROUTE128, 38, 22
# 176 "data/maps/SeafloorCavern_Room9/scripts.pory"
	waitstate
# 177 "data/maps/SeafloorCavern_Room9/scripts.pory"
	releaseall
# 178 "data/maps/SeafloorCavern_Room9/scripts.pory"
	end
# 179 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 180 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieApproachPlayer:
# 181 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 182 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 183 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 184 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 185 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 186 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 187 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 188 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 189 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 190 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused1:
# 191 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 192 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 193 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 194 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 195 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieListenMessage:
# 196 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_left
# 197 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 198 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 199 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 200 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Unused2:
# 201 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 202 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 203 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 204 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_ArchieExit:
# 205 "data/maps/SeafloorCavern_Room9/scripts.pory"
	face_up
# 206 "data/maps/SeafloorCavern_Room9/scripts.pory"
	lock_facing_direction
# 207 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_down
# 208 "data/maps/SeafloorCavern_Room9/scripts.pory"
	unlock_facing_direction
# 209 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_in_place_faster_right
# 210 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 211 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 212 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreApproach:
# 213 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 214 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 215 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 216 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 217 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 218 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 219 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_slow_down
# 220 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 221 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 222 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 223 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 224 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 225 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_KyogreExit:
# 226 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 227 "data/maps/SeafloorCavern_Room9/scripts.pory"
	slide_up
# 228 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 229 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 230 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieArrive:
# 231 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 232 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 233 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 234 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 235 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 236 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 237 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 238 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MaxieExit:
# 239 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 240 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_right
# 241 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 242 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 243 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_MagmaGruntArrive:
# 244 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 245 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 246 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 247 "data/maps/SeafloorCavern_Room9/scripts.pory"
	walk_fast_right
# 248 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 249 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 250 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Movement_Delay32:
# 251 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 252 "data/maps/SeafloorCavern_Room9/scripts.pory"
	delay_16
# 253 "data/maps/SeafloorCavern_Room9/scripts.pory"
	step_end
# 254 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 255 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieHoldItRightThere:
# 256 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hold it right there.$"
# 257 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 258 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieSoItWasYou:
# 259 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\n"
# 260 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So it was you, after all.$"
# 261 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 262 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieBeholdKyogre:
# 263 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Behold!\p"
# 264 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See how beautiful it is, the sleeping\n"
# 265 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "form of the ancient POKéMON KYOGRE!\p"
# 266 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have waited so long for this day to\n"
# 267 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "come…$"
# 268 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 269 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieYouMustDisappear:
# 270 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: It surprises me, how you've\n"
# 271 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "managed to chase me here.\p"
# 272 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But that's all over now.\p"
# 273 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "For the realization of my dream,\n"
# 274 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you must disappear now!$"
# 275 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 276 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDefeat:
# 277 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\n"
# 278 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I lost to a mere child like you?!$"
# 279 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 280 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWithThisRedOrb:
# 281 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Fufufu…\p"
# 282 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I commend you. I must recognize that\n"
# 283 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "you are truly gifted.\p"
# 284 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But!\n"
# 285 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I have this in my possession!\p"
# 286 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "With this RED ORB, I can make KYOGRE…$"
# 287 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 288 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_RedOrbShinesByItself:
# 289 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB suddenly began shining\n"
# 290 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "by itself!$"
# 291 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 292 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhereDidKyogreGo:
# 293 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: What?!\p"
# 294 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I didn't do anything.\n"
# 295 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did the RED ORB…\p"
# 296 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Where did KYOGRE go?$"
# 297 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 298 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieAMessageFromOutside:
# 299 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Hm? It's a message from our\n"
# 300 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "members outside…$"
# 301 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 302 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhatRainingTooHard:
# 303 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: Yes, what is it?\p"
# 304 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hm…\n"
# 305 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining heavily?\p"
# 306 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Good… That should have happened.\n"
# 307 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That is why we awakened KYOGRE,\l"
# 308 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to realize TEAM AQUA's vision of\l"
# 309 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "expanding the sea.\p"
# 310 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What?!\p"
# 311 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "It's raining far harder than we\n"
# 312 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "envisioned? You're in danger?\p"
# 313 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That can't be…\n"
# 314 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "That's just not possible…\p"
# 315 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Hold your position and monitor\n"
# 316 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the situation!$"
# 317 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 318 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieWhyDidKyogreDisappear:
# 319 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: There's something wrong…\p"
# 320 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The RED ORB is supposed to awaken\n"
# 321 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "and control KYOGRE…\p"
# 322 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "But… Why?\n"
# 323 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why did KYOGRE disappear?\p"
# 324 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Why?!$"
# 325 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 326 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWhatHaveYouWrought:
# 327 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: What have you wrought?\p"
# 328 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE… You've finally awoken KYOGRE,\n"
# 329 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "haven't you?\p"
# 330 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "What will happen to the world if this\n"
# 331 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "downpour continues for all eternity?\p"
# 332 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "The world's landmass will drown in\n"
# 333 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "the deepening sea…$"
# 334 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 335 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_ArchieDontGetAllHighAndMighty:
# 336 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "ARCHIE: W-what?!\n"
# 337 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Don't get all high and mighty with me!\p"
# 338 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Wasn't it you, TEAM MAGMA, that\n"
# 339 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "infuriated GROUDON?\p"
# 340 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "So long as I have this RED ORB,\n"
# 341 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control KYOGRE…\p"
# 342 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "I should be able to control it…$"
# 343 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 344 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieWeDontHaveTimeToArgue:
# 345 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: We don't have the time to\n"
# 346 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "argue about it here!\p"
# 347 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "Get outside and see for yourself!\p"
# 348 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "See if what you've wrought is the\n"
# 349 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "world that we desired!$"
# 350 "data/maps/SeafloorCavern_Room9/scripts.pory"

# 351 "data/maps/SeafloorCavern_Room9/scripts.pory"
SeafloorCavern_Room9_Text_MaxieComeOnPlayer:
# 352 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "MAXIE: {PLAYER}, come on, you have\n"
# 353 "data/maps/SeafloorCavern_Room9/scripts.pory"
	.string "to get out of here, too!$"
