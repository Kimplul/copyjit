/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy4) {
	NEXT_OP(sp, a, x, y + 4, o);
}
