/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla11) {
	NEXT_OP(sp, a >> 11, x, y, o);
}