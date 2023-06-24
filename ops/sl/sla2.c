/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla2) {
	NEXT_OP(sp, a >> 2, x, y, o);
}
