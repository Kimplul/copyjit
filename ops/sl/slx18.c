/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx18) {
	NEXT_OP(sp, a, x << 18, y, o);
}
