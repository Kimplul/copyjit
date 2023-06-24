/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsx61) {
	NEXT_OP(sp, a, x >> 61, y, o);
}
