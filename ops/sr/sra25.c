/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sra25) {
	NEXT_OP(sp, (sreg_t)a >> 25, x, y, o);
}
