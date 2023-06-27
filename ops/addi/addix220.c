/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix220) {
	NEXT_OP(sp, a, x + 220, y, o);
}
