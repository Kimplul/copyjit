/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addiy101) {
	NEXT_OP(sp, a, x, y + 101, o);
}
