# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_BRIDGE_KECLEON_SHADOW, 36  @ They use a second object which is identical to Kecleon but has a reflection palette tag for the bridge shadow
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts::
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume:
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject::
# 17 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 0, Route120_EventScript_RemoveBridgeKecleon
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 1, Route120_EventScript_RemoveKecleon
# 19 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 2, Route120_EventScript_RemoveKecleon
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 3, Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 4, Route120_EventScript_RemoveKecleon
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_0x8009, 5, Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	return
# 24 "data/maps/Route120/scripts.pory"

# 25 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon::
# 26 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 27 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 28 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 29 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 30 "data/maps/Route120/scripts.pory"
	return
# 31 "data/maps/Route120/scripts.pory"

# 32 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon::
# 33 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/Route120/scripts.pory"
	return
# 37 "data/maps/Route120/scripts.pory"

# 38 "data/maps/Route120/scripts.pory"
Route120_OnLoad:
# 39 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 40 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 41 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 42 "data/maps/Route120/scripts.pory"
	end
# 43 "data/maps/Route120/scripts.pory"

# 44 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb::
# 45 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, TRUE
# 46 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, TRUE
# 47 "data/maps/Route120/scripts.pory"
	return
# 48 "data/maps/Route120/scripts.pory"

# 49 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles::
# 50 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 51 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 52 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 54 "data/maps/Route120/scripts.pory"
	return
# 55 "data/maps/Route120/scripts.pory"

# 56 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement::
# 57 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_BRIDGE_KECLEON_SHADOW, MOVEMENT_TYPE_FACE_RIGHT
# 58 "data/maps/Route120/scripts.pory"
	return
# 59 "data/maps/Route120/scripts.pory"

# 60 "data/maps/Route120/scripts.pory"
Route120_OnTransition:
# 61 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 62 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 63 "data/maps/Route120/scripts.pory"
	end
# 64 "data/maps/Route120/scripts.pory"

# 65 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather::
# 66 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 67 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 14, Route120_EventScript_SetSunnyWeather
# 68 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_1, 60, Route120_EventScript_TrySetRainyWeather
# 69 "data/maps/Route120/scripts.pory"
	goto_if_ge VAR_TEMP_1, 61, Route120_EventScript_SetCloudyWeather
# 70 "data/maps/Route120/scripts.pory"
	return
# 71 "data/maps/Route120/scripts.pory"

# 72 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather::
# 73 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 74 "data/maps/Route120/scripts.pory"
	return
# 75 "data/maps/Route120/scripts.pory"

# 76 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather::
# 77 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 78 "data/maps/Route120/scripts.pory"
	return
# 79 "data/maps/Route120/scripts.pory"

# 80 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather::
# 81 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 7, Route120_EventScript_SetRainyWeather
# 82 "data/maps/Route120/scripts.pory"
	goto_if_le VAR_TEMP_0, 19, Route120_EventScript_SetSunnyWeather
# 83 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 84 "data/maps/Route120/scripts.pory"
	end
# 85 "data/maps/Route120/scripts.pory"

# 86 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather::
# 87 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 88 "data/maps/Route120/scripts.pory"
	return
# 89 "data/maps/Route120/scripts.pory"

# 90 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty::
# 91 "data/maps/Route120/scripts.pory"
	lock
# 92 "data/maps/Route120/scripts.pory"
	faceplayer
# 93 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 94 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 95 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 96 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route120_EventScript_BerryLove
# 97 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route120_EventScript_BerryNotLove
# 98 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 99 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 100 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 101 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 102 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 103 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 104 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 105 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 106 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 107 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 108 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 109 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 110 "data/maps/Route120/scripts.pory"
	end
# 111 "data/maps/Route120/scripts.pory"

# 112 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry::
# 113 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 114 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 115 "data/maps/Route120/scripts.pory"
	end
# 116 "data/maps/Route120/scripts.pory"

# 117 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry::
# 118 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 119 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 120 "data/maps/Route120/scripts.pory"
	end
# 121 "data/maps/Route120/scripts.pory"

# 122 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry::
# 123 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 124 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 125 "data/maps/Route120/scripts.pory"
	end
# 126 "data/maps/Route120/scripts.pory"

# 127 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry::
# 128 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 129 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry::
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry::
# 138 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 139 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 140 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 141 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 142 "data/maps/Route120/scripts.pory"
	release
# 143 "data/maps/Route120/scripts.pory"
	end
# 144 "data/maps/Route120/scripts.pory"

# 145 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry::
# 146 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 147 "data/maps/Route120/scripts.pory"
	release
# 148 "data/maps/Route120/scripts.pory"
	end
# 149 "data/maps/Route120/scripts.pory"

# 150 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove::
# 151 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 152 "data/maps/Route120/scripts.pory"
	return
# 153 "data/maps/Route120/scripts.pory"

# 154 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove::
# 155 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 156 "data/maps/Route120/scripts.pory"
	return
# 157 "data/maps/Route120/scripts.pory"

# 158 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven::
# 159 "data/maps/Route120/scripts.pory"
	lock
# 160 "data/maps/Route120/scripts.pory"
	faceplayer
