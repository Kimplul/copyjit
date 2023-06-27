/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia15) {
	UNUSED(a); NEXT_OP(sp, 15, x, y, o);
}
