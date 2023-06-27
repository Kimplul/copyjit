/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(lix89) {
	UNUSED(x); NEXT_OP(sp, a, 89, y, o);
}
