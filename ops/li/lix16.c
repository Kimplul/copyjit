/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix16) {
	UNUSED(x); NEXT_OP(sp, a, 16, y, o);
}
