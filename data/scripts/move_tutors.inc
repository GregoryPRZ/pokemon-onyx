SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto MoveTutor_EventScript_SwaggerTaught
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	goto MoveTutor_EventScript_MetronomeTaught
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	goto MoveTutor_EventScript_SubstituteTaught
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_EXPLOSION
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

MoveTutor_EventScript_MoveTutorSection::
	lock
	faceplayer
	msgbox MoveTutor_Text_Welcome, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_Section1, 0
    dynmultipush MoveTutor_Text_Section2, 1
    dynmultipush MoveTutor_Text_Section3, 2
    dynmultipush MoveTutor_Text_Section4, 3
    dynmultipush MoveTutor_Text_Section5, 4
    dynmultipush MoveTutor_Text_Section6, 5
    dynmultipush MoveTutor_Text_Section7, 6
    dynmultipush MoveTutor_Text_Section8, 7
    dynmultipush MoveTutor_Text_Section9, 8
    dynmultipush MoveTutor_Text_Section10, 9
    dynmultipush MoveTutor_Text_Exit, 10
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section1_EventScript_MoveTutor
    case 1, MoveTutor_Section2_EventScript_MoveTutor
    case 2, MoveTutor_Section3_EventScript_MoveTutor
    case 3, MoveTutor_Section4_EventScript_MoveTutor
    case 4, MoveTutor_Section5_EventScript_MoveTutor
    case 5, MoveTutor_Section6_EventScript_MoveTutor
    case 6, MoveTutor_Section7_EventScript_MoveTutor
    case 7, MoveTutor_Section8_EventScript_MoveTutor
    case 8, MoveTutor_Section9_EventScript_MoveTutor
    case 9, MoveTutor_Section10_EventScript_MoveTutor
	case 10, MoveTutor_Section1_EventScript_ExitTutorMoveSelect
	end
	end


MoveTutor_Section1_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE01_GET, MoveTutor_Section1_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section1_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_FireFang, 0
    dynmultipush MoveTutor_Text_ThunderFang, 1
    dynmultipush MoveTutor_Text_IceFang, 2
    dynmultipush MoveTutor_Text_IceBall, 3
    dynmultipush MoveTutor_Text_Snore, 4
    dynmultipush MoveTutor_Text_Bind, 5
    dynmultipush MoveTutor_Text_Electroweb, 6
    dynmultipush MoveTutor_Text_Uproar, 7
    dynmultipush MoveTutor_Text_Recycle, 8
    dynmultipush MoveTutor_Text_HelpingHand, 9
    dynmultipush MoveTutor_Text_Spikes, 10
    dynmultipush MoveTutor_Text_IcyWind, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section1_EventScript_FireFangTutor
    case 1, MoveTutor_Section1_EventScript_ThunderFangTutor
    case 2, MoveTutor_Section1_EventScript_IceFangTutor
    case 3, MoveTutor_Section1_EventScript_IceBallTutor
    case 4, MoveTutor_Section1_EventScript_SnoreTutor
    case 5, MoveTutor_Section1_EventScript_BindTutor
    case 6, MoveTutor_Section1_EventScript_ElectrowebTutor
    case 7, MoveTutor_Section1_EventScript_UproarTutor
    case 8, MoveTutor_Section1_EventScript_RecycleTutor
    case 9, MoveTutor_Section1_EventScript_HelpingHandTutor
    case 10, MoveTutor_Section1_EventScript_SpikesTutor
    case 11, MoveTutor_Section1_EventScript_IcyWindTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section1_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section1_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section1_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section1_EventScript_TeachTutorMove
	goto MoveTutor_Section1_EventScript_ChooseNewMove
	end


MoveTutor_Section1_EventScript_ChooseNewMove::
	goto MoveTutor_Section1_EventScript_TutorMove
	end


MoveTutor_Section1_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section1_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section1_EventScript_ThunderFangTutor::
	setvar VAR_0x8005, MOVE_THUNDER_FANG
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_FireFangTutor::
	setvar VAR_0x8005, MOVE_FIRE_FANG
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_IceFangTutor::
	setvar VAR_0x8005, MOVE_ICE_FANG
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section1_EventScript_IceBallTutor::
	setvar VAR_0x8005, MOVE_ICE_BALL
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_SnoreTutor::
	setvar VAR_0x8005, MOVE_SNORE
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_ElectrowebTutor::
	setvar VAR_0x8005, MOVE_ELECTROWEB
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section1_EventScript_BindTutor::
	setvar VAR_0x8005, MOVE_BIND
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_UproarTutor::
	setvar VAR_0x8005, MOVE_UPROAR
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_RecycleTutor::
	setvar VAR_0x8005, MOVE_RECYCLE
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section1_EventScript_HelpingHandTutor::
	setvar VAR_0x8005, MOVE_HELPING_HAND
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_SpikesTutor::
	setvar VAR_0x8005, MOVE_SPIKES
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section1_EventScript_IcyWindTutor::
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto MoveTutor_Section1_EventScript_ConfirmMoveSelection
	end






