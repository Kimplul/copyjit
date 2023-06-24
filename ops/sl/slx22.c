/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx22) {
	NEXT_OP(sp, a, x << 22, y, o);
}
