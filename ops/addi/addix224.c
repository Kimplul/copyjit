/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix224) {
	NEXT_OP(sp, a, x + 224, y, o);
}
