/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy20) {
	NEXT_OP(sp, a, x, y + 20, o);
}
