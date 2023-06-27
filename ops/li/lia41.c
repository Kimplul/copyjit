/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lia41) {
	UNUSED(a); NEXT_OP(sp, 41, x, y, o);
}
