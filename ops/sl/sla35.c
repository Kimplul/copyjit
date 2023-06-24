/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla35) {
	NEXT_OP(sp, a >> 35, x, y, o);
}
