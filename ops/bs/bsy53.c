#include "../common.h"
DEFINE_OP(bsy53) {
	NEXT_OP(sp, a, x, y >> 53, o);
}