# 161 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 162 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 163 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 164 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 165 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 166 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 167 "data/maps/Route120/scripts.pory"
	end
# 168 "data/maps/Route120/scripts.pory"

# 169 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady::
# 170 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 171 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 172 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 173 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 174 "data/maps/Route120/scripts.pory"
	release
# 175 "data/maps/Route120/scripts.pory"
	end
# 176 "data/maps/Route120/scripts.pory"

# 177 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle::
# 178 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 179 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 180 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 181 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route120_EventScript_StevenNotReady
# 182 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 183 "data/maps/Route120/scripts.pory"
	end
# 184 "data/maps/Route120/scripts.pory"

# 185 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon::
# 186 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 187 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 188 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 189 "data/maps/Route120/scripts.pory"
	closemessage
# 190 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Route120_EventScript_PlayerApproachKecleonNorth
# 191 "data/maps/Route120/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Route120_EventScript_PlayerApproachKecleonWest
# 192 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterLeft
# 193 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 194 "data/maps/Route120/scripts.pory"
	delay 20
# 195 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 196 "data/maps/Route120/scripts.pory"
	closemessage
# 197 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_BRIDGE_KECLEON, Movement_KecleonAppears
# 200 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route120/scripts.pory"
	waitse
# 202 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 203 "data/maps/Route120/scripts.pory"
	delay 40
# 204 "data/maps/Route120/scripts.pory"
	waitmoncry
# 205 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30
# 206 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 207 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 208 "data/maps/Route120/scripts.pory"
	dowildbattle
# 209 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 210 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 211 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 212 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 213 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route120_EventScript_RemoveBridgeKecleonPostBattle
# 214 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 215 "data/maps/Route120/scripts.pory"
	end
# 216 "data/maps/Route120/scripts.pory"

# 217 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle::
# 218 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 219 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON
# 220 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_BRIDGE_KECLEON_SHADOW
# 221 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 222 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 223 "data/maps/Route120/scripts.pory"
	end
# 224 "data/maps/Route120/scripts.pory"

# 225 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope::
# 226 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 227 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 228 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 229 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 230 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 231 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 232 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 233 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 234 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 235 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveMegaStones, MSGBOX_DEFAULT
# 236 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 237 "data/maps/Route120/scripts.pory"
	giveitem ITEM_SWAMPERTITE
# 238 "data/maps/Route120/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 239 "data/maps/Route120/scripts.pory"
	giveitem ITEM_SCEPTILITE
# 240 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_STEVEN_MEGA_STONES
# 241 "data/maps/Route120/scripts.pory"
	createfieldmugshot MUGSHOT_STEVEN, EMOTE_NORMAL
# 242 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 243 "data/maps/Route120/scripts.pory"
	removefieldmugshot
# 244 "data/maps/Route120/scripts.pory"
	closemessage
# 245 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFasterDown
# 246 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route120/scripts.pory"
	delay 50
# 248 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 249 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 250 "data/maps/Route120/scripts.pory"
	delay 15
# 251 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 252 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 253 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, FALSE
# 254 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, FALSE
# 255 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, FALSE
# 256 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, FALSE
# 257 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 258 "data/maps/Route120/scripts.pory"
	release
# 259 "data/maps/Route120/scripts.pory"
	end
# 260 "data/maps/Route120/scripts.pory"

# 261 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth::
# 262 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 263 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 264 "data/maps/Route120/scripts.pory"
	return
# 265 "data/maps/Route120/scripts.pory"

# 266 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest::
# 267 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 268 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route120/scripts.pory"
	return
# 270 "data/maps/Route120/scripts.pory"

# 271 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest:
# 272 "data/maps/Route120/scripts.pory"
	walk_down
# 273 "data/maps/Route120/scripts.pory"
	walk_left
# 274 "data/maps/Route120/scripts.pory"
	step_end
# 275 "data/maps/Route120/scripts.pory"

# 276 "data/maps/Route120/scripts.pory"
Route120_EventScript_BridgeKecleon::
# 277 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 278 "data/maps/Route120/scripts.pory"
	end
# 279 "data/maps/Route120/scripts.pory"

# 280 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree::
# 281 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 282 "data/maps/Route120/scripts.pory"
	end
# 283 "data/maps/Route120/scripts.pory"

# 284 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121::
# 285 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 286 "data/maps/Route120/scripts.pory"
	end
# 287 "data/maps/Route120/scripts.pory"

# 288 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin::
# 289 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 290 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 291 "data/maps/Route120/scripts.pory"
	end
# 292 "data/maps/Route120/scripts.pory"

# 293 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert::
# 294 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 295 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 296 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchRobert
# 297 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 298 "data/maps/Route120/scripts.pory"
	release
# 299 "data/maps/Route120/scripts.pory"
	end
# 300 "data/maps/Route120/scripts.pory"

# 301 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert::
# 302 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 303 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 305 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 306 "data/maps/Route120/scripts.pory"
	release
# 307 "data/maps/Route120/scripts.pory"
	end
# 308 "data/maps/Route120/scripts.pory"

# 309 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert::
# 310 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 311 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route120/scripts.pory"
	end
