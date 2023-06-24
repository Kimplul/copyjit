/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla60) {
	NEXT_OP(sp, a >> 60, x, y, o);
}
