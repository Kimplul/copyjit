/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix6) {
	NEXT_OP(sp, a, x + 6, y, o);
}
