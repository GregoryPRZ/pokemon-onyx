#include "global.h"
#include "gba/m4a_internal.h"
#include "sound.h"
#include "battle.h"
#include "m4a.h"
#include "main.h"
#include "pokemon.h"
#include "constants/cries.h"
#include "constants/songs.h"
#include "task.h"
#include "test_runner.h"

struct Fanfare
{
    u16 songNum;
    u16 duration;
};

// Song remapping table for DPPt music option
struct SongRemap
{
    u16 rseOriginal;
    u16 dpptReplacement;
};

EWRAM_DATA struct MusicPlayerInfo *gMPlay_PokemonCry = NULL;
EWRAM_DATA u8 gPokemonCryBGMDuckingCounter = 0;

static u16 sCurrentMapMusic;
static u16 sNextMapMusic;
static u8 sMapMusicState;
static u8 sMapMusicFadeInSpeed;
static u16 sFanfareCounter;

COMMON_DATA bool8 gDisableMusic = 0;

extern struct ToneData gCryTable[];
extern struct ToneData gCryTable_Reverse[];

static void Task_Fanfare(u8 taskId);
static void CreateFanfareTask(void);
static void RestoreBGMVolumeAfterPokemonCry(void);
static u16 RemapSongIfDPPtEnabled(u16 songNum);

static const struct Fanfare sFanfares[] = {
    [FANFARE_LEVEL_UP]            = { MUS_LEVEL_UP,             80 },
    [FANFARE_OBTAIN_ITEM]         = { MUS_OBTAIN_ITEM,         160 },
    [FANFARE_EVOLVED]             = { MUS_EVOLVED,             220 },
    [FANFARE_OBTAIN_TMHM]         = { MUS_OBTAIN_TMHM,         220 },
    [FANFARE_HEAL]                = { MUS_HEAL,                160 },
    [FANFARE_OBTAIN_BADGE]        = { MUS_OBTAIN_BADGE,        340 },
    [FANFARE_MOVE_DELETED]        = { MUS_MOVE_DELETED,        180 },
    [FANFARE_OBTAIN_BERRY]        = { MUS_OBTAIN_BERRY,        120 },
    [FANFARE_AWAKEN_LEGEND]       = { MUS_AWAKEN_LEGEND,       710 },
    [FANFARE_SLOTS_JACKPOT]       = { MUS_SLOTS_JACKPOT,       250 },
    [FANFARE_SLOTS_WIN]           = { MUS_SLOTS_WIN,           150 },
    [FANFARE_TOO_BAD]             = { MUS_TOO_BAD,             160 },
    [FANFARE_RG_POKE_FLUTE]       = { MUS_RG_POKE_FLUTE,       450 },
    [FANFARE_RG_OBTAIN_KEY_ITEM]  = { MUS_RG_OBTAIN_KEY_ITEM,  170 },
    [FANFARE_RG_DEX_RATING]       = { MUS_RG_DEX_RATING,       196 },
    [FANFARE_OBTAIN_B_POINTS]     = { MUS_OBTAIN_B_POINTS,     313 },
    [FANFARE_OBTAIN_SYMBOL]       = { MUS_OBTAIN_SYMBOL,       318 },
    [FANFARE_REGISTER_MATCH_CALL] = { MUS_REGISTER_MATCH_CALL, 135 },
};

