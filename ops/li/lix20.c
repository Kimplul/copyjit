/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix20) {
	UNUSED(x); NEXT_OP(sp, a, 20, y, o);
}
