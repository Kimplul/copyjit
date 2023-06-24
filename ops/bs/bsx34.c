#include "../common.h"
DEFINE_OP(bsx34) {
	NEXT_OP(sp, a, x >> 34, y, o);
}
