/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix142) {
	NEXT_OP(sp, a, x + 142, y, o);
}
