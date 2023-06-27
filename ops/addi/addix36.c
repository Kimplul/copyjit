/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix36) {
	NEXT_OP(sp, a, x + 36, y, o);
}
