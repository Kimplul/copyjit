#include "../common.h"
DEFINE_OP(bsa57) {
	NEXT_OP(sp, a >> 57, x, y, o);
}
