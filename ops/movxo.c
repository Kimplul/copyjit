/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(movxo) {
	UNUSED(x);
	NEXT_OP(sp, a, o, y, o);
}
