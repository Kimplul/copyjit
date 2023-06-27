/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia42) {
	UNUSED(a); NEXT_OP(sp, 42, x, y, o);
}
