/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa48) {
	NEXT_OP(sp, a >> 48, x, y, o);
}
