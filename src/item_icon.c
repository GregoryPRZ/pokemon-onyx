#include "global.h"
#include "decompress.h"
#include "graphics.h"
#include "item_icon.h"
#include "malloc.h"
#include "sprite.h"
#include "constants/items.h"
#include "pokevial.h" // Pokevial Branch
#include "item.h"
#include "battle_main.h"
#include "pokemon_icon.h"
#include "window.h"
#include "palette.h"

// EWRAM vars
EWRAM_DATA u8 *gItemIconDecompressionBuffer = NULL;
EWRAM_DATA u8 *gItemIcon4x4Buffer = NULL;

// const rom data
#include "data/item_icon_table.h"

static const struct OamData sOamData_ItemIcon =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 2,
    .affineParam = 0
};

static const union AnimCmd sSpriteAnim_ItemIcon[] =
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_ItemIcon[] =
{
    sSpriteAnim_ItemIcon
};

const struct SpriteTemplate gItemIconSpriteTemplate =
{
    .tileTag = 0,
    .paletteTag = 0,
    .oam = &sOamData_ItemIcon,
    .anims = sSpriteAnimTable_ItemIcon,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

// code
bool8 AllocItemIconTemporaryBuffers(void)
{
    gItemIconDecompressionBuffer = Alloc(0x120);
    if (gItemIconDecompressionBuffer == NULL)
        return FALSE;

    gItemIcon4x4Buffer = AllocZeroed(0x200);
    if (gItemIcon4x4Buffer == NULL)
    {
        Free(gItemIconDecompressionBuffer);
        return FALSE;
    }

    return TRUE;
}

void FreeItemIconTemporaryBuffers(void)
{
    Free(gItemIconDecompressionBuffer);
    Free(gItemIcon4x4Buffer);
}

void CopyItemIconPicTo4x4Buffer(const void *src, void *dest)
{
    u8 i;

    for (i = 0; i < 3; i++)
        CpuCopy16(src + i * 96, dest + i * 128, 0x60);
}

u8 AddItemIconSprite(u16 tilesTag, u16 paletteTag, u16 itemId)
{
    if (!AllocItemIconTemporaryBuffers())
    {
        return MAX_SPRITES;
    }
    else
    {
        u8 spriteId;
        struct SpriteSheet spriteSheet;
        struct CompressedSpritePalette spritePalette;
        struct SpriteTemplate *spriteTemplate;

        LZDecompressWram(GetItemIconPic(itemId), gItemIconDecompressionBuffer);
        CopyItemIconPicTo4x4Buffer(gItemIconDecompressionBuffer, gItemIcon4x4Buffer);
        spriteSheet.data = gItemIcon4x4Buffer;
        spriteSheet.size = 0x200;
        spriteSheet.tag = tilesTag;
        LoadSpriteSheet(&spriteSheet);

        spritePalette.data = GetItemIconPalette(itemId);
        spritePalette.tag = paletteTag;
        LoadCompressedSpritePalette(&spritePalette);

        spriteTemplate = Alloc(sizeof(*spriteTemplate));
        CpuCopy16(&gItemIconSpriteTemplate, spriteTemplate, sizeof(*spriteTemplate));
        spriteTemplate->tileTag = tilesTag;
        spriteTemplate->paletteTag = paletteTag;
        spriteId = CreateSprite(spriteTemplate, 0, 0, 0);

        FreeItemIconTemporaryBuffers();
        Free(spriteTemplate);

        return spriteId;
    }
}

u8 AddCustomItemIconSprite(const struct SpriteTemplate *customSpriteTemplate, u16 tilesTag, u16 paletteTag, u16 itemId)
{
    if (!AllocItemIconTemporaryBuffers())
    {
        return MAX_SPRITES;
    }
    else
    {
        u8 spriteId;
        struct SpriteSheet spriteSheet;
        struct CompressedSpritePalette spritePalette;
        struct SpriteTemplate *spriteTemplate;

        LZDecompressWram(GetItemIconPic(itemId), gItemIconDecompressionBuffer);
        CopyItemIconPicTo4x4Buffer(gItemIconDecompressionBuffer, gItemIcon4x4Buffer);
        spriteSheet.data = gItemIcon4x4Buffer;
        spriteSheet.size = 0x200;
        spriteSheet.tag = tilesTag;
        LoadSpriteSheet(&spriteSheet);

        spritePalette.data = GetItemIconPalette(itemId);
        spritePalette.tag = paletteTag;
        LoadCompressedSpritePalette(&spritePalette);

        spriteTemplate = Alloc(sizeof(*spriteTemplate));
        CpuCopy16(customSpriteTemplate, spriteTemplate, sizeof(*spriteTemplate));
        spriteTemplate->tileTag = tilesTag;
        spriteTemplate->paletteTag = paletteTag;
        spriteId = CreateSprite(spriteTemplate, 0, 0, 0);

        FreeItemIconTemporaryBuffers();
        Free(spriteTemplate);

        return spriteId;
    }
}

const void *GetItemIconPic(u16 itemId)
{
    if (itemId == ITEM_LIST_END)
        return gItemIcon_ReturnToFieldArrow; // Use last icon, the "return to field" arrow
    if (itemId >= ITEMS_COUNT)
        return gItemsInfo[0].iconPic;
    if (itemId >= ITEM_TM01 && itemId < ITEM_HM01 + NUM_HIDDEN_MACHINES)
    {
        if (itemId < ITEM_TM01 + NUM_TECHNICAL_MACHINES)
            return gItemIcon_TM;
        return gItemIcon_HM;
    }

    // Start Pokevial Branch
    if (itemId == ITEM_POKEVIAL)
        return PokevialGetDoseIcon();
    // End Pokevial Branch

    return gItemsInfo[itemId].iconPic;
}

const void *GetItemIconPalette(u16 itemId)
{
    if (itemId == ITEM_LIST_END)
        return gItemIconPalette_ReturnToFieldArrow;
    if (itemId >= ITEMS_COUNT)
        return gItemsInfo[0].iconPalette;
    if (itemId >= ITEM_TM01 && itemId < ITEM_HM01 + NUM_HIDDEN_MACHINES)
        return gTypesInfo[gMovesInfo[gItemsInfo[itemId].secondaryId].type].paletteTMHM;

    return gItemsInfo[itemId].iconPalette;
}

u8 BlitPokemonIconToWindow(u16 species, u8 windowId, u16 x, u16 y, void * paletteDest)
{
    u8 palId;

    if (!AllocItemIconTemporaryBuffers())
        return 16;

    palId = GetMonIconPaletteIndexFromSpecies(species);

    //LZDecompressWram(GetMonIconTiles(species, FALSE), gItemIconDecompressionBuffer);
    //CopyItemIconPicTo4x4Buffer(GetMonIconTiles(species, FALSE), gItemIcon4x4Buffer);
    
    BlitBitmapToWindow(windowId, GetMonIconTiles(species, FALSE), x, y, 32, 32);

    //gMonIconPaletteTable

    // if paletteDest is nonzero, copies the decompressed palette directly into it
    // otherwise, loads the compressed palette into the windowId's BG palette ID
    if (paletteDest) 
    {
        CpuFastCopy(gMonIconPaletteTable[palId].data, paletteDest, PLTT_SIZE_4BPP);
    } 
    else 
    {
        LoadPalette(gMonIconPaletteTable[palId].data, BG_PLTT_ID(gWindows[windowId].window.paletteNum), PLTT_SIZE_4BPP);
    }
    FreeItemIconTemporaryBuffers();
    return 0;
}