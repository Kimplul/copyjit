/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(add)
{
	UNUSED(a);
	NEXT_OP(sp, x + y, x, y, o);
}
