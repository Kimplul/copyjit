/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sro24) {
	NEXT_OP(sp, a, x, y, (sreg_t)o >> 24);
}
