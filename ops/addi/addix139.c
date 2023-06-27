/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix139) {
	NEXT_OP(sp, a, x + 139, y, o);
}
