/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia127) {
	UNUSED(a); NEXT_OP(sp, 127, x, y, o);
}
