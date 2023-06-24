/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla29) {
	NEXT_OP(sp, a >> 29, x, y, o);
}
