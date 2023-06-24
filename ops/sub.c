#include "common.h"

DEFINE_OP(sub)
{
	UNUSED(a);
	NEXT_OP(sp, x - y, a, y, o);
}
