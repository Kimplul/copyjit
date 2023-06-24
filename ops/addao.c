#include "common.h"

DEFINE_OP(addao)
{
	NEXT_OP(sp, a + o, x, y, o);
}
