/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa46) {
	NEXT_OP(sp, a >> 46, x, y, o);
}
