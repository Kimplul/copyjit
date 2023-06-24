#include "../common.h"
DEFINE_OP(bsx18) {
	NEXT_OP(sp, a, x >> 18, y, o);
}
