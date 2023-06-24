#include "common.h"

DEFINE_OP(subyo)
{
	UNUSED(a);
	NEXT_OP(sp, y - o, x, y, o);
}
