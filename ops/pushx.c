#include "common.h"

DEFINE_OP(pushx)
{
	*sp = x;
	NEXT_OP(sp + 1, a, x, y, o);
}
