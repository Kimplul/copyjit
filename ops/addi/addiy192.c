/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy192) {
	NEXT_OP(sp, a, x, y + 192, o);
}
