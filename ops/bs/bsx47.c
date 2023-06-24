#include "../common.h"
DEFINE_OP(bsx47) {
	NEXT_OP(sp, a, x >> 47, y, o);
}
