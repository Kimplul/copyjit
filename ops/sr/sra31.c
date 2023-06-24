/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sra31) {
	NEXT_OP(sp, (sreg_t)a >> 31, x, y, o);
}
