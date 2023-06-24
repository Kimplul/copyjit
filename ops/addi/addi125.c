/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addi125) {
	NEXT_OP(sp, a, x, y, o + 125);
}
