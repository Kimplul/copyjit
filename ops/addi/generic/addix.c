/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../../common.h"

DEFINE_OP(addix)
{
	NEXT_OP(sp, a, x + IMM(), y, o);
}
