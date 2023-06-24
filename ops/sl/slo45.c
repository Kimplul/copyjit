/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(slo45) {
	NEXT_OP(sp, a, x, y, o << 45);
}
