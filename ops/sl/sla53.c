/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla53) {
	NEXT_OP(sp, a >> 53, x, y, o);
}
