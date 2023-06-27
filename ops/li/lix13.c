/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix13) {
	UNUSED(x); NEXT_OP(sp, a, 13, y, o);
}
