/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix80) {
	NEXT_OP(sp, a, x + 80, y, o);
}
