//Regions of the IO memory.

#ifndef IO_REGIONS_H
#define IO_REGIONS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <basics/mem_regs.h>
#include <basics/types.h>

//LCD registers.
#define IO_DISPCNT (*(u16*)(MEM_IO + 0x0000))
#define IO_GREENSWAP (*(u16*)(MEM_IO + 0x0002))
#define IO_DISPSTAT (*(vu16*)(MEM_IO + 0x0004))
#define IO_VCOUNT (*(vu16*)(MEM_IO + 0x0006))
#define IO_BG0CNT (*(u16*)(MEM_IO + 0x0008))
#define IO_BG1CNT (*(u16*)(MEM_IO + 0x000A))
#define IO_BG2CNT (*(u16*)(MEM_IO + 0x000C))
#define IO_BG3CNT (*(u16*)(MEM_IO + 0x000E))
#define IO_BG0HOFS (*(s16*)(MEM_IO + 0x0010))
#define IO_BG0VOFS (*(s16*)(MEM_IO + 0x0012))
#define IO_BG1HOFS (*(s16*)(MEM_IO + 0x0014))
#define IO_BG1VOFS (*(s16*)(MEM_IO + 0x0016))
#define IO_BG2HOFS (*(s16*)(MEM_IO + 0x0018))
#define IO_BG2VOFS (*(s16*)(MEM_IO + 0x001A))
#define IO_BG3HOFS (*(s16*)(MEM_IO + 0x001C))
#define IO_BG3VOFS (*(s16*)(MEM_IO + 0x001E))
#define IO_BG2PA (*(s16*)(MEM_IO + 0x0020))
#define IO_BG2PB (*(s16*)(MEM_IO + 0x0022))
#define IO_BG2PC (*(s16*)(MEM_IO + 0x0024))
#define IO_BG2PD (*(s16*)(MEM_IO + 0x0026))
#define IO_BG2X (*(s32*)(MEM_IO + 0x0028))
#define IO_BG2Y (*(s32*)(MEM_IO + 0x002C))
#define IO_BG3PA (*(s16*)(MEM_IO + 0x0030))
#define IO_BG3PB (*(s16*)(MEM_IO + 0x0032))
#define IO_BG3PC (*(s16*)(MEM_IO + 0x0034))
#define IO_BG3PD (*(s16*)(MEM_IO + 0x0036))
#define IO_BG3X (*(s32*)(MEM_IO + 0x0038))
#define IO_BG3Y (*(s32*)(MEM_IO + 0x003C))
#define IO_WIN0H (*(u16*)(MEM_IO + 0x0040))
#define IO_WIN1H (*(u16*)(MEM_IO + 0x0042))
#define IO_WIN0V (*(u16*)(MEM_IO + 0x0044))
#define IO_WIN1V (*(u16*)(MEM_IO + 0x0046))
#define IO_WININ (*(u16*)(MEM_IO + 0x0048))
#define IO_WINOUT (*(u16*)(MEM_IO + 0x004A))
#define IO_MOSAIC (*(s32*)(MEM_IO + 0x004C))
#define IO_BLDCNT (*(u16*)(MEM_IO + 0x0050))
#define IO_BLDALPHA (*(u16*)(MEM_IO + 0x0052))
#define IO_BLDY (*(u16*)(MEM_IO + 0x0054))

//Sound registers (based on pin8's naming).
#define IO_SND1SWEEP (*(u16*)(MEM_IO + 0x0060))
#define IO_SND1CNT (*(u16*)(MEM_IO + 0x0062))
#define IO_SND1FREQ (*(u16*)(MEM_IO + 0x0064))
#define IO_SND2CNT (*(u16*)(MEM_IO + 0x0068))
#define IO_SND2FREQ (*(u16*)(MEM_IO + 0x006C))
#define IO_SND3SEL (*(u16*)(MEM_IO + 0x0070))
#define IO_SND3CNT (*(u16*)(MEM_IO + 0x0072))
#define IO_SND3FREQ (*(u16*)(MEM_IO + 0x0074))
#define IO_SND4CNT (*(u16*)(MEM_IO + 0x0078))
#define IO_SND4FREQ (*(u16*)(MEM_IO + 0x007C))
#define IO_SNDDMGCNT (*(u16*)(MEM_IO + 0x0080))
#define IO_SNDDSCNT (*(u16*)(MEM_IO + 0x0082))
#define IO_SNDSTAT (*(u16*)(MEM_IO + 0x0084))
#define IO_SNDBIAS (*(u16*)(MEM_IO + 0x0088))

//DMA registers.
#define IO_DMA0SRC (*(u32*)(MEM_IO + 0x00B0))
#define IO_DMA0DST (*(u32*)(MEM_IO + 0x00B4))
#define IO_DMA0CNT (*(u32*)(MEM_IO + 0x00B8))
#define IO_DMA1SRC (*(u32*)(MEM_IO + 0x00BC))
#define IO_DMA1DST (*(u32*)(MEM_IO + 0x00C0))
#define IO_DMA1CNT (*(u32*)(MEM_IO + 0x00C4))
#define IO_DMA2SRC (*(u32*)(MEM_IO + 0x00C8))
#define IO_DMA2DST (*(u32*)(MEM_IO + 0x00CC))
#define IO_DMA2CNT (*(u32*)(MEM_IO + 0x00D0))
#define IO_DMA3SRC (*(u32*)(MEM_IO + 0x00D4))
#define IO_DMA3DST (*(u32*)(MEM_IO + 0x00D8))
#define IO_DMA3CNT (*(u32*)(MEM_IO + 0x00DC))

//Timer registers.
#define IO_TM0DATA (*(u16*)(MEM_IO + 0x0100))
#define IO_TM0CNT (*(u16*)(MEM_IO + 0x0102))
#define IO_TM1DATA (*(u16*)(MEM_IO + 0x0104))
#define IO_TM1CNT (*(u16*)(MEM_IO + 0x0106))
#define IO_TM2DATA (*(u16*)(MEM_IO + 0x0108))
#define IO_TM2CNT (*(u16*)(MEM_IO + 0x010A))
#define IO_TM3DATA (*(u16*)(MEM_IO + 0x010C))
#define IO_TM3CNT (*(u16*)(MEM_IO + 0x010E))

//Key registers.
#define IO_KEYINPUT (*(vu16*)(MEM_IO + 0x0130))
#define IO_KEYCNT (*(u16*)(MEM_IO + 0x0132))

//Interrupt registers.
#define IO_IE (*(u16*)(MEM_IO + 0x0200))
#define IO_IF (*(u16*)(MEM_IO + 0x0202))
#define IO_IME (*(u16*)(MEM_IO + 0x0208))
#define IO_IFBIOS (*(u16*)(0x03007FF8)) //Bruh
#define IO_ISR (*(fnptr*)(0x03007FFC)) //Bruh

#ifdef __cplusplus
}
#endif

#endif
