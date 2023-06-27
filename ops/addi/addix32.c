/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix32) {
	NEXT_OP(sp, a, x + 32, y, o);
}
