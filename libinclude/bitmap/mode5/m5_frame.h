//Draw a frame on mode 5.

#ifndef M5_FRAME_H
#define M5_FRAME_H

#include <basics/types.h>
#include <bitmap/mode5/m5_defs.h>
#include <bitmap/mode5/m5_line.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void m5_frame(u32 x, u32 y, u32 width, u32 height, m5_color clr);

#ifdef __cplusplus
}
#endif

#endif