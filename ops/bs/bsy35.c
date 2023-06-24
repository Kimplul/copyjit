/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsy35) {
	NEXT_OP(sp, a, x, y >> 35, o);
}
