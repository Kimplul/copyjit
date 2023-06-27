/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix125) {
	NEXT_OP(sp, a, x + 125, y, o);
}
