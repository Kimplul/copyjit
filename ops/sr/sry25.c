/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sry25) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 25, o);
}
