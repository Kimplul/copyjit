/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa13) {
	NEXT_OP(sp, a >> 13, x, y, o);
}
