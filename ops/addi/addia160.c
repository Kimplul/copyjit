/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia160) {
	NEXT_OP(sp, a + 160, x, y, o);
}
