/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla10) {
	NEXT_OP(sp, a >> 10, x, y, o);
}
