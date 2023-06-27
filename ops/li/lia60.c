/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia60) {
	UNUSED(a); NEXT_OP(sp, 60, x, y, o);
}
