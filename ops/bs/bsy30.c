/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsy30) {
	NEXT_OP(sp, a, x, y >> 30, o);
}
