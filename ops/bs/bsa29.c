#include "../common.h"
DEFINE_OP(bsa29) {
	NEXT_OP(sp, a >> 29, x, y, o);
}
