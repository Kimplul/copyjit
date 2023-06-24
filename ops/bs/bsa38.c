#include "../common.h"
DEFINE_OP(bsa38) {
	NEXT_OP(sp, a >> 38, x, y, o);
}
