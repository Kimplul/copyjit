/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix110) {
	NEXT_OP(sp, a, x + 110, y, o);
}
