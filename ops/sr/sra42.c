/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sra42) {
	NEXT_OP(sp, (sreg_t)a >> 42, x, y, o);
}
