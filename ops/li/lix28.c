/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix28) {
	UNUSED(x); NEXT_OP(sp, a, 28, y, o);
}
