/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia80) {
	UNUSED(a); NEXT_OP(sp, 80, x, y, o);
}
