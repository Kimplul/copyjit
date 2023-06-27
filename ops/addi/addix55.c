/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix55) {
	NEXT_OP(sp, a, x + 55, y, o);
}
