/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla21) {
	NEXT_OP(sp, a >> 21, x, y, o);
}
