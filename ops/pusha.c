/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(pusha)
{
	*sp = a;
	NEXT_OP(sp + 1, a, x, y, o);
}
