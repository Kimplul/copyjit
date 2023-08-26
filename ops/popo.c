/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(popo)
{
	UNUSED(o);
	NEXT_OP(sp - 1, a, x, y, *(sp - 1));
}
