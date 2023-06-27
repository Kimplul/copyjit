/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia53) {
	UNUSED(a); NEXT_OP(sp, 53, x, y, o);
}
