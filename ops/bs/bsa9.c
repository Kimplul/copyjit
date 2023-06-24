#include "../common.h"
DEFINE_OP(bsa9) {
	NEXT_OP(sp, a >> 9, x, y, o);
}
