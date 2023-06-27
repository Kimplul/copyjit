/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia16) {
	NEXT_OP(sp, a + 16, x, y, o);
}
