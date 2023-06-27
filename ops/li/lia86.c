/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia86) {
	UNUSED(a); NEXT_OP(sp, 86, x, y, o);
}
