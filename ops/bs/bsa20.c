/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa20) {
	NEXT_OP(sp, a >> 20, x, y, o);
}
