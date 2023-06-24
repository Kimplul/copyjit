#include "../common.h"
DEFINE_OP(bsa26) {
	NEXT_OP(sp, a >> 26, x, y, o);
}
