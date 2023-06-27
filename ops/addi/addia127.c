/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia127) {
	NEXT_OP(sp, a + 127, x, y, o);
}
