/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix202) {
	NEXT_OP(sp, a, x + 202, y, o);
}
