/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia30) {
	UNUSED(a); NEXT_OP(sp, 30, x, y, o);
}