MoveTutor_Section2_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE02_GET, MoveTutor_Section2_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end



MoveTutor_Section2_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_FireSpin, 0
    dynmultipush MoveTutor_Text_SandTomb, 1
    dynmultipush MoveTutor_Text_Whirlpool, 2
    dynmultipush MoveTutor_Text_AirCutter, 3
    dynmultipush MoveTutor_Text_LowKick, 4
    dynmultipush MoveTutor_Text_Covet, 5
    dynmultipush MoveTutor_Text_HealBell, 6
    dynmultipush MoveTutor_Text_Endure, 7
    dynmultipush MoveTutor_Text_BugBite, 8
    dynmultipush MoveTutor_Text_Pounce, 9
    dynmultipush MoveTutor_Text_ChillingWater, 10
    dynmultipush MoveTutor_Text_Trailblaze, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section2_EventScript_FireSpinTutor
    case 1, MoveTutor_Section2_EventScript_SandTombTutor
    case 2, MoveTutor_Section2_EventScript_WhirlpoolTutor
    case 3, MoveTutor_Section2_EventScript_AirCutterTutor
    case 4, MoveTutor_Section2_EventScript_LowKickTutor
    case 5, MoveTutor_Section2_EventScript_CovetTutor
    case 6, MoveTutor_Section2_EventScript_HealBellTutor
    case 7, MoveTutor_Section2_EventScript_EndureTutor
    case 8, MoveTutor_Section2_EventScript_BugBiteTutor
    case 9, MoveTutor_Section2_EventScript_PounceTutor
    case 10, MoveTutor_Section2_EventScript_ChillingWaterTutor
    case 11, MoveTutor_Section2_EventScript_TrailblazeTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section2_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section2_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section2_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section2_EventScript_TeachTutorMove
	goto MoveTutor_Section2_EventScript_ChooseNewMove
	end


MoveTutor_Section2_EventScript_ChooseNewMove::
	goto MoveTutor_Section2_EventScript_TutorMove
	end


MoveTutor_Section2_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section2_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section2_EventScript_FireSpinTutor::
	setvar VAR_0x8005, MOVE_FIRE_SPIN
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_SandTombTutor::
	setvar VAR_0x8005, MOVE_SAND_TOMB
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section2_EventScript_WhirlpoolTutor::
	setvar VAR_0x8005, MOVE_WHIRLPOOL
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_AirCutterTutor::
	setvar VAR_0x8005, MOVE_AIR_CUTTER
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_LowKickTutor::
	setvar VAR_0x8005, MOVE_LOW_KICK
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section2_EventScript_CovetTutor::
	setvar VAR_0x8005, MOVE_COVET
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_HealBellTutor::
	setvar VAR_0x8005, MOVE_HEAL_BELL
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_EndureTutor::
	setvar VAR_0x8005, MOVE_ENDURE
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section2_EventScript_BugBiteTutor::
	setvar VAR_0x8005, MOVE_BUG_BITE
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_PounceTutor::
	setvar VAR_0x8005, MOVE_POUNCE
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_ChillingWaterTutor::
	setvar VAR_0x8005, MOVE_CHILLING_WATER
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section2_EventScript_TrailblazeTutor::
	setvar VAR_0x8005, MOVE_TRAILBLAZE
	goto MoveTutor_Section2_EventScript_ConfirmMoveSelection
	end






