/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(li15) {
	UNUSED(o); NEXT_OP(sp, a, x, y, 15);
}
