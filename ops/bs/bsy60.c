/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsy60) {
	NEXT_OP(sp, a, x, y >> 60, o);
}
