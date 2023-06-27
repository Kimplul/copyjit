/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia4) {
	UNUSED(a); NEXT_OP(sp, 4, x, y, o);
}
