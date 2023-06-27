/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix101) {
	NEXT_OP(sp, a, x + 101, y, o);
}
