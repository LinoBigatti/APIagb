//Copy using 32 bit DMA, channel 2.

#ifndef DMA2_32_H
#define DMA2_32_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/types.h>
#include <IO.h>

void dma2_32(const void *src, const void *dst, u32 length, u32 da, u32 sa, u32 timing, u32 other);

#ifdef __cplusplus
}
#endif

#endif
