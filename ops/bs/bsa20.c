#include "../common.h"
DEFINE_OP(bsa20) {
	NEXT_OP(sp, a >> 20, x, y, o);
}
