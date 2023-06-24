/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa45) {
	NEXT_OP(sp, a >> 45, x, y, o);
}
