/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia192) {
	UNUSED(a); NEXT_OP(sp, 192, x, y, o);
}
