/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia100) {
	NEXT_OP(sp, a + 100, x, y, o);
}
