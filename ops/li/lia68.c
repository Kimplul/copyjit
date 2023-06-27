/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia68) {
	UNUSED(a); NEXT_OP(sp, 68, x, y, o);
}
