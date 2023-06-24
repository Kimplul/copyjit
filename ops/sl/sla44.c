/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla44) {
	NEXT_OP(sp, a >> 44, x, y, o);
}
