/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia1) {
	UNUSED(a); NEXT_OP(sp, 1, x, y, o);
}
