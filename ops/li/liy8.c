/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(liy8) {
	UNUSED(y); NEXT_OP(sp, a, x, 8, o);
}
