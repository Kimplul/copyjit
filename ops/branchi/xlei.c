#include "../common.h"

DEFINE_OP(xlei)
{
	UNUSED(a);
	NEXT_OP(sp, x <= IMM(), x, y, o);
}
