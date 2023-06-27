/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia15) {
	NEXT_OP(sp, a + 15, x, y, o);
}
