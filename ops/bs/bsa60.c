#include "../common.h"
DEFINE_OP(bsa60) {
	NEXT_OP(sp, a >> 60, x, y, o);
}
