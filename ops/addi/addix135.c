/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix135) {
	NEXT_OP(sp, a, x + 135, y, o);
}
