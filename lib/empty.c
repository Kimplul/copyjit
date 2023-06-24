#include "../ops/common.h"

DEFINE_OP(empty)
{
	NEXT_OP(sp, a, x, y, o);
}
