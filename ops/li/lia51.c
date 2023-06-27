/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia51) {
	UNUSED(a); NEXT_OP(sp, 51, x, y, o);
}