MoveTutor_Section3_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE02_GET, MoveTutor_Section3_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section3_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_FirePunch, 0
    dynmultipush MoveTutor_Text_IcePunch, 1
    dynmultipush MoveTutor_Text_ThunderPunch, 2
    dynmultipush MoveTutor_Text_LowSweep, 3
    dynmultipush MoveTutor_Text_MudShot, 4
    dynmultipush MoveTutor_Text_Avalanche, 5
    dynmultipush MoveTutor_Text_ElectroBall, 6
    dynmultipush MoveTutor_Text_Encore, 7
    dynmultipush MoveTutor_Text_StruggleBug, 8
    dynmultipush MoveTutor_Text_FirePledge, 9
    dynmultipush MoveTutor_Text_GrassPledge, 10
    dynmultipush MoveTutor_Text_WaterPledge, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section3_EventScript_FirePunchTutor
    case 1, MoveTutor_Section3_EventScript_IcePunchTutor
    case 2, MoveTutor_Section3_EventScript_ThunderPunchTutor
    case 3, MoveTutor_Section3_EventScript_LowSweepTutor
    case 4, MoveTutor_Section3_EventScript_MudShotTutor
    case 5, MoveTutor_Section3_EventScript_AvalancheTutor
    case 6, MoveTutor_Section3_EventScript_ElectroBallTutor
    case 7, MoveTutor_Section3_EventScript_EncoreTutor
    case 8, MoveTutor_Section3_EventScript_StruggleBugTutor
    case 9, MoveTutor_Section3_EventScript_FirePledgeTutor
    case 10, MoveTutor_Section3_EventScript_GrassPledgeTutor
    case 11, MoveTutor_Section3_EventScript_WaterPledgeTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section3_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section3_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section3_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section3_EventScript_TeachTutorMove
	goto MoveTutor_Section3_EventScript_ChooseNewMove
	end


MoveTutor_Section3_EventScript_ChooseNewMove::
	goto MoveTutor_Section3_EventScript_TutorMove
	end


MoveTutor_Section3_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section3_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section3_EventScript_FirePunchTutor::
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_IcePunchTutor::
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section3_EventScript_ThunderPunchTutor::
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_LowSweepTutor::
	setvar VAR_0x8005, MOVE_LOW_SWEEP
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_MudShotTutor::
	setvar VAR_0x8005, MOVE_MUD_SHOT
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section3_EventScript_AvalancheTutor::
	setvar VAR_0x8005, MOVE_AVALANCHE
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_ElectroBallTutor::
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_EncoreTutor::
	setvar VAR_0x8005, MOVE_ENCORE
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section3_EventScript_StruggleBugTutor::
	setvar VAR_0x8005, MOVE_STRUGGLE_BUG
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_FirePledgeTutor::
	setvar VAR_0x8005, MOVE_FIRE_PLEDGE
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_GrassPledgeTutor::
	setvar VAR_0x8005, MOVE_GRASS_PLEDGE
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section3_EventScript_WaterPledgeTutor::
	setvar VAR_0x8005, MOVE_WATER_PLEDGE
	goto MoveTutor_Section3_EventScript_ConfirmMoveSelection
	end






MoveTutor_Section4_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE03_GET, MoveTutor_Section4_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section4_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_StompingTantrum, 0
    dynmultipush MoveTutor_Text_PsychoCut, 1
    dynmultipush MoveTutor_Text_Bounce, 2
    dynmultipush MoveTutor_Text_MuddyWater, 3
    dynmultipush MoveTutor_Text_Trick, 4
    dynmultipush MoveTutor_Text_SeedBomb, 5
    dynmultipush MoveTutor_Text_Hex, 6
    dynmultipush MoveTutor_Text_PainSplit, 7
    dynmultipush MoveTutor_Text_KnockOff, 8
    dynmultipush MoveTutor_Text_SuperFang, 9
    dynmultipush MoveTutor_Text_ToxicSpikes, 10
    dynmultipush MoveTutor_Text_DualChop, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section4_EventScript_StompingTantrumTutor
    case 1, MoveTutor_Section4_EventScript_PsychoCutTutor
    case 2, MoveTutor_Section4_EventScript_BounceTutor
    case 3, MoveTutor_Section4_EventScript_MuddyWaterTutor
    case 4, MoveTutor_Section4_EventScript_TrickTutor
    case 5, MoveTutor_Section4_EventScript_SeedBombTutor
    case 6, MoveTutor_Section4_EventScript_HexTutor
    case 7, MoveTutor_Section4_EventScript_PainSplitTutor
    case 8, MoveTutor_Section4_EventScript_KnockOffTutor
    case 9, MoveTutor_Section4_EventScript_SuperFangTutor
    case 10, MoveTutor_Section4_EventScript_ToxicSpikesTutor
    case 11, MoveTutor_Section4_EventScript_DualChopTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section4_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section4_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section4_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section4_EventScript_TeachTutorMove
	goto MoveTutor_Section4_EventScript_ChooseNewMove
	end


MoveTutor_Section4_EventScript_ChooseNewMove::
	goto MoveTutor_Section4_EventScript_TutorMove
	end


