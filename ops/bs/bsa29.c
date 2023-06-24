/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa29) {
	NEXT_OP(sp, a >> 29, x, y, o);
}
