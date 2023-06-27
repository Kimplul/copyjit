/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia64) {
	UNUSED(a); NEXT_OP(sp, 64, x, y, o);
}
