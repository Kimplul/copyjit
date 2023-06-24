/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla15) {
	NEXT_OP(sp, a >> 15, x, y, o);
}
