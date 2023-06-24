/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa42) {
	NEXT_OP(sp, a >> 42, x, y, o);
}
