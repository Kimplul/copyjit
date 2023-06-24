/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsy36) {
	NEXT_OP(sp, a, x, y >> 36, o);
}
