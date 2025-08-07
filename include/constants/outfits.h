#ifndef GUARD_CONSTANTS_OUTFITS_H
#define GUARD_CONSTANTS_OUTFITS_H

//! macro modes

// ScrCmd_getoutfitstatus
#define OUTFIT_CHECK_FLAG 0
#define OUTFIT_CHECK_USED 1
// ScrCmd_toggleoutfit
#define OUTFIT_TOGGLE_UNLOCK 0
#define OUTFIT_TOGGLE_LOCK 1
// BufferOutfitStrings
#define OUTFIT_BUFFER_NAME  0
#define OUTFIT_BUFFER_DESC  1

//! outfits
#define OUTFIT_NONE 0
#define OUTFIT_BASIC 1
#define OUTFIT_MODERN 2
#define OUTFIT_SINNOH 3
#define OUTFIT_KANTO 4
#define OUTFIT_COUNT 5

// inclusive
#define OUTFIT_BEGIN OUTFIT_BASIC
#define OUTFIT_END   OUTFIT_SINNOH

#define DEFAULT_OUTFIT OUTFIT_BASIC

#endif //! GUARD_CONSTANTS_OUTFITS_H
