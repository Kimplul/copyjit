/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx9) {
	NEXT_OP(sp, a, (sreg_t)x >> 9, y, o);
}
