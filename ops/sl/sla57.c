/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla57) {
	NEXT_OP(sp, a >> 57, x, y, o);
}
