/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy53) {
	NEXT_OP(sp, a, x, y + 53, o);
}
