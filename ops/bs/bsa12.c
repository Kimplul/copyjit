/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa12) {
	NEXT_OP(sp, a >> 12, x, y, o);
}
