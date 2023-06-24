#include "common.h"

DEFINE_OP(addyo)
{
	NEXT_OP(sp, a, x, y + o, o);
}
