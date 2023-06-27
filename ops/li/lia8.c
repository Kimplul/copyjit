/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia8) {
	UNUSED(a); NEXT_OP(sp, 8, x, y, o);
}
