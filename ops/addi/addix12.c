/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix12) {
	NEXT_OP(sp, a, x + 12, y, o);
}
