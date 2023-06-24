/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(movao)
{
	UNUSED(a);
	NEXT_OP(sp, o, x, y, o);
}
