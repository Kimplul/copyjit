/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa41) {
	NEXT_OP(sp, a >> 41, x, y, o);
}