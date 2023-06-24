/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx39) {
	NEXT_OP(sp, a, x >> 39, y, o);
}