MoveTutor_Section4_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section4_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section4_EventScript_StompingTantrumTutor::
	setvar VAR_0x8005, MOVE_STOMPING_TANTRUM
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_PsychoCutTutor::
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section4_EventScript_BounceTutor::
	setvar VAR_0x8005, MOVE_BOUNCE
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_MuddyWaterTutor::
	setvar VAR_0x8005, MOVE_MUDDY_WATER
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_TrickTutor::
	setvar VAR_0x8005, MOVE_TRICK
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section4_EventScript_SeedBombTutor::
	setvar VAR_0x8005, MOVE_SEED_BOMB
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_HexTutor::
	setvar VAR_0x8005, MOVE_HEX
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_PainSplitTutor::
	setvar VAR_0x8005, MOVE_PAIN_SPLIT
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section4_EventScript_KnockOffTutor::
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_SuperFangTutor::
	setvar VAR_0x8005, MOVE_SUPER_FANG
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_ToxicSpikesTutor::
	setvar VAR_0x8005, MOVE_TOXIC_SPIKES
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section4_EventScript_DualChopTutor::
	setvar VAR_0x8005, MOVE_DUAL_CHOP
	goto MoveTutor_Section4_EventScript_ConfirmMoveSelection
	end






MoveTutor_Section6_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE05_GET, MoveTutor_Section6_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section6_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_DrillRun, 0
    dynmultipush MoveTutor_Text_ZenHeadbutt, 1
    dynmultipush MoveTutor_Text_SmartStrike, 2
    dynmultipush MoveTutor_Text_Tailwind, 3
    dynmultipush MoveTutor_Text_SignalBeam, 4
    dynmultipush MoveTutor_Text_AquaTail, 5
    dynmultipush MoveTutor_Text_BodySlam, 6
    dynmultipush MoveTutor_Text_IronDefense, 7
    dynmultipush MoveTutor_Text_Amnesia, 8
    dynmultipush MoveTutor_Text_AirSlash, 9
    dynmultipush MoveTutor_Text_PowerGem, 10
    dynmultipush MoveTutor_Text_Haze, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section6_EventScript_DrillRunTutor
    case 1, MoveTutor_Section6_EventScript_ZenHeadbuttTutor
    case 2, MoveTutor_Section6_EventScript_SmartStrikeTutor
    case 3, MoveTutor_Section6_EventScript_TailwindTutor
    case 4, MoveTutor_Section6_EventScript_SignalBeamTutor
    case 5, MoveTutor_Section6_EventScript_AquaTailTutor
    case 6, MoveTutor_Section6_EventScript_BodySlamTutor
    case 7, MoveTutor_Section6_EventScript_IronDefenseTutor
    case 8, MoveTutor_Section6_EventScript_AmnesiaTutor
    case 9, MoveTutor_Section6_EventScript_AirSlashTutor
    case 10, MoveTutor_Section6_EventScript_PowerGemTutor
    case 11, MoveTutor_Section6_EventScript_HazeTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section6_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section6_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section6_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section6_EventScript_TeachTutorMove
	goto MoveTutor_Section6_EventScript_ChooseNewMove
	end


MoveTutor_Section6_EventScript_ChooseNewMove::
	goto MoveTutor_Section6_EventScript_TutorMove
	end


MoveTutor_Section6_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section6_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section6_EventScript_DrillRunTutor::
	setvar VAR_0x8005, MOVE_DRILL_RUN
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_ZenHeadbuttTutor::
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section6_EventScript_SmartStrikeTutor::
	setvar VAR_0x8005, MOVE_SMART_STRIKE
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_TailwindTutor::
	setvar VAR_0x8005, MOVE_TAILWIND
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_SignalBeamTutor::
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section6_EventScript_AquaTailTutor::
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_BodySlamTutor::
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_IronDefenseTutor::
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section6_EventScript_AmnesiaTutor::
	setvar VAR_0x8005, MOVE_AMNESIA
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_AirSlashTutor::
	setvar VAR_0x8005, MOVE_AIR_SLASH
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_PowerGemTutor::
	setvar VAR_0x8005, MOVE_POWER_GEM
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section6_EventScript_HazeTutor::
	setvar VAR_0x8005, MOVE_HAZE
	goto MoveTutor_Section6_EventScript_ConfirmMoveSelection
	end