# 313 "data/maps/Route120/scripts.pory"

# 314 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo::
# 315 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 316 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route120/scripts.pory"
	end
# 318 "data/maps/Route120/scripts.pory"

# 319 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna::
# 320 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 321 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route120/scripts.pory"
	end
# 323 "data/maps/Route120/scripts.pory"

# 324 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey::
# 325 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 326 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 327 "data/maps/Route120/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route120_EventScript_RematchJeffrey
# 328 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 329 "data/maps/Route120/scripts.pory"
	release
# 330 "data/maps/Route120/scripts.pory"
	end
# 331 "data/maps/Route120/scripts.pory"

# 332 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey::
# 333 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 334 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 336 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 337 "data/maps/Route120/scripts.pory"
	release
# 338 "data/maps/Route120/scripts.pory"
	end
# 339 "data/maps/Route120/scripts.pory"

# 340 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey::
# 341 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 342 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 343 "data/maps/Route120/scripts.pory"
	end
# 344 "data/maps/Route120/scripts.pory"

# 345 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer::
# 346 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 347 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 348 "data/maps/Route120/scripts.pory"
	end
# 349 "data/maps/Route120/scripts.pory"

# 350 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip::
# 351 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 352 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 353 "data/maps/Route120/scripts.pory"
	end
# 354 "data/maps/Route120/scripts.pory"

# 355 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa::
# 356 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 357 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 358 "data/maps/Route120/scripts.pory"
	end
# 359 "data/maps/Route120/scripts.pory"

# 360 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica::
# 361 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 362 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/Route120/scripts.pory"
	end
# 364 "data/maps/Route120/scripts.pory"

# 365 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo::
# 366 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 367 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/Route120/scripts.pory"
	end
# 369 "data/maps/Route120/scripts.pory"

# 370 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley::
# 371 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 372 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route120/scripts.pory"
	end
# 374 "data/maps/Route120/scripts.pory"

# 375 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel::
# 376 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 377 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/Route120/scripts.pory"
	end
# 379 "data/maps/Route120/scripts.pory"

# 380 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie::
# 381 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 382 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 383 "data/maps/Route120/scripts.pory"
	end
# 384 "data/maps/Route120/scripts.pory"

# 385 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting:
# 386 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Hm? {PLAYER}{KUN}, hi.\n"
# 387 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 388 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 389 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 390 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 391 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 392 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 393 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 394 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 395 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your POKéMON ready for\n"
# 396 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 397 "data/maps/Route120/scripts.pory"

# 398 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere:
# 399 "data/maps/Route120/scripts.pory"
	.string "STEVEN: No?\p"
# 400 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 401 "data/maps/Route120/scripts.pory"

# 402 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle:
# 403 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, are your POKéMON\n"
# 404 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 405 "data/maps/Route120/scripts.pory"

# 406 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower:
# 407 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}, show me your true\n"
# 408 "data/maps/Route120/scripts.pory"
	.string "power as a TRAINER!$"
# 409 "data/maps/Route120/scripts.pory"

# 410 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope:
# 411 "data/maps/Route120/scripts.pory"
	.string "STEVEN used the DEVON SCOPE.\p"
# 412 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 413 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 414 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 415 "data/maps/Route120/scripts.pory"

# 416 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope:
# 417 "data/maps/Route120/scripts.pory"
	.string "STEVEN: I see…\n"
# 418 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 419 "data/maps/Route120/scripts.pory"
	.string "Your POKéMON have obviously grown\n"
# 420 "data/maps/Route120/scripts.pory"
	.string "since I first met you in DEWFORD.\p"
# 421 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 422 "data/maps/Route120/scripts.pory"
	.string "DEVON SCOPE.\p"
# 423 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 424 "data/maps/Route120/scripts.pory"
	.string "concealed POKéMON.$"
# 425 "data/maps/Route120/scripts.pory"

# 426 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye:
# 427 "data/maps/Route120/scripts.pory"
	.string "STEVEN: {PLAYER}{KUN}.\p"
# 428 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing POKéMON and TRAINERS\n"
# 429 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 430 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 431 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 432 "data/maps/Route120/scripts.pory"

# 433 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable:
# 434 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 435 "data/maps/Route120/scripts.pory"

# 436 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope:
# 437 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 438 "data/maps/Route120/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 439 "data/maps/Route120/scripts.pory"

# 440 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked:
# 441 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 442 "data/maps/Route120/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 443 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 444 "data/maps/Route120/scripts.pory"
	.string "The startled POKéMON attacked!$"
# 445 "data/maps/Route120/scripts.pory"

# 446 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree:
# 447 "data/maps/Route120/scripts.pory"
	.string "ROUTE 120\n"
# 448 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} FORTREE CITY$"
# 449 "data/maps/Route120/scripts.pory"

# 450 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121:
# 451 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 121\n"
# 452 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 120$"
# 453 "data/maps/Route120/scripts.pory"

# 454 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveMegaStones:
# 455 "data/maps/Route120/scripts.pory"
	.string "STEVEN: Also, take these for your\n"
# 456 "data/maps/Route120/scripts.pory"
	.string "POKéMON. It may be useful to you.$"
