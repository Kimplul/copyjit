/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix234) {
	NEXT_OP(sp, a, x + 234, y, o);
}