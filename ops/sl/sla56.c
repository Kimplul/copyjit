/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla56) {
	NEXT_OP(sp, a >> 56, x, y, o);
}