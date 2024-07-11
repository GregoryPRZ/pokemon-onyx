#include "global.h"
#include "gba/m4a_internal.h"
#include "sound.h"
#include "battle.h"
#include "m4a.h"
#include "main.h"
#include "pokemon.h"
#include "constants/songs.h"
#include "task.h"

struct Fanfare
{
    u16 songNum;
    u16 duration;
};

typedef u16 (*MusicHandler)(u16);

EWRAM_DATA struct MusicPlayerInfo* gMPlay_PokemonCry = NULL;
EWRAM_DATA u8 gPokemonCryBGMDuckingCounter = 0;

static u16 sCurrentMapMusic;
static u16 sNextMapMusic;
static u8 sMapMusicState;
static u8 sMapMusicFadeInSpeed;
static u16 sFanfareCounter;

bool8 gDisableMusic;

extern struct ToneData gCryTable[];
extern struct ToneData gCryTable_Reverse[];

static void Task_Fanfare(u8 taskId);
static void CreateFanfareTask(void);
static void Task_DuckBGMForPokemonCry(u8 taskId);
static void RestoreBGMVolumeAfterPokemonCry(void);

static const struct Fanfare sFanfares[] = {
    [FANFARE_LEVEL_UP]                 = { MUS_LEVEL_UP                ,  80 },
    [FANFARE_HEAL]                     = { MUS_HEAL                    , 160 },
    [FANFARE_OBTAIN_BADGE]             = { MUS_OBTAIN_BADGE            , 340 },
    [FANFARE_OBTAIN_ITEM]              = { MUS_OBTAIN_ITEM             , 160 },
    [FANFARE_EVOLVED]                  = { MUS_EVOLVED                 , 220 },
    [FANFARE_OBTAIN_TMHM]              = { MUS_OBTAIN_TMHM             , 220 },
    [FANFARE_EVOLUTION_INTRO]          = { MUS_EVOLUTION_INTRO         ,  60 },
    [FANFARE_MOVE_DELETED]             = { MUS_MOVE_DELETED            , 180 },
    [FANFARE_OBTAIN_BERRY]             = { MUS_OBTAIN_BERRY            , 120 },
    [FANFARE_AWAKEN_LEGEND]            = { MUS_AWAKEN_LEGEND           , 710 },
    [FANFARE_SLOTS_JACKPOT]            = { MUS_SLOTS_JACKPOT           , 250 },
    [FANFARE_SLOTS_WIN]                = { MUS_SLOTS_WIN               , 150 },
    [FANFARE_TOO_BAD]                  = { MUS_TOO_BAD                 , 160 },
    [FANFARE_RG_JIGGLYPUFF]            = { MUS_RG_JIGGLYPUFF           , 400 },
    [FANFARE_RG_DEX_RATING]            = { MUS_RG_DEX_RATING           , 196 },
    [FANFARE_RG_OBTAIN_KEY_ITEM]       = { MUS_RG_OBTAIN_KEY_ITEM      , 170 },
    [FANFARE_RG_CAUGHT_INTRO]          = { MUS_RG_CAUGHT_INTRO         , 231 },
    [FANFARE_RG_PHOTO]                 = { MUS_RG_PHOTO                ,  90 },
    [FANFARE_RG_POKE_FLUTE]            = { MUS_RG_POKE_FLUTE           , 450 },
    [FANFARE_OBTAIN_B_POINTS]          = { MUS_OBTAIN_B_POINTS         , 313 },
    [FANFARE_REGISTER_MATCH_CALL]      = { MUS_REGISTER_MATCH_CALL     , 135 },
    [FANFARE_OBTAIN_SYMBOL]            = { MUS_OBTAIN_SYMBOL           , 318 },
    [FANFARE_DP_TV_END]                = { MUS_DP_TV_END               , 244 },
    [FANFARE_DP_OBTAIN_ITEM]           = { MUS_DP_OBTAIN_ITEM          , 160 },
    [FANFARE_DP_HEAL]                  = { MUS_DP_HEAL                 , 160 },
    [FANFARE_DP_OBTAIN_KEY_ITEM]       = { MUS_DP_OBTAIN_KEY_ITEM      , 170 },
    [FANFARE_DP_OBTAIN_TMHM]           = { MUS_DP_OBTAIN_TMHM          , 220 },
    [FANFARE_DP_OBTAIN_BADGE]          = { MUS_DP_OBTAIN_BADGE         , 340 },
    [FANFARE_DP_LEVEL_UP]              = { MUS_DP_LEVEL_UP             ,  80 },
    [FANFARE_DP_OBTAIN_BERRY]          = { MUS_DP_OBTAIN_BERRY         , 120 },
    [FANFARE_DP_PARTNER]               = { MUS_DP_LETS_GO_TOGETHER     , 180 },
    [FANFARE_DP_EVOLVED]               = { MUS_DP_EVOLVED              , 252 },
    [FANFARE_DP_POKETCH]               = { MUS_DP_POKETCH              , 120 },
    [FANFARE_DP_MOVE_DELETED]          = { MUS_DP_MOVE_DELETED         , 180 },
    [FANFARE_DP_ACCESSORY]             = { MUS_DP_OBTAIN_ACCESSORY     , 160 },
    [FANFARE_PL_TV_END]                = { MUS_PL_TV_END               , 230 },
    [FANFARE_PL_CLEAR_MINIGAME]        = { MUS_PL_WIN_MINIGAME         , 230 },
    [FANFARE_PL_OBTAIN_ARCADE_POINTS]  = { MUS_PL_OBTAIN_ARCADE_POINTS , 175 },
    [FANFARE_PL_OBTAIN_CASTLE_POINTS]  = { MUS_PL_OBTAIN_CASTLE_POINTS , 200 },
    [FANFARE_PL_OBTAIN_B_POINTS]       = { MUS_PL_OBTAIN_B_POINTS      , 264 },
    [FANFARE_HG_OBTAIN_KEY_ITEM]       = { MUS_HG_OBTAIN_KEY_ITEM      , 170 },
    [FANFARE_HG_LEVEL_UP]              = { MUS_HG_LEVEL_UP             ,  80 },
    [FANFARE_HG_HEAL]                  = { MUS_HG_HEAL                 , 160 },
    [FANFARE_HG_DEX_RATING_1]          = { MUS_HG_DEX_RATING_1         , 200 },
    [FANFARE_HG_DEX_RATING_2]          = { MUS_HG_DEX_RATING_2         , 180 },
    [FANFARE_HG_DEX_RATING_3]          = { MUS_HG_DEX_RATING_3         , 220 },
    [FANFARE_HG_DEX_RATING_4]          = { MUS_HG_DEX_RATING_4         , 210 },
    [FANFARE_HG_DEX_RATING_5]          = { MUS_HG_DEX_RATING_5         , 210 },
    [FANFARE_HG_DEX_RATING_6]          = { MUS_HG_DEX_RATING_6         , 370 },
    [FANFARE_HG_RECEIVE_EGG]           = { MUS_HG_OBTAIN_EGG           , 155 },
    [FANFARE_HG_OBTAIN_ITEM]           = { MUS_HG_OBTAIN_ITEM          , 160 },
    [FANFARE_HG_EVOLVED]               = { MUS_HG_EVOLVED              , 240 },
    [FANFARE_HG_OBTAIN_BADGE]          = { MUS_HG_OBTAIN_BADGE         , 340 },
    [FANFARE_HG_OBTAIN_TMHM]           = { MUS_HG_OBTAIN_TMHM          , 220 },
    [FANFARE_HG_VOLTORB_FLIP_1]        = { MUS_HG_CARD_FLIP            , 195 },
    [FANFARE_HG_VOLTORB_FLIP_2]        = { MUS_HG_CARD_FLIP_GAME_OVER  , 240 },
    [FANFARE_HG_ACCESSORY]             = { MUS_HG_OBTAIN_ACCESSORY     , 160 },
    [FANFARE_HG_REGISTER_POKEGEAR]     = { MUS_HG_POKEGEAR_REGISTERED  , 185 },
    [FANFARE_HG_OBTAIN_BERRY]          = { MUS_HG_OBTAIN_BERRY         , 120 },
    [FANFARE_HG_RECEIVE_POKEMON]       = { MUS_HG_RECEIVE_POKEMON      , 150 },
    [FANFARE_HG_MOVE_DELETED]          = { MUS_HG_MOVE_DELETED         , 180 },
    [FANFARE_HG_THIRD_PLACE]           = { MUS_HG_BUG_CONTEST_3RD_PLACE, 130 },
    [FANFARE_HG_SECOND_PLACE]          = { MUS_HG_BUG_CONTEST_2ND_PLACE, 225 },
    [FANFARE_HG_FIRST_PLACE]           = { MUS_HG_BUG_CONTEST_1ST_PLACE, 250 },
    [FANFARE_HG_POKEATHLON_NEW]        = { MUS_HG_POKEATHLON_READY     , 110 },
    [FANFARE_HG_WINNING_POKEATHLON]    = { MUS_HG_POKEATHLON_1ST_PLACE , 144 },
    [FANFARE_HG_OBTAIN_B_POINTS]       = { MUS_HG_OBTAIN_B_POINTS      , 264 },
    [FANFARE_HG_OBTAIN_ARCADE_POINTS]  = { MUS_HG_OBTAIN_ARCADE_POINTS , 175 },
    [FANFARE_HG_OBTAIN_CASTLE_POINTS]  = { MUS_HG_OBTAIN_CASTLE_POINTS , 200 },
    [FANFARE_HG_CLEAR_MINIGAME]        = { MUS_HG_WIN_MINIGAME         , 230 },
    [FANFARE_HG_PARTNER]               = { MUS_HG_LETS_GO_TOGETHER     , 180 },
};

