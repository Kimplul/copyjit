#include "common.h"

DEFINE_OP(movya)
{
	UNUSED(y);
	NEXT_OP(sp, a, x, a, o);
}
