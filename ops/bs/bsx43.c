/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx43) {
	NEXT_OP(sp, a, x >> 43, y, o);
}
