#include "../common.h"
DEFINE_OP(slx22) {
	NEXT_OP(sp, a, x << 22, y, o);
}
