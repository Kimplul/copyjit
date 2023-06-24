/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla31) {
	NEXT_OP(sp, a >> 31, x, y, o);
}
