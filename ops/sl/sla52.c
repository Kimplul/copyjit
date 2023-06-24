/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla52) {
	NEXT_OP(sp, a >> 52, x, y, o);
}
