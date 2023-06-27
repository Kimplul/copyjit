/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix35) {
	NEXT_OP(sp, a, x + 35, y, o);
}
