/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia12) {
	UNUSED(a); NEXT_OP(sp, 12, x, y, o);
}
