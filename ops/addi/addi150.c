/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addi150) {
	NEXT_OP(sp, a, x, y, o + 150);
}
