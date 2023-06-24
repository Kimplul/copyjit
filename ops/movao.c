#include "common.h"

DEFINE_OP(movao)
{
	UNUSED(a);
	NEXT_OP(sp, o, x, y, o);
}
