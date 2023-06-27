/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix100) {
	NEXT_OP(sp, a, x + 100, y, o);
}