void InitMapMusic(void)
{
    gDisableMusic = FALSE;
    ResetMapMusic();
}

void MapMusicMain(void)
{
    switch (sMapMusicState)
    {
    case 0:
        break;
    case 1:
        sMapMusicState = 2;
        PlayBGM(sCurrentMapMusic);
        break;
    case 2:
    case 3:
    case 4:
        break;
    case 5:
        if (IsBGMStopped())
        {
            sNextMapMusic = 0;
            sMapMusicState = 0;
        }
        break;
    case 6:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            PlayBGM(sCurrentMapMusic);
        }
        break;
    case 7:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            FadeInNewBGM(sNextMapMusic, sMapMusicFadeInSpeed);
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            sMapMusicFadeInSpeed = 0;
        }
        break;
    }
}

void ResetMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 0;
    sMapMusicFadeInSpeed = 0;
}

u16 GetCurrentMapMusic(void)
{
    return sCurrentMapMusic;
}

void PlayNewMapMusic(u16 songNum)
{
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void StopMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void FadeOutMapMusic(u8 speed)
{
    if (IsNotWaitingForBGMStop())
        FadeOutBGM(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 5;
}

void FadeOutAndPlayNewMapMusic(u16 songNum, u8 speed)
{
    FadeOutMapMusic(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 6;
}

void FadeOutAndFadeInNewMapMusic(u16 songNum, u8 fadeOutSpeed, u8 fadeInSpeed)
{
    FadeOutMapMusic(fadeOutSpeed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 7;
    sMapMusicFadeInSpeed = fadeInSpeed;
}

static void UNUSED FadeInNewMapMusic(u16 songNum, u8 speed)
{
    FadeInNewBGM(songNum, speed);
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 2;
    sMapMusicFadeInSpeed = 0;
}

bool8 IsNotWaitingForBGMStop(void)
{
    if (sMapMusicState == 6)
        return FALSE;
    if (sMapMusicState == 5)
        return FALSE;
    if (sMapMusicState == 7)
        return FALSE;
    return TRUE;
}

void PlayFanfareByFanfareNum(u8 fanfareNum)
{
    u16 songNum;
    m4aMPlayStop(&gMPlayInfo_BGM);
    songNum = RegionalMusicHandler(sFanfares[fanfareNum].songNum);
    sFanfareCounter = RegionalMusicHandler(sFanfares[fanfareNum].duration);
    m4aSongNumStart(songNum);
}

bool8 WaitFanfare(bool8 stop)
{
    if (sFanfareCounter)
    {
        sFanfareCounter--;
        return FALSE;
    }
    else
    {
        if (!stop)
            m4aMPlayContinue(&gMPlayInfo_BGM);
        else
            m4aSongNumStart(MUS_DUMMY);

        return TRUE;
    }
}

// Unused
void StopFanfareByFanfareNum(u8 fanfareNum)
{
    m4aSongNumStop(sFanfares[fanfareNum].songNum);
}

void PlayFanfare(u16 songNum)
{
    s32 i;
    for (i = 0; (u32)i < ARRAY_COUNT(sFanfares); i++)
    {
        if (sFanfares[i].songNum == songNum)
        {
            PlayFanfareByFanfareNum(i);
            CreateFanfareTask();
            return;
        }
    }

    // songNum is not in sFanfares
    // Play first fanfare in table instead
    PlayFanfareByFanfareNum(0);
    CreateFanfareTask();
}

bool8 IsFanfareTaskInactive(void)
{
    if (FuncIsActiveTask(Task_Fanfare) == TRUE)
        return FALSE;
    return TRUE;
}

static void Task_Fanfare(u8 taskId)
{
    if (sFanfareCounter)
    {
        sFanfareCounter--;
    }
    else
    {
        m4aMPlayContinue(&gMPlayInfo_BGM);
        DestroyTask(taskId);
    }
}

static void CreateFanfareTask(void)
{
    if (FuncIsActiveTask(Task_Fanfare) != TRUE)
        CreateTask(Task_Fanfare, 80);
}

void FadeInNewBGM(u16 songNum, u8 speed)
{
    if (gDisableMusic)
        songNum = 0;
    if (songNum == MUS_NONE)
        songNum = 0;
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_BGM);
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 0);
    m4aSongNumStop(songNum);
    m4aMPlayFadeIn(&gMPlayInfo_BGM, speed);
}

void FadeOutBGMTemporarily(u8 speed)
{
    m4aMPlayFadeOutTemporarily(&gMPlayInfo_BGM, speed);
}

bool8 IsBGMPausedOrStopped(void)
{
    if (gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return TRUE;
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void FadeInBGM(u8 speed)
{
    m4aMPlayFadeIn(&gMPlayInfo_BGM, speed);
}

void FadeOutBGM(u8 speed)
{
    m4aMPlayFadeOut(&gMPlayInfo_BGM, speed);
}

bool8 IsBGMStopped(void)
{
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void PlayCry_Normal(u16 species, s8 pan)
{
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
    PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, CRY_MODE_NORMAL);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

void PlayCry_NormalNoDucking(u16 species, s8 pan, s8 volume, u8 priority)
{
    PlayCryInternal(species, pan, volume, priority, CRY_MODE_NORMAL);
}

// Assuming it's not CRY_MODE_DOUBLES, this is equivalent to PlayCry_Normal except it allows other modes.
void PlayCry_ByMode(u16 species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
        gPokemonCryBGMDuckingCounter = 2;
        RestoreBGMVolumeAfterPokemonCry();
    }
}

// Used when releasing multiple Pokémon at once in battle.
void PlayCry_ReleaseDouble(u16 species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        if (!(gBattleTypeFlags & BATTLE_TYPE_MULTI))
            m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
}

// Duck the BGM but don't restore it. Not present in R/S
void PlayCry_DuckNoRestore(u16 species, s8 pan, u8 mode)
{
    if (mode == CRY_MODE_DOUBLES)
    {
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    }
    else
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
        PlayCryInternal(species, pan, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
        gPokemonCryBGMDuckingCounter = 2;
    }
}

void PlayCry_Script(u16 species, u8 mode)
{
    m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 85);
    PlayCryInternal(species, 0, CRY_VOLUME, CRY_PRIORITY_NORMAL, mode);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

void PlayCryInternal(u16 species, s8 pan, s8 volume, u8 priority, u8 mode)
{
    bool32 reverse;
    u32 release;
    u32 length;
    u32 pitch;
    u32 chorus;

    // Set default values
    // May be overridden depending on mode.
    length = 210;
    reverse = FALSE;
    release = 0;
    pitch = 15360;
    chorus = 0;

    switch (mode)
    {
    case CRY_MODE_NORMAL:
        break;
    case CRY_MODE_DOUBLES:
        length = 20;
        release = 225;
        break;
    case CRY_MODE_ENCOUNTER:
        release = 225;
        pitch = 15600;
        chorus = 20;
        volume = 90;
        break;
    case CRY_MODE_HIGH_PITCH:
        length = 50;
        release = 200;
        pitch = 15800;
        chorus = 20;
        volume = 90;
        break;
    case CRY_MODE_ECHO_START:
        length = 25;
        reverse = TRUE;
        release = 100;
        pitch = 15600;
        chorus = 192;
        volume = 90;
        break;
    case CRY_MODE_FAINT:
        release = 200;
        pitch = 14440;
        break;
    case CRY_MODE_ECHO_END:
        release = 220;
        pitch = 15555;
        chorus = 192;
        volume = 70;
        break;
    case CRY_MODE_ROAR_1:
        length = 10;
        release = 100;
        pitch = 14848;
        break;
    case CRY_MODE_ROAR_2:
        length = 60;
        release = 225;
        pitch = 15616;
        break;
    case CRY_MODE_GROWL_1:
        length = 15;
        reverse = TRUE;
        release = 125;
        pitch = 15200;
        break;
    case CRY_MODE_GROWL_2:
        length = 100;
        release = 225;
        pitch = 15200;
        break;
    case CRY_MODE_WEAK_DOUBLES:
        length = 20;
        release = 225;
        // fallthrough
    case CRY_MODE_WEAK:
        pitch = 15000;
        break;
    }

    SetPokemonCryVolume(volume);
    SetPokemonCryPanpot(pan);
    SetPokemonCryPitch(pitch);
    SetPokemonCryLength(length);
    SetPokemonCryProgress(0);
    SetPokemonCryRelease(release);
    SetPokemonCryChorus(chorus);
    SetPokemonCryPriority(priority);

    species = GetCryIdBySpecies(species);
    if (species != 0)
    {
        species--;
        gMPlay_PokemonCry = SetPokemonCryTone(reverse ? &gCryTable_Reverse[species] : &gCryTable[species]);
    }
}

bool8 IsCryFinished(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) == TRUE)
    {
        return FALSE;
    }
    else
    {
        ClearPokemonCrySongs();
        return TRUE;
    }
}

void StopCryAndClearCrySongs(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
    ClearPokemonCrySongs();
}

void StopCry(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
}

bool8 IsCryPlayingOrClearCrySongs(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        return TRUE;
    }
    else
    {
        ClearPokemonCrySongs();
        return FALSE;
    }
}

bool8 IsCryPlaying(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
        return TRUE;
    else
        return FALSE;
}

static void Task_DuckBGMForPokemonCry(u8 taskId)
{
    if (gPokemonCryBGMDuckingCounter)
    {
        gPokemonCryBGMDuckingCounter--;
        return;
    }

    if (!IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        m4aMPlayVolumeControl(&gMPlayInfo_BGM, TRACKS_ALL, 256);
        DestroyTask(taskId);
    }
}

static void RestoreBGMVolumeAfterPokemonCry(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) != TRUE)
        CreateTask(Task_DuckBGMForPokemonCry, 80);
}

