/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../../common.h"

DEFINE_OP(lio)
{
	UNUSED(o);
	NEXT_OP(sp, a, x, y, IMM());
}
