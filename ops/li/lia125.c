/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia125) {
	UNUSED(a); NEXT_OP(sp, 125, x, y, o);
}