MoveTutor_Section7_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE06_GET, MoveTutor_Section7_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section7_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_HighHorsepower, 0
    dynmultipush MoveTutor_Text_PsychicFangs, 1
    dynmultipush MoveTutor_Text_IronHead, 2
    dynmultipush MoveTutor_Text_HeatWave, 3
    dynmultipush MoveTutor_Text_BugBuzz, 4
    dynmultipush MoveTutor_Text_Liquidation, 5
    dynmultipush MoveTutor_Text_DragonTail, 6
    dynmultipush MoveTutor_Text_HyperVoice, 7
    dynmultipush MoveTutor_Text_LeechLife, 8
    dynmultipush MoveTutor_Text_NastyPlot, 9
    dynmultipush MoveTutor_Text_SwordsDance, 10
    dynmultipush MoveTutor_Text_DragonDance, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section7_EventScript_HighHorsepowerTutor
    case 1, MoveTutor_Section7_EventScript_PsychicFangsTutor
    case 2, MoveTutor_Section7_EventScript_IronHeadTutor
    case 3, MoveTutor_Section7_EventScript_HeatWaveTutor
    case 4, MoveTutor_Section7_EventScript_BugBuzzTutor
    case 5, MoveTutor_Section7_EventScript_LiquidationTutor
    case 6, MoveTutor_Section7_EventScript_DragonTailTutor
    case 7, MoveTutor_Section7_EventScript_HyperVoiceTutor
    case 8, MoveTutor_Section7_EventScript_LeechLifeTutor
    case 9, MoveTutor_Section7_EventScript_NastyPlotTutor
    case 10, MoveTutor_Section7_EventScript_SwordsDanceTutor
    case 11, MoveTutor_Section7_EventScript_DragonDanceTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section7_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section7_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section7_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section7_EventScript_TeachTutorMove
	goto MoveTutor_Section7_EventScript_ChooseNewMove
	end


MoveTutor_Section7_EventScript_ChooseNewMove::
	goto MoveTutor_Section7_EventScript_TutorMove
	end


MoveTutor_Section7_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section7_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section7_EventScript_HighHorsepowerTutor::
	setvar VAR_0x8005, MOVE_HIGH_HORSEPOWER
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_PsychicFangsTutor::
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section7_EventScript_IronHeadTutor::
	setvar VAR_0x8005, MOVE_IRON_HEAD
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_HeatWaveTutor::
	setvar VAR_0x8005, MOVE_HEAT_WAVE
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_BugBuzzTutor::
	setvar VAR_0x8005, MOVE_BUG_BUZZ
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section7_EventScript_LiquidationTutor::
	setvar VAR_0x8005, MOVE_LIQUIDATION
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_DragonTailTutor::
	setvar VAR_0x8005, MOVE_DRAGON_TAIL
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_HyperVoiceTutor::
	setvar VAR_0x8005, MOVE_HYPER_VOICE
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section7_EventScript_LeechLifeTutor::
	setvar VAR_0x8005, MOVE_LEECH_LIFE
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_NastyPlotTutor::
	setvar VAR_0x8005, MOVE_NASTY_PLOT
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_SwordsDanceTutor::
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section7_EventScript_DragonDanceTutor::
	setvar VAR_0x8005, MOVE_DRAGON_DANCE
	goto MoveTutor_Section7_EventScript_ConfirmMoveSelection
	end



MoveTutor_Section8_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE07_GET, MoveTutor_Section8_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section8_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_GunkShot, 0
    dynmultipush MoveTutor_Text_Megahorn, 1
    dynmultipush MoveTutor_Text_AuraSphere, 2
    dynmultipush MoveTutor_Text_PlayRough, 3
    dynmultipush MoveTutor_Text_IceSpinner, 4
    dynmultipush MoveTutor_Text_EarthPower, 5
    dynmultipush MoveTutor_Text_PhantomForce, 6
    dynmultipush MoveTutor_Text_SolarBlade, 7
    dynmultipush MoveTutor_Text_TrickRoom, 8
    dynmultipush MoveTutor_Text_GrassyGlide, 9
    dynmultipush MoveTutor_Text_DualWingbeat, 10
    dynmultipush MoveTutor_Text_BodyPress, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section8_EventScript_GunkShotTutor
    case 1, MoveTutor_Section8_EventScript_MegahornTutor
    case 2, MoveTutor_Section8_EventScript_AuraSphereTutor
    case 3, MoveTutor_Section8_EventScript_PlayRoughTutor
    case 4, MoveTutor_Section8_EventScript_IceSpinnerTutor
    case 5, MoveTutor_Section8_EventScript_EarthPowerTutor
    case 6, MoveTutor_Section8_EventScript_PhantomForceTutor
    case 7, MoveTutor_Section8_EventScript_SolarBladeTutor
    case 8, MoveTutor_Section8_EventScript_TrickRoomTutor
    case 9, MoveTutor_Section8_EventScript_GrassyGlideTutor
    case 10, MoveTutor_Section8_EventScript_DualWingbeatTutor
    case 11, MoveTutor_Section8_EventScript_BodyPressTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section8_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section8_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section8_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section8_EventScript_TeachTutorMove
	goto MoveTutor_Section8_EventScript_ChooseNewMove
	end


