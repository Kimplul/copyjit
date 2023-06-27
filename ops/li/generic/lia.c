/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../../common.h"

DEFINE_OP(lia)
{
	UNUSED(a);
	NEXT_OP(sp, IMM(), x, y, o);
}
