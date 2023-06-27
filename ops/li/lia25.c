/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia25) {
	UNUSED(a); NEXT_OP(sp, 25, x, y, o);
}
