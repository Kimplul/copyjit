/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(addao)
{
	NEXT_OP(sp, a + o, x, y, o);
}
