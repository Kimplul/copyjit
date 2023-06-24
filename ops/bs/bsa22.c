#include "../common.h"
DEFINE_OP(bsa22) {
	NEXT_OP(sp, a >> 22, x, y, o);
}
