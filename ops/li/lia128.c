/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia128) {
	UNUSED(a); NEXT_OP(sp, 128, x, y, o);
}