MoveTutor_Section8_EventScript_ChooseNewMove::
	goto MoveTutor_Section8_EventScript_TutorMove
	end


MoveTutor_Section8_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section8_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section8_EventScript_GunkShotTutor::
	setvar VAR_0x8005, MOVE_GUNK_SHOT
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_MegahornTutor::
	setvar VAR_0x8005, MOVE_MEGAHORN
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section8_EventScript_AuraSphereTutor::
	setvar VAR_0x8005, MOVE_AURA_SPHERE
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_PlayRoughTutor::
	setvar VAR_0x8005, MOVE_PLAY_ROUGH
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_IceSpinnerTutor::
	setvar VAR_0x8005, MOVE_ICE_SPINNER
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section8_EventScript_EarthPowerTutor::
	setvar VAR_0x8005, MOVE_EARTH_POWER
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_PhantomForceTutor::
	setvar VAR_0x8005, MOVE_PHANTOM_FORCE
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_SolarBladeTutor::
	setvar VAR_0x8005, MOVE_SOLAR_BLADE
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section8_EventScript_TrickRoomTutor::
	setvar VAR_0x8005, MOVE_TRICK_ROOM
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_GrassyGlideTutor::
	setvar VAR_0x8005, MOVE_GRASSY_GLIDE
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_DualWingbeatTutor::
	setvar VAR_0x8005, MOVE_DUAL_WINGBEAT
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section8_EventScript_BodyPressTutor::
	setvar VAR_0x8005, MOVE_BODY_PRESS
	goto MoveTutor_Section8_EventScript_ConfirmMoveSelection
	end





MoveTutor_Section9_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE08_GET, MoveTutor_Section9_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end

MoveTutor_Section9_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_SteelBeam, 0
    dynmultipush MoveTutor_Text_Poltergeist, 1
    dynmultipush MoveTutor_Text_DoubleEdge, 2
    dynmultipush MoveTutor_Text_DracoMeteor, 3
    dynmultipush MoveTutor_Text_BraveBird, 4
    dynmultipush MoveTutor_Text_GigaImpact, 5
    dynmultipush MoveTutor_Text_Hurricane, 6
    dynmultipush MoveTutor_Text_CloseCombat, 7
    dynmultipush MoveTutor_Text_LeafStorm, 8
    dynmultipush MoveTutor_Text_FlareBlitz, 9
    dynmultipush MoveTutor_Text_HydroPump, 10
    dynmultipush MoveTutor_Text_Outrage, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section9_EventScript_SteelBeamTutor
    case 1, MoveTutor_Section9_EventScript_PoltergeistTutor
    case 2, MoveTutor_Section9_EventScript_DoubleEdgeTutor
    case 3, MoveTutor_Section9_EventScript_DracoMeteorTutor
    case 4, MoveTutor_Section9_EventScript_BraveBirdTutor
    case 5, MoveTutor_Section9_EventScript_GigaImpactTutor
    case 6, MoveTutor_Section9_EventScript_HurricaneTutor
    case 7, MoveTutor_Section9_EventScript_CloseCombatTutor
    case 8, MoveTutor_Section9_EventScript_LeafStormTutor
    case 9, MoveTutor_Section9_EventScript_FlareBlitzTutor
    case 10, MoveTutor_Section9_EventScript_HydroPumpTutor
    case 11, MoveTutor_Section9_EventScript_OutrageTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section9_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section9_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section9_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section9_EventScript_TeachTutorMove
	goto MoveTutor_Section9_EventScript_ChooseNewMove
	end


MoveTutor_Section9_EventScript_ChooseNewMove::
	goto MoveTutor_Section9_EventScript_TutorMove
	end


