/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(srx18) {
	NEXT_OP(sp, a, (sreg_t)x >> 18, y, o);
}
