/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../ops/common.h"

DEFINE_OP(empty)
{
	NEXT_OP(sp, a, x, y, o);
}
