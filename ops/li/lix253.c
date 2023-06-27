/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix253) {
	UNUSED(x); NEXT_OP(sp, a, 253, y, o);
}
