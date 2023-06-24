/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx57) {
	NEXT_OP(sp, a, x << 57, y, o);
}
