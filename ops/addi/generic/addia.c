/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../../common.h"

DEFINE_OP(addia)
{
	NEXT_OP(sp, a + IMM(), x, y, o);
}
