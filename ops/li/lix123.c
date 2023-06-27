/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix123) {
	UNUSED(x); NEXT_OP(sp, a, 123, y, o);
}