void PlayBGM(u16 songNum)
{
    u16 song;
    song = RegionalMusicHandler(songNum);	
    if (gDisableMusic)
        songNum = 0;
    if (songNum == MUS_NONE)
        songNum = 0;
    m4aSongNumStart(song);
}

u16 HoennMusicHandler(u16 songNum) {
    return songNum;
}

u16 SinnohMusicHandler(u16 songNum) {
    switch(songNum) {
        case MUS_TITLE:
            return MUS_DP_TITLE;
        case MUS_EVOLUTION:
            return MUS_DP_EVOLUTION;
        case MUS_EVOLVED:
            return MUS_DP_EVOLVED;
        case MUS_LEVEL_UP:
            return MUS_DP_LEVEL_UP;
        case MUS_OBTAIN_ITEM:
            return MUS_DP_OBTAIN_ITEM;
        case MUS_OBTAIN_TMHM:
            return MUS_DP_OBTAIN_TMHM;
        case MUS_OBTAIN_BERRY:
            return MUS_DP_OBTAIN_BERRY;
        case MUS_OBTAIN_BADGE:
            return MUS_DP_OBTAIN_BADGE;
        case MUS_HEAL:
            return MUS_DP_HEAL;
        case MUS_CAUGHT:
            return MUS_DP_CAUGHT_INTRO;
        case MUS_MOVE_DELETED:
            return MUS_DP_MOVE_DELETED;
        case MUS_HALL_OF_FAME:
            return MUS_DP_HALL_OF_FAME;
        case MUS_OBTAIN_B_POINTS:
            return MUS_PL_OBTAIN_B_POINTS;
        case MUS_CREDITS:
            return MUS_DP_CREDITS;
        case MUS_VS_WILD:
            return MUS_DP_VS_WILD;
        case MUS_VS_TRAINER:
            return MUS_DP_VS_TRAINER;
        case MUS_VS_GYM_LEADER:
            return MUS_DP_VS_GYM_LEADER;
        case MUS_VS_ELITE_FOUR:
            return MUS_DP_VS_ELITE_FOUR;
        case MUS_VS_CHAMPION:
            return MUS_DP_VS_CHAMPION;
        case MUS_VS_FRONTIER_BRAIN:
            return MUS_PL_VS_FRONTIER_BRAIN;
        case MUS_VS_AQUA_MAGMA:
            return MUS_DP_VS_GALACTIC;
        case MUS_VS_AQUA_MAGMA_LEADER:
            return MUS_DP_VS_GALACTIC_BOSS;
        case MUS_VS_RIVAL:
            return MUS_DP_VS_RIVAL;
        case MUS_VS_KYOGRE_GROUDON:
            return MUS_DP_VS_DIALGA_PALKIA;
        case MUS_VS_RAYQUAZA:
            return MUS_DP_VS_ARCEUS;
        case MUS_VS_REGI:
            return MUS_DP_VS_UXIE_MESPRIT_AZELF;
        case MUS_RG_VS_DEOXYS:
            return MUS_PL_VS_GIRATINA;
        case MUS_VS_MEW:
            return MUS_DP_VS_LEGEND;
        case MUS_VICTORY_WILD:
            return MUS_DP_VICTORY_WILD;
        case MUS_VICTORY_TRAINER:
            return MUS_DP_VICTORY_TRAINER;
        case MUS_VICTORY_GYM_LEADER:
            return MUS_DP_VICTORY_GYM_LEADER;
        case MUS_VICTORY_AQUA_MAGMA:
            return MUS_DP_VICTORY_GALACTIC;
        case MUS_VICTORY_LEAGUE:
            return MUS_DP_VICTORY_CHAMPION;
        case MUS_LITTLEROOT:
            return MUS_DP_TWINLEAF_DAY;
        case MUS_OLDALE:
            return MUS_DP_SANDGEM_DAY;
        case MUS_PETALBURG:
            return MUS_DP_FLOAROMA_DAY;
        case MUS_RUSTBORO:
            return MUS_DP_JUBILIFE_DAY;
        case MUS_DEWFORD:
            return MUS_DP_VALOR_LAKEFRONT_DAY;
        case MUS_SLATEPORT:
            return MUS_DP_SUNYSHORE_DAY;
        case MUS_SOOTOPOLIS:
            return MUS_DP_CANALAVE_DAY;
        case MUS_FORTREE:
            return MUS_DP_ETERNA_DAY;
        case MUS_VERDANTURF:
            return MUS_DP_CANALAVE_DAY;
        case MUS_FALLARBOR:
            return MUS_DP_SOLACEON_DAY;
        case MUS_EVER_GRANDE:
            return MUS_DP_POKEMON_LEAGUE_DAY;
        case MUS_LILYCOVE:
            return MUS_PL_LILYCOVE_BOSSA_NOVA;
        case MUS_B_FRONTIER:
            return MUS_DP_FIGHT_AREA_DAY;
        case MUS_POKE_CENTER:
            return MUS_DP_POKE_CENTER_DAY;
        case MUS_POKE_MART:
            return MUS_DP_POKE_MART;
        case MUS_ROUTE101:
            return MUS_DP_ROUTE201_DAY;
        case MUS_ROUTE104:
            return MUS_DP_ROUTE203_DAY;
        case MUS_ROUTE110:
            return MUS_DP_ROUTE206_DAY;
        case MUS_ROUTE111:
            return MUS_DP_ROUTE228_DAY;
        case MUS_ROUTE113:
            return MUS_DP_ROUTE210_DAY;
        case MUS_ROUTE118:
            return MUS_DP_ROUTE225_DAY;
        case MUS_ROUTE119:
            return MUS_DP_ROUTE225_DAY;
        case MUS_ROUTE120:
            return MUS_DP_ROUTE209_DAY;
        case MUS_ROUTE122:
            return MUS_DP_ROUTE205_DAY;
        case MUS_VICTORY_ROAD:
            return MUS_DP_INSIDE_POKEMON_LEAGUE;
        case MUS_PETALBURG_WOODS:
            return MUS_DP_ETERNA_FOREST;
        case MUS_CAVE_OF_ORIGIN:
            return MUS_DP_VICTORY_ROAD;
        case MUS_MT_CHIMNEY:
            return MUS_DP_SPEAR_PILLAR;
        case MUS_MT_PYRE_EXTERIOR:
            return MUS_DP_MT_CORONET;
        case MUS_MT_PYRE:
            return MUS_DP_OLD_CHATEAU;
        case MUS_SAFARI_ZONE:
            return MUS_DP_GREAT_MARSH;
        case MUS_ABANDONED_SHIP:
            return MUS_DP_OREBURGH_MINE;
        case MUS_SEALED_CHAMBER:
            return MUS_DP_LAKE_CAVERNS;
        case MUS_OCEANIC_MUSEUM:
            return MUS_DP_GALACTIC_ETERNA_BUILDING;
        case MUS_GAME_CORNER:
            return MUS_DP_GAME_CORNER;
        case MUS_LILYCOVE_MUSEUM:
            return MUS_DP_VEILSTONE_DAY;
        case MUS_SCHOOL:
            return MUS_DP_HEARTHOME_DAY;
        case MUS_SURF:
            return MUS_DP_SURF;
        case MUS_CYCLING:
            return MUS_DP_CYCLING;
        case MUS_GYM:
            return MUS_DP_GYM;
        case MUS_BIRCH_LAB:
            return MUS_DP_ROWAN_LAB;
        case MUS_B_ARENA:
            return MUS_PL_B_ARCADE;
        case MUS_B_PALACE:
            return MUS_PL_B_CASTLE;
        case MUS_B_FACTORY:
            return MUS_PL_B_FACTORY;
        case MUS_B_TOWER:
            return MUS_DP_B_TOWER;
        case MUS_B_DOME:
            return MUS_PL_B_HALL;
        case MUS_AQUA_MAGMA_HIDEOUT:
            return MUS_DP_GALACTIC_HQ;
        case MUS_HALL_OF_FAME_ROOM:
            return MUS_DP_HALL_OF_FAME_ROOM;
        case MUS_HELP:
            return MUS_DP_LAKE_EVENT;
        case MUS_ENCOUNTER_AQUA:
            return MUS_DP_ENCOUNTER_GALACTIC;
        case MUS_ENCOUNTER_BRENDAN:
            return MUS_DP_LUCAS;
        case MUS_ENCOUNTER_MAY:
            return MUS_DP_DAWN;
        case MUS_ENCOUNTER_CHAMPION:
            return MUS_DP_ENCOUNTER_CHAMPION;
        case MUS_ENCOUNTER_COOL:
            return MUS_DP_ENCOUNTER_ACE_TRAINER;
        case MUS_ENCOUNTER_GIRL:
            return MUS_DP_ENCOUNTER_GIRL;
        case MUS_ENCOUNTER_FEMALE:
            return MUS_DP_ENCOUNTER_LADY;
        case MUS_ENCOUNTER_TWINS:
            return MUS_DP_ENCOUNTER_TWINS;
        case MUS_ENCOUNTER_ELITE_FOUR:
            return MUS_DP_ENCOUNTER_ELITE_FOUR;
        case MUS_ENCOUNTER_HIKER:
            return MUS_DP_ENCOUNTER_HIKER;
        case MUS_ENCOUNTER_INTENSE:
            return MUS_DP_ENCOUNTER_INTENSE;
        case MUS_ENCOUNTER_MALE:
            return MUS_DP_ENCOUNTER_BOY;
        case MUS_ENCOUNTER_MAGMA:
            return MUS_DP_ENCOUNTER_GALACTIC;
        case MUS_ENCOUNTER_RICH:
            return MUS_DP_ENCOUNTER_RICH;
        case MUS_ENCOUNTER_SUSPICIOUS:
            return MUS_DP_ENCOUNTER_SUSPICIOUS;
        case MUS_ENCOUNTER_SWIMMER:
            return MUS_DP_ENCOUNTER_CYCLIST;
        case MUS_ENCOUNTER_INTERVIEWER:
            return MUS_PL_TV_BROADCAST;
        case MUS_RG_ENCOUNTER_DEOXYS:
            return MUS_PL_GIRATINA_APPEARS_1;
        case MUS_AWAKEN_LEGEND:
            return MUS_PL_GIRATINA_APPEARS_2;
        case MUS_RAYQUAZA_APPEARS:
            return MUS_DP_LEGEND_APPEARS;
        case MUS_WEATHER_GROUDON:
            return MUS_DP_CATASTROPHE;
        case MUS_WEATHER_KYOGRE:
            return MUS_DP_CATASTROPHE;
        default:
            return songNum;
    }
}

