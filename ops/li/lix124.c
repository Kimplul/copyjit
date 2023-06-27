/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix124) {
	UNUSED(x); NEXT_OP(sp, a, 124, y, o);
}
