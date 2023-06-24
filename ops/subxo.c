/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(subxo)
{
	UNUSED(a);
	NEXT_OP(sp, x - o, x, y, o);
}
