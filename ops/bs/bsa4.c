/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa4) {
	NEXT_OP(sp, a >> 4, x, y, o);
}
