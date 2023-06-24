/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla49) {
	NEXT_OP(sp, a >> 49, x, y, o);
}
