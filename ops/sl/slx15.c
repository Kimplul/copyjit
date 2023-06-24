/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx15) {
	NEXT_OP(sp, a, x << 15, y, o);
}
