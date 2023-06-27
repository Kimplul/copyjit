/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia100) {
	UNUSED(a); NEXT_OP(sp, 100, x, y, o);
}
