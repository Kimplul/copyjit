/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia48) {
	UNUSED(a); NEXT_OP(sp, 48, x, y, o);
}
