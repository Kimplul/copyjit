/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia63) {
	UNUSED(a); NEXT_OP(sp, 63, x, y, o);
}
