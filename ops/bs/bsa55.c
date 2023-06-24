/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa55) {
	NEXT_OP(sp, a >> 55, x, y, o);
}
