//See if a key was pressed.

#ifndef KEY_WAS_PRESSED_H
#define KEY_WAS_PRESSED_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/types.h>
#include <IO/regions.h>
#include <input/key_defs.h>

static inline u32 key_was_pressed(u16 key)
{ return previous_key & key; }

#ifdef __cplusplus
}
#endif

#endif
