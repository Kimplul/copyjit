/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla47) {
	NEXT_OP(sp, a >> 47, x, y, o);
}
