/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa58) {
	NEXT_OP(sp, a >> 58, x, y, o);
}
