/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix111) {
	UNUSED(x); NEXT_OP(sp, a, 111, y, o);
}
