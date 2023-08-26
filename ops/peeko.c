/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(peeko)
{
	UNUSED(o);
	NEXT_OP(sp, a, x, y, *(sp - 1));
}
