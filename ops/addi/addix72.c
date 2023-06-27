/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix72) {
	NEXT_OP(sp, a, x + 72, y, o);
}
