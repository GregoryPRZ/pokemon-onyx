static const u32 sFieldMugshotGfx_TestNormal[] = INCBIN_U32("graphics/field_mugshots/test/normal.4bpp.lz");
static const u32 sFieldMugshotGfx_TestAlt[] = INCBIN_U32("graphics/field_mugshots/test/alt.4bpp.lz");
static const u16 sFieldMugshotPal_TestNormal[] = INCBIN_U16("graphics/field_mugshots/test/normal.gbapal");
static const u16 sFieldMugshotPal_TestAlt[] = INCBIN_U16("graphics/field_mugshots/test/alt.gbapal");

static const u32 sFieldMugshotGfx_RoxanneNormal[] = INCBIN_U32("graphics/field_mugshots/roxanne/normal.4bpp.lz");
static const u16 sFieldMugshotPal_RoxanneNormal[] = INCBIN_U16("graphics/field_mugshots/roxanne/normal.gbapal");

static const u32 sFieldMugshotGfx_BrawlyNormal[] = INCBIN_U32("graphics/field_mugshots/brawly/normal.4bpp.lz");
static const u16 sFieldMugshotPal_BrawlyNormal[] = INCBIN_U16("graphics/field_mugshots/brawly/normal.gbapal");

static const u32 sFieldMugshotGfx_WattsonNormal[] = INCBIN_U32("graphics/field_mugshots/wattson/normal.4bpp.lz");
static const u16 sFieldMugshotPal_WattsonNormal[] = INCBIN_U16("graphics/field_mugshots/wattson/normal.gbapal");

static const u32 sFieldMugshotGfx_FlanneryNormal[] = INCBIN_U32("graphics/field_mugshots/flannery/normal.4bpp.lz");
static const u16 sFieldMugshotPal_FlanneryNormal[] = INCBIN_U16("graphics/field_mugshots/flannery/normal.gbapal");

static const u32 sFieldMugshotGfx_NormanNormal[] = INCBIN_U32("graphics/field_mugshots/norman/normal.4bpp.lz");
static const u16 sFieldMugshotPal_NormanNormal[] = INCBIN_U16("graphics/field_mugshots/norman/normal.gbapal");

static const u32 sFieldMugshotGfx_WinonaNormal[] = INCBIN_U32("graphics/field_mugshots/winona/normal.4bpp.lz");
static const u16 sFieldMugshotPal_WinonaNormal[] = INCBIN_U16("graphics/field_mugshots/winona/normal.gbapal");

static const u32 sFieldMugshotGfx_TateNormal[] = INCBIN_U32("graphics/field_mugshots/tate/normal.4bpp.lz");
static const u16 sFieldMugshotPal_TateNormal[] = INCBIN_U16("graphics/field_mugshots/tate/normal.gbapal");

static const u32 sFieldMugshotGfx_LizaNormal[] = INCBIN_U32("graphics/field_mugshots/liza/normal.4bpp.lz");
static const u16 sFieldMugshotPal_LizaNormal[] = INCBIN_U16("graphics/field_mugshots/liza/normal.gbapal");

static const u32 sFieldMugshotGfx_JuanNormal[] = INCBIN_U32("graphics/field_mugshots/juan/normal.4bpp.lz");
static const u16 sFieldMugshotPal_JuanNormal[] = INCBIN_U16("graphics/field_mugshots/juan/normal.gbapal");

static const u32 sFieldMugshotGfx_SidneyNormal[] = INCBIN_U32("graphics/field_mugshots/sidney/normal.4bpp.lz");
static const u16 sFieldMugshotPal_SidneyNormal[] = INCBIN_U16("graphics/field_mugshots/sidney/normal.gbapal");

static const u32 sFieldMugshotGfx_PhoebeNormal[] = INCBIN_U32("graphics/field_mugshots/phoebe/normal.4bpp.lz");
static const u16 sFieldMugshotPal_PhoebeNormal[] = INCBIN_U16("graphics/field_mugshots/phoebe/normal.gbapal");

static const u32 sFieldMugshotGfx_GlaciaNormal[] = INCBIN_U32("graphics/field_mugshots/glacia/normal.4bpp.lz");
static const u16 sFieldMugshotPal_GlaciaNormal[] = INCBIN_U16("graphics/field_mugshots/glacia/normal.gbapal");