u16 DefaultMusicHandler(u16 songNum) {
    // Logic par défaut
    return songNum;
}

u16 RegionalMusicHandler(u16 songNum) {
    MusicHandler handler;

    switch (gSaveBlock2Ptr->optionsMusic) {
        case OPTIONS_MUSIC_HOENN:
            handler = HoennMusicHandler;
            break;
        case OPTIONS_MUSIC_SINNOH:
            handler = SinnohMusicHandler;
            break;
        default:
            handler = DefaultMusicHandler;
            break;
    }

    return handler(songNum);
}

void PlaySE(u16 songNum)
{
    m4aSongNumStart(RegionalMusicHandler(songNum));
}

void PlaySE12WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE1);
    m4aMPlayImmInit(&gMPlayInfo_SE2);
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

void PlaySE1WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE1);
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
}

void PlaySE2WithPanning(u16 songNum, s8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlayInfo_SE2);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

void SE12PanpotControl(s8 pan)
{
    m4aMPlayPanpotControl(&gMPlayInfo_SE1, TRACKS_ALL, pan);
    m4aMPlayPanpotControl(&gMPlayInfo_SE2, TRACKS_ALL, pan);
}

bool8 IsSEPlaying(void)
{
    if ((gMPlayInfo_SE1.status & MUSICPLAYER_STATUS_PAUSE) && (gMPlayInfo_SE2.status & MUSICPLAYER_STATUS_PAUSE))
        return FALSE;
    if (!(gMPlayInfo_SE1.status & MUSICPLAYER_STATUS_TRACK) && !(gMPlayInfo_SE2.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsBGMPlaying(void)
{
    if (gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlayInfo_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsSpecialSEPlaying(void)
{
    if (gMPlayInfo_SE3.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlayInfo_SE3.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}
