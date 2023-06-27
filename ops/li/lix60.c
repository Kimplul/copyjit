/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix60) {
	UNUSED(x); NEXT_OP(sp, a, 60, y, o);
}
