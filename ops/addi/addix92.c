/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix92) {
	NEXT_OP(sp, a, x + 92, y, o);
}
