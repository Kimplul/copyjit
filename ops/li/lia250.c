/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia250) {
	UNUSED(a); NEXT_OP(sp, 250, x, y, o);
}
