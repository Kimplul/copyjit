/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix30) {
	NEXT_OP(sp, a, x + 30, y, o);
}
