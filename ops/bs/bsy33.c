/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsy33) {
	NEXT_OP(sp, a, x, y >> 33, o);
}
