#include "common.h"

DEFINE_OP(ban)
{
	BRANCH(o, a != 0, sp, a, x, y, o);
}
