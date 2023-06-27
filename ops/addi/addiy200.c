/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy200) {
	NEXT_OP(sp, a, x, y + 200, o);
}
