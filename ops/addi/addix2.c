/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(addix2) {
	NEXT_OP(sp, a, x + 2, y, o);
}
