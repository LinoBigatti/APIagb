//Copy using 16 bit DMA, channel 1.

#ifndef DMA1_16_H
#define DMA1_16_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/types.h>
#include <IO.h>

void dma1_16(const void *src, const void *dst, u32 length, u32 da, u32 sa, u32 timing, u32 other);

#ifdef __cplusplus
}
#endif

#endif
