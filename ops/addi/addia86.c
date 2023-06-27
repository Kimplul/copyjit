/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addia86) {
	NEXT_OP(sp, a + 86, x, y, o);
}
