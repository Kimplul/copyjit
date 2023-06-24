#include "../common.h"
DEFINE_OP(slx50) {
	NEXT_OP(sp, a, x << 50, y, o);
}
