#include "../common.h"
DEFINE_OP(bsa3) {
	NEXT_OP(sp, a >> 3, x, y, o);
}
