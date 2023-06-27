/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix31) {
	UNUSED(x); NEXT_OP(sp, a, 31, y, o);
}
