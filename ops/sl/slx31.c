/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx31) {
	NEXT_OP(sp, a, x << 31, y, o);
}