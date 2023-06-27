/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix55) {
	UNUSED(x); NEXT_OP(sp, a, 55, y, o);
}
