/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(bsa52) {
	NEXT_OP(sp, a >> 52, x, y, o);
}