// Song remapping table: RSE/FRLG to DPPt equivalents
static const struct SongRemap sSongRemapTable[] = {
    // Routes
    { MUS_ROUTE101,             MUS_DP_ROUTE201_DAY },
    { MUS_ROUTE104,             MUS_DP_ROUTE203_DAY },
    { MUS_ROUTE110,             MUS_DP_ROUTE205_DAY },
    { MUS_ROUTE113,             MUS_DP_ROUTE216_DAY },
    { MUS_ROUTE119,             MUS_DP_ROUTE206_DAY },
    { MUS_ROUTE120,             MUS_DP_ROUTE209_DAY },
    { MUS_ROUTE122,             MUS_DP_ROUTE210_DAY },
    { MUS_DESERT,               MUS_DP_ROUTE228_DAY },

    // Towns/Cities
    { MUS_LITTLEROOT,           MUS_DP_TWINLEAF_DAY },
    { MUS_OLDALE,               MUS_DP_SANDGEM_DAY },
    { MUS_PETALBURG,            MUS_DP_HEARTHOME_DAY },
    { MUS_RUSTBORO,             MUS_DP_JUBILIFE_DAY },
    { MUS_DEWFORD,              MUS_DP_VALOR_LAKEFRONT_DAY },
    { MUS_SLATEPORT,            MUS_DP_SUNYSHORE_DAY },
    { MUS_VERDANTURF,           MUS_DP_FLOAROMA_DAY },
    { MUS_FALLARBOR,            MUS_DP_SOLACEON_DAY },
    { MUS_FORTREE,              MUS_DP_ETERNA_DAY },
    { MUS_LILYCOVE,             MUS_DP_VEILSTONE_DAY },
    { MUS_SOOTOPOLIS,           MUS_DP_SNOWPOINT_DAY },
    { MUS_EVER_GRANDE,          MUS_DP_POKEMON_LEAGUE_DAY },

    // Dungeons/Caves
    { MUS_PETALBURG_WOODS,      MUS_DP_ETERNA_FOREST },
    { MUS_CAVE_OF_ORIGIN,       MUS_DP_MT_CORONET },
    { MUS_MT_CHIMNEY,           MUS_DP_STARK_MOUNTAIN },
    { MUS_MT_PYRE,              MUS_DP_MT_CORONET },
    { MUS_MT_PYRE_EXTERIOR,     MUS_DP_SPEAR_PILLAR },
    { MUS_AQUA_MAGMA_HIDEOUT,   MUS_DP_GALACTIC_HQ },
    { MUS_SEALED_CHAMBER,       MUS_DP_LAKE_CAVERNS },
    { MUS_ABANDONED_SHIP,       MUS_DP_OLD_CHATEAU },
    { MUS_UNDERWATER,           MUS_DP_UNDERGROUND },
    { MUS_VICTORY_ROAD,         MUS_DP_VICTORY_ROAD },

    // Buildings
    { MUS_POKE_CENTER,          MUS_DP_POKE_CENTER_DAY },
    { MUS_POKE_MART,            MUS_DP_POKE_MART },
    { MUS_GYM,                  MUS_DP_GYM },
    { MUS_BIRCH_LAB,            MUS_DP_ROWAN_LAB },
    { MUS_SCHOOL,               MUS_DP_ROWAN_LAB },
    { MUS_LILYCOVE_MUSEUM,      MUS_DP_TV_STATION },
    { MUS_OCEANIC_MUSEUM,       MUS_DP_TV_STATION },
    { MUS_TRICK_HOUSE,          MUS_DP_GALACTIC_ETERNA_BUILDING },
    { MUS_SAFARI_ZONE,          MUS_DP_GREAT_MARSH },
    { MUS_GAME_CORNER,          MUS_DP_GAME_CORNER },
    { MUS_ROULETTE,             MUS_DP_GAME_CORNER },

    // Transport
    { MUS_SURF,                 MUS_DP_SURF },
    { MUS_CYCLING,              MUS_DP_CYCLING },
    { MUS_SAILING,              MUS_DP_SURF },
    { MUS_CABLE_CAR,            MUS_DP_MT_CORONET },

    // Battle Frontier
    { MUS_B_FRONTIER,           MUS_PL_FIGHT_AREA_DAY },
    { MUS_B_TOWER_RS,           MUS_DP_B_TOWER },
    { MUS_B_TOWER,              MUS_DP_B_TOWER },
    { MUS_B_ARENA,              MUS_PL_B_ARCADE },
    { MUS_B_DOME,               MUS_DP_B_TOWER },
    { MUS_B_DOME_LOBBY,         MUS_DP_B_TOWER },
    { MUS_B_PALACE,             MUS_PL_B_CASTLE },
    { MUS_B_PIKE,               MUS_PL_B_HALL },
    { MUS_B_FACTORY,            MUS_PL_B_FACTORY },

    // Contest
    { MUS_CONTEST_LOBBY,        MUS_DP_CONTEST_LOBBY },
    { MUS_CONTEST,              MUS_DP_CONTEST },
    { MUS_CONTEST_WINNER,       MUS_DP_CONTEST_WINNER },
    { MUS_CONTEST_RESULTS,      MUS_DP_CONTEST_RESULTS },
    { MUS_LINK_CONTEST_P1,      MUS_DP_CONTEST },
    { MUS_LINK_CONTEST_P2,      MUS_DP_CONTEST },
    { MUS_LINK_CONTEST_P3,      MUS_DP_CONTEST },
    { MUS_LINK_CONTEST_P4,      MUS_DP_CONTEST },

    // Encounter jingles
    { MUS_ENCOUNTER_GIRL,       MUS_DP_ENCOUNTER_GIRL },
    { MUS_ENCOUNTER_FEMALE,     MUS_DP_ENCOUNTER_GIRL },
    { MUS_ENCOUNTER_MALE,       MUS_DP_ENCOUNTER_BOY },
    { MUS_ENCOUNTER_INTENSE,    MUS_DP_ENCOUNTER_INTENSE },
    { MUS_ENCOUNTER_COOL,       MUS_DP_ENCOUNTER_CYCLIST },
    { MUS_ENCOUNTER_AQUA,       MUS_DP_ENCOUNTER_GALACTIC },
    { MUS_ENCOUNTER_MAGMA,      MUS_DP_ENCOUNTER_GALACTIC },
    { MUS_ENCOUNTER_SWIMMER,    MUS_DP_ENCOUNTER_SAILOR },
    { MUS_ENCOUNTER_ELITE_FOUR, MUS_DP_ENCOUNTER_ELITE_FOUR },
    { MUS_ENCOUNTER_HIKER,      MUS_DP_ENCOUNTER_HIKER },
    { MUS_ENCOUNTER_INTERVIEWER,MUS_DP_ENCOUNTER_LADY },
    { MUS_ENCOUNTER_RICH,       MUS_DP_ENCOUNTER_RICH },
    { MUS_ENCOUNTER_SUSPICIOUS, MUS_DP_ENCOUNTER_SUSPICIOUS },
    { MUS_ENCOUNTER_TWINS,      MUS_DP_ENCOUNTER_TWINS },
    { MUS_ENCOUNTER_CHAMPION,   MUS_DP_ENCOUNTER_CHAMPION },
    { MUS_ENCOUNTER_MAY,        MUS_DP_DAWN },
    { MUS_ENCOUNTER_BRENDAN,    MUS_DP_LUCAS },

    // Battle themes
    { MUS_VS_WILD,              MUS_DP_VS_WILD },
    { MUS_VS_TRAINER,           MUS_DP_VS_TRAINER },
    { MUS_VS_GYM_LEADER,        MUS_DP_VS_GYM_LEADER },
    { MUS_VS_CHAMPION,          MUS_DP_VS_CHAMPION },
    { MUS_VS_ELITE_FOUR,        MUS_DP_VS_ELITE_FOUR },
    { MUS_VS_RIVAL,             MUS_DP_VS_RIVAL },
    { MUS_VS_AQUA_MAGMA,        MUS_DP_VS_GALACTIC },
    { MUS_VS_AQUA_MAGMA_LEADER, MUS_DP_VS_GALACTIC_BOSS },
    { MUS_VS_REGI,              MUS_DP_VS_LEGEND },
    { MUS_VS_KYOGRE_GROUDON,    MUS_DP_VS_DIALGA_PALKIA },
    { MUS_VS_RAYQUAZA,          MUS_DP_VS_DIALGA_PALKIA },
    { MUS_VS_MEW,               MUS_DP_VS_ARCEUS },
    { MUS_VS_FRONTIER_BRAIN,    MUS_PL_VS_FRONTIER_BRAIN },
    { MUS_INTRO_BATTLE,         MUS_DP_VS_WILD },

    // Victory themes
    { MUS_VICTORY_WILD,         MUS_DP_VICTORY_WILD },
    { MUS_VICTORY_TRAINER,      MUS_DP_VICTORY_TRAINER },
    { MUS_VICTORY_GYM_LEADER,   MUS_DP_VICTORY_GYM_LEADER },
    { MUS_VICTORY_LEAGUE,       MUS_DP_VICTORY_CHAMPION },
    { MUS_VICTORY_AQUA_MAGMA,   MUS_DP_VICTORY_GALACTIC },

    // Special events
    { MUS_EVOLUTION_INTRO,      MUS_DP_EVOLUTION },
    { MUS_EVOLUTION,            MUS_DP_EVOLUTION },
    { MUS_RAYQUAZA_APPEARS,     MUS_DP_LEGEND_APPEARS },
    { MUS_AWAKEN_LEGEND,        MUS_DP_LAKE_EVENT },
    { MUS_FOLLOW_ME,            MUS_DP_FOLLOW_ME },

    // Hall of Fame
    { MUS_HALL_OF_FAME,         MUS_DP_HALL_OF_FAME },
    { MUS_HALL_OF_FAME_ROOM,    MUS_DP_HALL_OF_FAME_ROOM },

    // Title / Intro / Credits
    { MUS_TITLE,                MUS_DP_TITLE },
    { MUS_INTRO,                MUS_DP_INTRO },
    { MUS_CREDITS,              MUS_DP_CREDITS },
    { MUS_END,                  MUS_DP_CREDITS },

    // Fanfares
    { MUS_LEVEL_UP,             MUS_DP_LEVEL_UP },
    { MUS_OBTAIN_ITEM,          MUS_DP_OBTAIN_ITEM },
    { MUS_EVOLVED,              MUS_DP_EVOLVED },
    { MUS_CAUGHT,               MUS_DP_CAUGHT_INTRO },
    { MUS_OBTAIN_TMHM,          MUS_DP_OBTAIN_TMHM },
    { MUS_HEAL,                 MUS_DP_HEAL },
    { MUS_OBTAIN_BADGE,         MUS_DP_OBTAIN_BADGE },
    { MUS_MOVE_DELETED,         MUS_DP_MOVE_DELETED },
    { MUS_OBTAIN_BERRY,         MUS_DP_OBTAIN_BERRY },
    { MUS_SLOTS_JACKPOT,        MUS_DP_SLOTS_JACKPOT },
    { MUS_SLOTS_WIN,            MUS_DP_SLOTS_WIN },
    { MUS_OBTAIN_B_POINTS,      MUS_PL_OBTAIN_B_POINTS },
    { MUS_OBTAIN_SYMBOL,        MUS_PL_OBTAIN_B_POINTS },

    // FireRed/LeafGreen (RG) songs
    { MUS_RG_POKE_CENTER,       MUS_DP_POKE_CENTER_DAY },
    { MUS_RG_GYM,               MUS_DP_GYM },
    { MUS_RG_CYCLING,           MUS_DP_CYCLING },
    { MUS_RG_SURF,              MUS_DP_SURF },
    { MUS_RG_HALL_OF_FAME,      MUS_DP_HALL_OF_FAME },
    { MUS_RG_VS_GYM_LEADER,     MUS_DP_VS_GYM_LEADER },
    { MUS_RG_VS_TRAINER,        MUS_DP_VS_TRAINER },
    { MUS_RG_VS_WILD,           MUS_DP_VS_WILD },
    { MUS_RG_VS_CHAMPION,       MUS_DP_VS_CHAMPION },
    { MUS_RG_VICTORY_TRAINER,   MUS_DP_VICTORY_TRAINER },
    { MUS_RG_VICTORY_WILD,      MUS_DP_VICTORY_WILD },
    { MUS_RG_VICTORY_GYM_LEADER,MUS_DP_VICTORY_GYM_LEADER },
    { MUS_RG_ENCOUNTER_GIRL,    MUS_DP_ENCOUNTER_GIRL },
    { MUS_RG_ENCOUNTER_BOY,     MUS_DP_ENCOUNTER_BOY },
    { MUS_RG_ENCOUNTER_RIVAL,   MUS_DP_ENCOUNTER_SUSPICIOUS },
    { MUS_RG_ENCOUNTER_ROCKET,  MUS_DP_ENCOUNTER_GALACTIC },
    { MUS_RG_HEAL,              MUS_DP_HEAL },
    { MUS_RG_CREDITS,           MUS_DP_CREDITS },
    { MUS_RG_GAME_CORNER,       MUS_DP_GAME_CORNER },
    { MUS_RG_ROCKET_HIDEOUT,    MUS_DP_GALACTIC_HQ },
    { MUS_RG_SILPH,             MUS_DP_GALACTIC_HQ },
    { MUS_RG_FOLLOW_ME,         MUS_DP_FOLLOW_ME },
    { MUS_RG_OBTAIN_KEY_ITEM,   MUS_DP_OBTAIN_KEY_ITEM },
    { MUS_RG_DEX_RATING,        MUS_DP_DEX_RATING },
    { MUS_RG_CAUGHT_INTRO,      MUS_DP_CAUGHT_INTRO },
    { MUS_RG_CAUGHT,            MUS_DP_CAUGHT_INTRO },
    { MUS_RG_TITLE,             MUS_DP_TITLE },
    { MUS_RG_INTRO_FIGHT,       MUS_DP_VS_WILD },
    { MUS_RG_OAK_LAB,           MUS_DP_ROWAN_LAB },
    { MUS_RG_OAK,               MUS_DP_ROWAN_LAB },
    { MUS_RG_POKE_MANSION,      MUS_DP_OLD_CHATEAU },
    { MUS_RG_POKE_TOWER,        MUS_DP_LAKE_CAVERNS },
    { MUS_RG_SS_ANNE,           MUS_DP_SURF },
    { MUS_RG_VICTORY_ROAD,      MUS_DP_VICTORY_ROAD },
    { MUS_RG_VIRIDIAN_FOREST,   MUS_DP_ETERNA_FOREST },
    { MUS_RG_MT_MOON,           MUS_DP_MT_CORONET },
    { MUS_RG_SEVII_CAVE,        MUS_DP_LAKE_CAVERNS },
    { MUS_RG_SEVII_DUNGEON,     MUS_DP_ETERNA_FOREST },
    { MUS_RG_LAVENDER,          MUS_DP_LAKE },
    { MUS_RG_CINNABAR,          MUS_DP_STARK_MOUNTAIN },
    { MUS_RG_PALLET,            MUS_DP_TWINLEAF_DAY },
    { MUS_RG_FUCHSIA,           MUS_DP_HEARTHOME_DAY },
    { MUS_RG_CELADON,           MUS_DP_ETERNA_DAY },
    { MUS_RG_VERMILLION,        MUS_DP_SUNYSHORE_DAY },
    { MUS_RG_PEWTER,            MUS_DP_OREBURGH_DAY },
    { MUS_RG_ROUTE1,            MUS_DP_ROUTE201_DAY },
    { MUS_RG_ROUTE24,           MUS_DP_ROUTE203_DAY },
    { MUS_RG_ROUTE3,            MUS_DP_ROUTE205_DAY },
    { MUS_RG_ROUTE11,           MUS_DP_ROUTE209_DAY },
    { MUS_RG_SEVII_ROUTE,       MUS_DP_ROUTE206_DAY },
    { MUS_RG_SEVII_123,         MUS_DP_SANDGEM_DAY },
    { MUS_RG_SEVII_45,          MUS_DP_FLOAROMA_DAY },
    { MUS_RG_SEVII_67,          MUS_DP_CANALAVE_DAY },
    { MUS_RG_NET_CENTER,        MUS_DP_GTS },
    { MUS_RG_UNION_ROOM,        MUS_DP_GTS },
    { MUS_RG_POKE_JUMP,         MUS_PL_WIN_MINIGAME },
    { MUS_RG_JIGGLYPUFF,        MUS_DP_FOLLOW_ME },
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
    songNum = sFanfares[fanfareNum].songNum;
    sFanfareCounter = sFanfares[fanfareNum].duration;
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
    if (gTestRunnerHeadless)
    {
        DestroyTask(taskId);
        sFanfareCounter = 0;
        return;
    }

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
    
    // If we're not using extra mega cries, we need to modify the cry mode for mega evolutions.
    #if !P_USE_EXTRA_MEGA_CRY
    if (gSpeciesInfo[species].isMegaEvolution)
    {
        mode = CRY_MODE_HIGH_PITCH;
    }
    #endif //P_USE_EXTRA_MEGA_CRY

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
    case CRY_MODE_DYNAMAX:
        length = 255;
        release = 255;
        pitch = 12150;
        chorus = 200;
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

    enum PokemonCry cryId = GetCryIdBySpecies(species);
    if (cryId != CRY_NONE)
    {
        cryId--;
        gMPlay_PokemonCry = SetPokemonCryTone(reverse ? &gCryTable_Reverse[cryId] : &gCryTable[cryId]);
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

void Task_DuckBGMForPokemonCry(u8 taskId)
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

// Remap songs from RSE/FRLG to DPPt if option is enabled
static u16 RemapSongIfDPPtEnabled(u16 songNum)
{
    u32 i;
    
    // Only remap if DPPt music option is enabled
    if (!gSaveBlock2Ptr->optionsDPPtMusic)
        return songNum;
    
    // Search for the song in the remap table
    for (i = 0; i < ARRAY_COUNT(sSongRemapTable); i++)
    {
        if (sSongRemapTable[i].rseOriginal == songNum)
            return sSongRemapTable[i].dpptReplacement;
    }
    
    // If no mapping found, return original song
    return songNum;
}

void PlayBGM(u16 songNum)
{
    if (gDisableMusic)
        songNum = 0;
    if (songNum == MUS_NONE)
        songNum = 0;
    
    // Apply DPPt song remapping if enabled
    songNum = RemapSongIfDPPtEnabled(songNum);
    
    m4aSongNumStart(songNum);
}

void PlaySE(u16 songNum)
{
    m4aSongNumStart(songNum);
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
