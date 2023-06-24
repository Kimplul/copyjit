/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sly2) {
	NEXT_OP(sp, a, x, y << 2, o);
}
