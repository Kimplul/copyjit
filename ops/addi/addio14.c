/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addio14) {
	NEXT_OP(sp, a, x, y, o + 14);
}
