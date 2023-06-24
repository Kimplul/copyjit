/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx63) {
	NEXT_OP(sp, a, x >> 63, y, o);
}
