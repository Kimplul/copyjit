#include "../common.h"
DEFINE_OP(bsa51) {
	NEXT_OP(sp, a >> 51, x, y, o);
}
