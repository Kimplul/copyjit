/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia10) {
	UNUSED(a); NEXT_OP(sp, 10, x, y, o);
}
