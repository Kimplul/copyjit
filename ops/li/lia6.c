/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia6) {
	UNUSED(a); NEXT_OP(sp, 6, x, y, o);
}
