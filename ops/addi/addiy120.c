/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy120) {
	NEXT_OP(sp, a, x, y + 120, o);
}
