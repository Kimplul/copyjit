/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia20) {
	UNUSED(a); NEXT_OP(sp, 20, x, y, o);
}