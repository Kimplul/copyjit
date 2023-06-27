/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix162) {
	NEXT_OP(sp, a, x + 162, y, o);
}
