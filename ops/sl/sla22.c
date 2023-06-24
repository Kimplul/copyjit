/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla22) {
	NEXT_OP(sp, a >> 22, x, y, o);
}
