/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix9) {
	NEXT_OP(sp, a, x + 9, y, o);
}
