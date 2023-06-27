/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia80) {
	NEXT_OP(sp, a + 80, x, y, o);
}
