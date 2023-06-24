/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx60) {
	NEXT_OP(sp, a, (sreg_t)x >> 60, y, o);
}
