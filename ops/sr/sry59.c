/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sry59) {
	NEXT_OP(sp, a, x, (sreg_t)y >> 59, o);
}
