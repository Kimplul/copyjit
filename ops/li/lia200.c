/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia200) {
	UNUSED(a); NEXT_OP(sp, 200, x, y, o);
}
