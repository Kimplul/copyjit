/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy131) {
	NEXT_OP(sp, a, x, y + 131, o);
}
