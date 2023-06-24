/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla32) {
	NEXT_OP(sp, a >> 32, x, y, o);
}
