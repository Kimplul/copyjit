/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy150) {
	NEXT_OP(sp, a, x, y + 150, o);
}
