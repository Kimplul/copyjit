/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia65) {
	UNUSED(a); NEXT_OP(sp, 65, x, y, o);
}
