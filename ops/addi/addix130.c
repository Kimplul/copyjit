/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix130) {
	NEXT_OP(sp, a, x + 130, y, o);
}
