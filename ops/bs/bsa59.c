/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa59) {
	NEXT_OP(sp, a >> 59, x, y, o);
}
