/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia5) {
	UNUSED(a); NEXT_OP(sp, 5, x, y, o);
}
