/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix19) {
	NEXT_OP(sp, a, x + 19, y, o);
}
