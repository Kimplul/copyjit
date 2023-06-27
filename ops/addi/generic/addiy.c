/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../../common.h"

DEFINE_OP(addiy)
{
	NEXT_OP(sp, a, x, y + IMM(), o);
}
