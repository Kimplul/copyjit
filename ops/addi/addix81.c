/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix81) {
	NEXT_OP(sp, a, x + 81, y, o);
}
