/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix242) {
	NEXT_OP(sp, a, x + 242, y, o);
}
