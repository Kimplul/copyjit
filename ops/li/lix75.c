/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix75) {
	UNUSED(x); NEXT_OP(sp, a, 75, y, o);
}
