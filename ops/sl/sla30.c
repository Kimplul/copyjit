/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla30) {
	NEXT_OP(sp, a >> 30, x, y, o);
}
