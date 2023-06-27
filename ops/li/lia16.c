/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia16) {
	UNUSED(a); NEXT_OP(sp, 16, x, y, o);
}
