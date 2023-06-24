#include "../common.h"
DEFINE_OP(srx50) {
	NEXT_OP(sp, a, (sreg_t)x >> 50, y, o);
}
