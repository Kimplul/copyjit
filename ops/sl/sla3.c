/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla3) {
	NEXT_OP(sp, a >> 3, x, y, o);
}
