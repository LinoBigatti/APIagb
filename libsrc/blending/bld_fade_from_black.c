//Fade from black.

#include <blending/bld_fade_from_black.h>

void bld_fade_from_black(void) {
	float alpha = 1;
	bldy_set(alpha);
	for(; alpha > 0; alpha -= 0.01) {
		Vsync();
		bldy_set(alpha);
	}
}