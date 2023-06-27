/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia31) {
	UNUSED(a); NEXT_OP(sp, 31, x, y, o);
}
