/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx26) {
	NEXT_OP(sp, a, (sreg_t)x >> 26, y, o);
}
