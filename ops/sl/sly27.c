/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sly27) {
	NEXT_OP(sp, a, x, y << 27, o);
}
