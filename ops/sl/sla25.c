/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla25) {
	NEXT_OP(sp, a >> 25, x, y, o);
}
