/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia3) {
	UNUSED(a); NEXT_OP(sp, 3, x, y, o);
}
