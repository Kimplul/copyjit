#include "../common.h"
DEFINE_OP(bsx45) {
	NEXT_OP(sp, a, x >> 45, y, o);
}
