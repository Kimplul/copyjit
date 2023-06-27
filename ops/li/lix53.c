/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix53) {
	UNUSED(x); NEXT_OP(sp, a, 53, y, o);
}
