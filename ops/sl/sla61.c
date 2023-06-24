/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla61) {
	NEXT_OP(sp, a >> 61, x, y, o);
}
