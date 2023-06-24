/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx32) {
	NEXT_OP(sp, a, x >> 32, y, o);
}
