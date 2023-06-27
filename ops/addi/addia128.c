/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia128) {
	NEXT_OP(sp, a + 128, x, y, o);
}
