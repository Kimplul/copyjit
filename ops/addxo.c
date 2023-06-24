#include "common.h"

DEFINE_OP(addxo)
{
	NEXT_OP(sp, a, x + o, y, o);
}
