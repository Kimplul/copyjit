/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(subyo)
{
	UNUSED(a);
	NEXT_OP(sp, y - o, x, y, o);
}
