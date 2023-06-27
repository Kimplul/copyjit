/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix131) {
	NEXT_OP(sp, a, x + 131, y, o);
}
