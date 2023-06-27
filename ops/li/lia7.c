/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia7) {
	UNUSED(a); NEXT_OP(sp, 7, x, y, o);
}
