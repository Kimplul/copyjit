/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla34) {
	NEXT_OP(sp, a >> 34, x, y, o);
}
