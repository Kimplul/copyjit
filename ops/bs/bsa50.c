/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa50) {
	NEXT_OP(sp, a >> 50, x, y, o);
}
