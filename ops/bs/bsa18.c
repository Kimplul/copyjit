/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa18) {
	NEXT_OP(sp, a >> 18, x, y, o);
}
