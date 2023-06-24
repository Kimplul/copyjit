/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla26) {
	NEXT_OP(sp, a >> 26, x, y, o);
}