MoveTutor_Section9_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section9_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section9_EventScript_SteelBeamTutor::
	setvar VAR_0x8005, MOVE_STEEL_BEAM
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_PoltergeistTutor::
	setvar VAR_0x8005, MOVE_POLTERGEIST
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section9_EventScript_DoubleEdgeTutor::
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_DracoMeteorTutor::
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_BraveBirdTutor::
	setvar VAR_0x8005, MOVE_BRAVE_BIRD
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_GigaImpactTutor::
	setvar VAR_0x8005, MOVE_GIGA_IMPACT
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_HurricaneTutor::
	setvar VAR_0x8005, MOVE_HURRICANE
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_CloseCombatTutor::
	setvar VAR_0x8005, MOVE_CLOSE_COMBAT
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section9_EventScript_LeafStormTutor::
	setvar VAR_0x8005, MOVE_LEAF_STORM
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_FlareBlitzTutor::
	setvar VAR_0x8005, MOVE_FLARE_BLITZ
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_HydroPumpTutor::
	setvar VAR_0x8005, MOVE_HYDRO_PUMP
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section9_EventScript_OutrageTutor::
	setvar VAR_0x8005, MOVE_OUTRAGE
	goto MoveTutor_Section9_EventScript_ConfirmMoveSelection
	end





MoveTutor_Section10_EventScript_MoveTutor::
	goto_if_set FLAG_IS_CHAMPION, MoveTutor_Section10_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end

MoveTutor_Section10_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_BlastBurn, 0
    dynmultipush MoveTutor_Text_FrenzyPlant, 1
    dynmultipush MoveTutor_Text_HydroCannon, 2
    dynmultipush MoveTutor_Text_DragonAscent, 3
    dynmultipush MoveTutor_Text_SecretSword, 4
    dynmultipush MoveTutor_Text_RelicSong, 5
    dynmultipush MoveTutor_Text_VoltTackle, 6
    dynmultipush MoveTutor_Text_SurgingStrikes, 7
    dynmultipush MoveTutor_Text_WickedBlow, 8
    dynmultipush MoveTutor_Text_MeteorBeam, 9
    dynmultipush MoveTutor_Text_SkyAttack, 10
    dynmultipush MoveTutor_Text_MistyExplosion, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section10_EventScript_BlastBurnTutor
    case 1, MoveTutor_Section10_EventScript_FrenzyPlantTutor
    case 2, MoveTutor_Section10_EventScript_HydroCannonTutor
    case 3, MoveTutor_Section10_EventScript_DragonAscentTutor
    case 4, MoveTutor_Section10_EventScript_SecretSwordTutor
    case 5, MoveTutor_Section10_EventScript_RelicSongTutor
    case 6, MoveTutor_Section10_EventScript_VoltTackleTutor
    case 7, MoveTutor_Section10_EventScript_SurgingStrikesTutor
    case 8, MoveTutor_Section10_EventScript_WickedBlowTutor
    case 9, MoveTutor_Section10_EventScript_MeteorBeamTutor
    case 10, MoveTutor_Section10_EventScript_SkyAttackTutor
    case 11, MoveTutor_Section10_EventScript_MistyExplosionTutor
	case 12, MoveTutor_EventScript_MoveTutorSection
	end

MoveTutor_Section10_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section10_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section10_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section10_EventScript_TeachTutorMove
	goto MoveTutor_Section10_EventScript_ChooseNewMove
	end


MoveTutor_Section10_EventScript_ChooseNewMove::
	goto MoveTutor_Section10_EventScript_TutorMove
	end


MoveTutor_Section10_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section10_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section10_EventScript_BlastBurnTutor::
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_FrenzyPlantTutor::
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section10_EventScript_HydroCannonTutor::
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_DragonAscentTutor::
	setvar VAR_0x8005, MOVE_DRAGON_ASCENT
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_SecretSwordTutor::
	setvar VAR_0x8005, MOVE_SECRET_SWORD
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_RelicSongTutor::
	setvar VAR_0x8005, MOVE_RELIC_SONG
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_VoltTackleTutor::
	setvar VAR_0x8005, MOVE_VOLT_TACKLE
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_SurgingStrikesTutor::
	setvar VAR_0x8005, MOVE_SURGING_STRIKES
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section10_EventScript_WickedBlowTutor::
	setvar VAR_0x8005, MOVE_WICKED_BLOW
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_MeteorBeamTutor::
	setvar VAR_0x8005, MOVE_METEOR_BEAM
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_SkyAttackTutor::
	setvar VAR_0x8005, MOVE_SKY_ATTACK
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section10_EventScript_MistyExplosionTutor::
	setvar VAR_0x8005, MOVE_MISTY_EXPLOSION
	goto MoveTutor_Section10_EventScript_ConfirmMoveSelection
	end






