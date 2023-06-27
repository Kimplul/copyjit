/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia2) {
	UNUSED(a); NEXT_OP(sp, 2, x, y, o);
}
