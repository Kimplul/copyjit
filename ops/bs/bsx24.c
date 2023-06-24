/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx24) {
	NEXT_OP(sp, a, x >> 24, y, o);
}
