#include "../common.h"

DEFINE_OP(lixm1)
{
	UNUSED(x);
	NEXT_OP(sp, a, -1, y, o);
}
