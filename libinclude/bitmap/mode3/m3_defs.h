//Mode 3 types and defines.

#ifndef M3_DEFS_H
#define M3_DEFS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/mem_regs.h>
#include <basics/types.h>

typedef u16 m3_color;

#define M3_WIDTH 240
#define M3_HEIGHT 160

#define m3_vram ((m3_color*)(MEM_VRAM))

#ifdef __cplusplus
}
#endif

#endif
