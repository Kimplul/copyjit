/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sra34) {
	NEXT_OP(sp, (sreg_t)a >> 34, x, y, o);
}
