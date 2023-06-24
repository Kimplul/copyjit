#include "../common.h"
DEFINE_OP(bsy29) {
	NEXT_OP(sp, a, x, y >> 29, o);
}
