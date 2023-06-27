/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia255) {
	NEXT_OP(sp, a + 255, x, y, o);
}
