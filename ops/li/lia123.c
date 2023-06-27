/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia123) {
	UNUSED(a); NEXT_OP(sp, 123, x, y, o);
}
