/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa28) {
	NEXT_OP(sp, a >> 28, x, y, o);
}
