/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa63) {
	NEXT_OP(sp, a >> 63, x, y, o);
}
