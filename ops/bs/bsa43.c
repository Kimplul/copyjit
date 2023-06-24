/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa43) {
	NEXT_OP(sp, a >> 43, x, y, o);
}
