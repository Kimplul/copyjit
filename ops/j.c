/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "common.h"

DEFINE_OP(j) {
	JUMP(o, sp, a, x, y, o);
}
