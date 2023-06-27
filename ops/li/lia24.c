/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia24) {
	UNUSED(a); NEXT_OP(sp, 24, x, y, o);
}
