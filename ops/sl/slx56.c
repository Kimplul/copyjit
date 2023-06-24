/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx56) {
	NEXT_OP(sp, a, x << 56, y, o);
}
