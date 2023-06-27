/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix22) {
	NEXT_OP(sp, a, x + 22, y, o);
}
