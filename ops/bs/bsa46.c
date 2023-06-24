#include "../common.h"
DEFINE_OP(bsa46) {
	NEXT_OP(sp, a >> 46, x, y, o);
}
