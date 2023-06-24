#include "../common.h"
DEFINE_OP(bsx27) {
	NEXT_OP(sp, a, x >> 27, y, o);
}
