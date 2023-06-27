/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix85) {
	UNUSED(x); NEXT_OP(sp, a, 85, y, o);
}
