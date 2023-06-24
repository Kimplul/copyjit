/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx14) {
	NEXT_OP(sp, a, (sreg_t)x >> 14, y, o);
}
