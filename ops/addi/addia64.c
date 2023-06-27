/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia64) {
	NEXT_OP(sp, a + 64, x, y, o);
}
