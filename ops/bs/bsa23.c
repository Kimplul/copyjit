/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa23) {
	NEXT_OP(sp, a >> 23, x, y, o);
}
