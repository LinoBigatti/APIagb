//Load an object's palette, using 16 bit units. (Not recommended)

#include <object/obj_palette_16.h>

void obj_palette_16(const void *src_, u32 length, u32 palbank) {
	u16 *src = (u16*)src_;
	u16 *dst;
	if(length == 16) {
		dst = (u16*)&obj_pal_memory[16 * palbank];
	} else {
		dst = (u16*)&obj_pal_memory[0];
	}
	int ii;
	
	for(ii = 0; ii < length; ii++) {
		dst[ii] = src[ii];
	}
}