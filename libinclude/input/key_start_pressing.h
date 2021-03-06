//See if a key is starting to be pressed.

#ifndef KEY_START_PRESSING_H
#define KEY_START_PRESSING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/types.h>
#include <IO/regions.h>
#include <input/key_defs.h>
#include <input/key_is_pressed.h>
#include <input/key_was_not_pressed.h>

static inline u32 key_start_pressing(u16 key)
{ return (key_is_pressed(key) & key_was_not_pressed(key)); }

#ifdef __cplusplus
}
#endif

#endif
