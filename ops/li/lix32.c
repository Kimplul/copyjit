/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix32) {
	UNUSED(x); NEXT_OP(sp, a, 32, y, o);
}
