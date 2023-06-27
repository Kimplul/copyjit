/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia85) {
	UNUSED(a); NEXT_OP(sp, 85, x, y, o);
}
