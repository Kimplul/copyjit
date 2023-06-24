/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(addxo)
{
	NEXT_OP(sp, a, x + o, y, o);
}
