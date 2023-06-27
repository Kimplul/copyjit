/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia180) {
	UNUSED(a); NEXT_OP(sp, 180, x, y, o);
}
