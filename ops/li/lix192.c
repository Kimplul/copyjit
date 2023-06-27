/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix192) {
	UNUSED(x); NEXT_OP(sp, a, 192, y, o);
}
