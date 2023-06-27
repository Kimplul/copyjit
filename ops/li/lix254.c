/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix254) {
	UNUSED(x); NEXT_OP(sp, a, 254, y, o);
}
