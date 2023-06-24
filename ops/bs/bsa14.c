/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa14) {
	NEXT_OP(sp, a >> 14, x, y, o);
}
