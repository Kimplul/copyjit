/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sly58) {
	NEXT_OP(sp, a, x, y << 58, o);
}