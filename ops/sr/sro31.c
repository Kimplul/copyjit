/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sro31) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 31);
}
