/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa54) {
	NEXT_OP(sp, a >> 54, x, y, o);
}
