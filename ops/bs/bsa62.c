/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa62) {
	NEXT_OP(sp, a >> 62, x, y, o);
}
