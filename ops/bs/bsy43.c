#include "../common.h"
DEFINE_OP(bsy43) {
	NEXT_OP(sp, a, x, y >> 43, o);
}
