/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix71) {
	NEXT_OP(sp, a, x + 71, y, o);
}
