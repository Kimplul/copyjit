/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(li3) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 3);
}