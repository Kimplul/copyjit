/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix164) {
	NEXT_OP(sp, a, x + 164, y, o);
}
