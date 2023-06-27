/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix127) {
	NEXT_OP(sp, a, x + 127, y, o);
}
