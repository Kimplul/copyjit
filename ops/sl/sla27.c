/* SPDX-License-Identifier: copyleft-next-0.3.1 */

#include "../common.h"
DEFINE_OP(sla27) {
	NEXT_OP(sp, a >> 27, x, y, o);
}
