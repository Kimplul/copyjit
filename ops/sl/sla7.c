/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla7) {
	NEXT_OP(sp, a >> 7, x, y, o);
}
