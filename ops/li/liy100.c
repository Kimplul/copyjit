/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(liy100) {
	UNUSED(y); NEXT_OP(sp, a, x, 100, o);
}
