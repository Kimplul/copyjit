/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa5) {
	NEXT_OP(sp, a >> 5, x, y, o);
}
