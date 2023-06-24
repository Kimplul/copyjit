#include "../common.h"
DEFINE_OP(bsx13) {
	NEXT_OP(sp, a, x >> 13, y, o);
}
