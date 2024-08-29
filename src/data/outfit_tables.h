#include "constants/global.h"
#include "constants/event_objects.h"

#if MODERN == 0
static const u8 sText_OutfitName_UsualGreen[] = _("BASIC");
static const u8 sText_OutfitDesc_UsualGreen[] = _(
    "Usual, but\nbasic OUTFIT.");

static const u8 sText_OutfitName_Sinnoh[] = _("MODERN");
static const u8 sText_OutfitDesc_Sinnoh[] = _(
    "Modernized, but\nbasic OUTFIT.");

static const u8 sText_OutfitName_Sinnoh[] = _("SINNOH");
static const u8 sText_OutfitDesc_Sinnoh[] = _(
    "Popular OUTFIT,\nfrom SINNOH.");

static const u8 sText_OutfitName_Kanto[] = _("KANTO");
static const u8 sText_OutfitDesc_Kanto[] = _(
    "Classic OUTFIT,\nfrom KANTO.");
#endif

static const u16 sRegionMapPlayerIcon_BrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_MayGfx[] = INCBIN_U16("graphics/pokenav/region_map/may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RSMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/rs_may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_DawnGfx[] = INCBIN_U16("graphics/pokenav/region_map/dawn_icon.4bpp");

static const u16 sRegionMapPlayerIcon_LucasGfx[] = INCBIN_U16("graphics/pokenav/region_map/lucas_icon.4bpp");

static const u16 sRegionMapPlayerIcon_ModernMayGfx[] = INCBIN_U16("graphics/pokenav/region_map/oras_may_icon.4bpp");

static const u16 sRegionMapPlayerIcon_ModernBrendanGfx[] = INCBIN_U16("graphics/pokenav/region_map/oras_brendan_icon.4bpp");

static const u16 sRegionMapPlayerIcon_LeafGfx[] = INCBIN_U16("graphics/pokenav/region_map/leaf_icon.4bpp");

static const u16 sRegionMapPlayerIcon_RedGfx[] = INCBIN_U16("graphics/pokenav/region_map/red_icon.4bpp");
//! TODO: Should the gfx here be seperated?

static const u8 sFrontierPassPlayerIcons_BrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/map_heads.4bpp");

static const u8 sFrontierPassPlayerIcons_RSBrendanMay_Gfx[] = INCBIN_U8("graphics/frontier_pass/rs_map_heads.4bpp");

#define TRAINER_ID(m, f) \
{ \
    [MALE] =   { TRAINER_PIC_ ## m, TRAINER_BACK_PIC_ ## m, }, \
    [FEMALE] = { TRAINER_PIC_ ## f, TRAINER_BACK_PIC_ ## f, }, \
}

#define AVATAR_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## m ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## m ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## m ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## m ## _UNDERWATER \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_STATE_NORMAL] =     OBJ_EVENT_GFX_ ## f ## _NORMAL, \
        [PLAYER_AVATAR_STATE_BIKE] =       OBJ_EVENT_GFX_ ## f ## _ACRO_BIKE, \
        [PLAYER_AVATAR_STATE_SURFING] =    OBJ_EVENT_GFX_ ## f ## _SURFING, \
        [PLAYER_AVATAR_STATE_UNDERWATER] = OBJ_EVENT_GFX_ ## f ## _UNDERWATER \
    }, \
}

#define ANIM_GFX_ID(m, f) \
{ \
    [MALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## m ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## m ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## m ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## m ## _DECORATING, \
        [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_ ## m ## _FIELD_MOVE \
    }, \
    [FEMALE] = { \
        [PLAYER_AVATAR_GFX_FIELD_MOVE] = OBJ_EVENT_GFX_ ## f ## _FIELD_MOVE, \
        [PLAYER_AVATAR_GFX_FISHING] =    OBJ_EVENT_GFX_ ## f ## _FISHING, \
        [PLAYER_AVATAR_GFX_WATERING] =   OBJ_EVENT_GFX_ ## f ## _WATERING, \
        [PLAYER_AVATAR_GFX_DECORATING] = OBJ_EVENT_GFX_ ## f ## _DECORATING, \
        [PLAYER_AVATAR_GFX_VSSEEKER] =   OBJ_EVENT_GFX_ ## f ## _FIELD_MOVE \
    }, \
}

#define REGION_MAP_GFX(m, f) { sRegionMapPlayerIcon_ ## m ## Gfx, sRegionMapPlayerIcon_ ## f ## Gfx }

// bandaids to avoid adding unnecessary merge conflicts
// remove these if you have them added/renamed yourself.
#define TRAINER_PIC_RUBY_SAPPHIRE_BRENDAN TRAINER_PIC_RS_BRENDAN
#define TRAINER_PIC_RUBY_SAPPHIRE_MAY     TRAINER_PIC_RS_MAY

#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_NORMAL     OBJ_EVENT_GFX_LINK_RS_BRENDAN
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_ACRO_BIKE  OBJ_EVENT_GFX_BRENDAN_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_SURFING    OBJ_EVENT_GFX_BRENDAN_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_UNDERWATER OBJ_EVENT_GFX_BRENDAN_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FISHING    OBJ_EVENT_GFX_BRENDAN_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_WATERING   OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_DECORATING OBJ_EVENT_GFX_BRENDAN_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_BRENDAN_FIELD_MOVE OBJ_EVENT_GFX_BRENDAN_FIELD_MOVE

#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_NORMAL     OBJ_EVENT_GFX_LINK_RS_MAY
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_ACRO_BIKE  OBJ_EVENT_GFX_MAY_ACRO_BIKE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_SURFING    OBJ_EVENT_GFX_MAY_SURFING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_UNDERWATER OBJ_EVENT_GFX_MAY_UNDERWATER
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FISHING    OBJ_EVENT_GFX_MAY_FISHING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_WATERING   OBJ_EVENT_GFX_MAY_WATERING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_DECORATING OBJ_EVENT_GFX_MAY_DECORATING
#define OBJ_EVENT_GFX_OUTFIT_RS_MAY_FIELD_MOVE OBJ_EVENT_GFX_MAY_FIELD_MOVE

#define OBJ_EVENT_GFX_LUCAS_WATERING OBJ_EVENT_GFX_BRENDAN_WATERING
#define OBJ_EVENT_GFX_DAWN_WATERING OBJ_EVENT_GFX_MAY_WATERING

const struct Outfit gOutfits[OUTFIT_COUNT] =
{
    [OUTFIT_NONE] = {
        .isHidden = TRUE
    },
    [OUTFIT_BASIC] = {
        //! DESC: if sets to TRUE, it will not be shown in the OUTFIT menu if it's locked.
        .isHidden = FALSE,

        //! DESC: prices for purchasing them.
        .prices = { 0, 0 },

        //! agbcc doesnt like COMPOUND_STRING on my end
        //! DESC: outfit's name
        #if MODERN == 1
        .name = COMPOUND_STRING("BASIC"),
        #else
        .name = sText_OutfitName_UsualGreen,
        #endif

        //! DESC: outfit's description
        #if MODERN == 1
        .desc = COMPOUND_STRING("Usual, but\nbasic OUTFIT."),
        #else
        .desc = sText_OutfitDesc_UsualGreen,
        #endif

        //! DESC: trainer front & back pic index
        //! (see include/constants/trainers.h)
        .trainerPics = TRAINER_ID(BRENDAN, MAY),

        //! DESC: overworld avatars, consisting of: walking, cycling,
        //! surfing, and underwater. (see include/constants/event_object.h)
        .avatarGfxIds = AVATAR_GFX_ID(BRENDAN, MAY),

        //! DESC: overworld anims, consisting of: field move, fishing,
        //! water, and decorating. (see include/constants/event_object.h)
        .animGfxIds = ANIM_GFX_ID(BRENDAN, MAY),

        //! DESC: head icons gfx&pal for region map
        .iconsRM = REGION_MAP_GFX(Brendan, May),

        //! DESC: head icons gfx&pal for frontier pass
        //! note that frontier pass needs to be in one sprite instead of two,
        //! unlike region map. (probably should split them tbh)
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_MODERN] = {
        .isHidden = FALSE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("MODERN"),
        .desc = COMPOUND_STRING("Modernized, but\nbasic OUTFIT."),
        #else
        .name = sText_OutfitName_UnusualRed,
        .desc = sText_OutfitDesc_UnusualRed,
        #endif
        .trainerPics = TRAINER_ID(MODERN_BRENDAN, MODERN_MAY),
        .avatarGfxIds = AVATAR_GFX_ID(MODERN_BRENDAN, MODERN_MAY),
        .animGfxIds = ANIM_GFX_ID(MODERN_BRENDAN, MODERN_MAY),
        .iconsRM = REGION_MAP_GFX(ModernBrendan, ModernMay),
        .iconsFP = sFrontierPassPlayerIcons_RSBrendanMay_Gfx,
    },
    [OUTFIT_SINNOH] = {
        .isHidden = FALSE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("SINNOH"),
        .desc = COMPOUND_STRING("Popular OUTFIT,\nfrom SINNOH."),
        #else
        .name = sText_OutfitName_Sinnoh,
        .desc = sText_OutfitDesc_Sinnoh,
        #endif
        .trainerPics = TRAINER_ID(LUCAS, DAWN),
        .avatarGfxIds = AVATAR_GFX_ID(LUCAS, DAWN),
        .animGfxIds = ANIM_GFX_ID(LUCAS, DAWN),
        .iconsRM = REGION_MAP_GFX(Lucas, Dawn),
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
    [OUTFIT_KANTO] = {
        .isHidden = FALSE,
        .prices = { 200, 500 },
        #if MODERN == 1
        .name = COMPOUND_STRING("KANTO"),
        .desc = COMPOUND_STRING("Classic OUTFIT,\nfrom KANTO."),
        #else
        .name = sText_OutfitName_Kanto,
        .desc = sText_OutfitDesc_Kanto,
        #endif
        .trainerPics = TRAINER_ID(RED, LEAF),
        .avatarGfxIds = AVATAR_GFX_ID(RED, LEAF),
        .animGfxIds = ANIM_GFX_ID(RED, LEAF),
        .iconsRM = REGION_MAP_GFX(Red, Leaf),
        .iconsFP = sFrontierPassPlayerIcons_BrendanMay_Gfx,
    },
};
