/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx1) {
	NEXT_OP(sp, a, x << 1, y, o);
}
