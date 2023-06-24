#include "../common.h"
DEFINE_OP(bsx3) {
	NEXT_OP(sp, a, x >> 3, y, o);
}
