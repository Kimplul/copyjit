#include "../common.h"
DEFINE_OP(bsa40) {
	NEXT_OP(sp, a >> 40, x, y, o);
}