static const u32 sFieldMugshotGfx_DrakeNormal[] = INCBIN_U32("graphics/field_mugshots/drake/normal.4bpp.lz");
static const u16 sFieldMugshotPal_DrakeNormal[] = INCBIN_U16("graphics/field_mugshots/drake/normal.gbapal");

static const u32 sFieldMugshotGfx_StevenNormal[] = INCBIN_U32("graphics/field_mugshots/steven/normal.4bpp.lz");
static const u16 sFieldMugshotPal_StevenNormal[] = INCBIN_U16("graphics/field_mugshots/steven/normal.gbapal");

static const u32 sFieldMugshotGfx_MaxieNormal[] = INCBIN_U32("graphics/field_mugshots/maxie/normal.4bpp.lz");
static const u16 sFieldMugshotPal_MaxieNormal[] = INCBIN_U16("graphics/field_mugshots/maxie/normal.gbapal");

static const u32 sFieldMugshotGfx_ArchieNormal[] = INCBIN_U32("graphics/field_mugshots/archie/normal.4bpp.lz");
static const u16 sFieldMugshotPal_ArchieNormal[] = INCBIN_U16("graphics/field_mugshots/archie/normal.gbapal");

struct MugshotGfx
{
    const u32 *gfx;
    const u16 *pal;
};

static const struct MugshotGfx sFieldMugshots[MUGSHOT_COUNT][EMOTE_COUNT] =
{
    [MUGSHOT_TEST] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TestNormal,
            .pal = sFieldMugshotPal_TestNormal,
        },

        [EMOTE_ALT] =
        {
            .gfx = sFieldMugshotGfx_TestAlt,
            .pal = sFieldMugshotPal_TestAlt,
        },
    },

    [MUGSHOT_ROXANNE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_RoxanneNormal,
            .pal = sFieldMugshotPal_RoxanneNormal,
        },
    },

    [MUGSHOT_BRAWLY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_BrawlyNormal,
            .pal = sFieldMugshotPal_BrawlyNormal,
        },
    },

    [MUGSHOT_WATTSON] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_WattsonNormal,
            .pal = sFieldMugshotPal_WattsonNormal,
        },
    },

    [MUGSHOT_FLANNERY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_FlanneryNormal,
            .pal = sFieldMugshotPal_FlanneryNormal,
        },
    },

    [MUGSHOT_NORMAN] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_NormanNormal,
            .pal = sFieldMugshotPal_NormanNormal,
        },
    },


    [MUGSHOT_WINONA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_WinonaNormal,
            .pal = sFieldMugshotPal_WinonaNormal,
        },
    },


    [MUGSHOT_TATE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_TateNormal,
            .pal = sFieldMugshotPal_TateNormal,
        },
    },

    [MUGSHOT_LIZA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_LizaNormal,
            .pal = sFieldMugshotPal_LizaNormal,
        },
    },

    [MUGSHOT_JUAN] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_JuanNormal,
            .pal = sFieldMugshotPal_JuanNormal,
        },
    },

    [MUGSHOT_SIDNEY] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_SidneyNormal,
            .pal = sFieldMugshotPal_SidneyNormal,
        },
    },

    [MUGSHOT_PHOEBE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_PhoebeNormal,
            .pal = sFieldMugshotPal_PhoebeNormal,
        },
    },

    [MUGSHOT_GLACIA] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_GlaciaNormal,
            .pal = sFieldMugshotPal_GlaciaNormal,
        },
    },

    [MUGSHOT_DRAKE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_DrakeNormal,
            .pal = sFieldMugshotPal_DrakeNormal,
        },
    },

    [MUGSHOT_STEVEN] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_StevenNormal,
            .pal = sFieldMugshotPal_StevenNormal,
        },
    },

    [MUGSHOT_ARCHIE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_ArchieNormal,
            .pal = sFieldMugshotPal_ArchieNormal,
        },
    },

    [MUGSHOT_MAXIE] =
    {
        [EMOTE_NORMAL] =
        {
            .gfx = sFieldMugshotGfx_MaxieNormal,
            .pal = sFieldMugshotPal_MaxieNormal,
        },
    },
};
