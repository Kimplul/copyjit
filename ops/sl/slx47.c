/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slx47) {
	NEXT_OP(sp, a, x << 47, y, o);
}
