Common_EventScript_FlyingTaxi::
    lock
    faceplayer
    setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
    playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
    msgbox gText_FlyingTaxi_Intro, MSGBOX_YESNO
    compare VAR_RESULT, YES
    goto_if_eq EventScript_FlyingTaxi_ChooseDestination
    message gText_WeHopeToSeeYouAgain
    setvar VAR_0x800A, 0
    release
    end

EventScript_FlyingTaxi_ChooseDestination::
    special FieldLoadFlyMap
    message gText_WeHopeToSeeYouAgain
    release
    end
