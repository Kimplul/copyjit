/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla39) {
	NEXT_OP(sp, a >> 39, x, y, o);
}
