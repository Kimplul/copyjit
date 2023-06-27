/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix170) {
	NEXT_OP(sp, a, x + 170, y, o);
}
