#include "common.h"

DEFINE_OP(incy)
{
	NEXT_OP(sp, a, x, y + 1, o);
}
