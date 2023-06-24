/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addi75) {
	NEXT_OP(sp, a, x, y, o + 75);
}
