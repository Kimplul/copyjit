/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx51) {
	NEXT_OP(sp, a, (sreg_t)x >> 51, y, o);
}
