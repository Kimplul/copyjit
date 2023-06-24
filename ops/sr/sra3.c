/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sra3) {
	NEXT_OP(sp, (sreg_t)a >> 3, x, y, o);
}
