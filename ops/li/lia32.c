/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia32) {
	UNUSED(a); NEXT_OP(sp, 32, x, y, o);
}