MoveTutor_Section5_EventScript_MoveTutor::
	goto_if_set FLAG_BADGE04_GET, MoveTutor_Section5_EventScript_TutorMove
	msgbox MoveTutor_Text_CantNotEnoughBadges, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section5_EventScript_TutorMove::
	msgbox MoveTutor_Text_WhichMove, MSGBOX_DEFAULT
    dynmultipush MoveTutor_Text_BurningJealousy, 0
    dynmultipush MoveTutor_Text_SkitterSmack, 1
    dynmultipush MoveTutor_Text_LashOut, 2
    dynmultipush MoveTutor_Text_BreakingSwipe, 3
    dynmultipush MoveTutor_Text_ScaleShot, 4
    dynmultipush MoveTutor_Text_TripleAxel, 5
    dynmultipush MoveTutor_Text_ScorchingSands, 6
    dynmultipush MoveTutor_Text_ExpandingForce, 7
    dynmultipush MoveTutor_Text_FlipTurn, 8
    dynmultipush MoveTutor_Text_RisingVoltage, 9
    dynmultipush MoveTutor_Text_Coaching, 10
    dynmultipush MoveTutor_Text_CorrosiveGas, 11
    dynmultipush MoveTutor_Text_Exit, 12
    dynmultistack 0, 0, TRUE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
    switch VAR_RESULT
    case 0, MoveTutor_Section5_EventScript_BurningJealousyTutor
    case 1, MoveTutor_Section5_EventScript_SkitterSmackTutor
    case 2, MoveTutor_Section5_EventScript_LashOutTutor
    case 3, MoveTutor_Section5_EventScript_BreakingSwipeTutor
    case 4, MoveTutor_Section5_EventScript_ScaleShotTutor
    case 5, MoveTutor_Section5_EventScript_TripleAxelTutor
    case 6, MoveTutor_Section5_EventScript_ScorchingSandsTutor
    case 7, MoveTutor_Section5_EventScript_ExpandingForceTutor
    case 8, MoveTutor_Section5_EventScript_FlipTurnTutor
    case 9, MoveTutor_Section5_EventScript_RisingVoltageTutor
    case 10, MoveTutor_Section5_EventScript_CoachingTutor
    case 11, MoveTutor_Section5_EventScript_CorrosiveGasTutor
	case 12, MoveTutor_Section5_EventScript_ExitTutorMoveSelect
	end

MoveTutor_Section5_EventScript_TeachTutorMove::
	msgbox MoveTutor_Text_ChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, MoveTutor_Section5_EventScript_CancelChooseMon
	msgbox MoveTutor_Text_DoneComeBack, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	release
	end


MoveTutor_Section5_EventScript_ConfirmMoveSelection::
	goto MoveTutor_Section5_EventScript_TeachTutorMove
	goto MoveTutor_Section5_EventScript_ChooseNewMove
	end


MoveTutor_Section5_EventScript_ChooseNewMove::
	goto MoveTutor_Section5_EventScript_TutorMove
	end


MoveTutor_Section5_EventScript_ExitTutorMoveSelect::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section5_EventScript_CancelChooseMon::
	msgbox MoveTutor_Text_ComeBack, MSGBOX_DEFAULT
	release
	end


MoveTutor_Section5_EventScript_BurningJealousyTutor::
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_SkitterSmackTutor::
	setvar VAR_0x8005, MOVE_SKITTER_SMACK
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section5_EventScript_LashOutTutor::
	setvar VAR_0x8005, MOVE_LASH_OUT
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_BreakingSwipeTutor::
	setvar VAR_0x8005, MOVE_BREAKING_SWIPE
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_ScaleShotTutor::
	setvar VAR_0x8005, MOVE_SCALE_SHOT
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_TripleAxelTutor::
	setvar VAR_0x8005, MOVE_TRIPLE_AXEL
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_ScorchingSandsTutor::
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_ExpandingForceTutor::
	setvar VAR_0x8005, MOVE_EXPANDING_FORCE
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end

MoveTutor_Section5_EventScript_FlipTurnTutor::
	setvar VAR_0x8005, MOVE_FLIP_TURN
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_RisingVoltageTutor::
	setvar VAR_0x8005, MOVE_RISING_VOLTAGE
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_CoachingTutor::
	setvar VAR_0x8005, MOVE_COACHING
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end


MoveTutor_Section5_EventScript_CorrosiveGasTutor::
	setvar VAR_0x8005, MOVE_CORROSIVE_GAS
	goto MoveTutor_Section5_EventScript_ConfirmMoveSelection
	end
