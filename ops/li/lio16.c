/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lio16) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 16);
}
