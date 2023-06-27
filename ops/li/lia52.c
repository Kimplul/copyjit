/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia52) {
	UNUSED(a); NEXT_OP(sp, 52, x, y, o);
}
