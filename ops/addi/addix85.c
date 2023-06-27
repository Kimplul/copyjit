/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix85) {
	NEXT_OP(sp, a, x + 85, y, o);
}
