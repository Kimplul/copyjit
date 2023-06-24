#include "common.h"

DEFINE_OP(baz)
{
	// todo check if this could on some platforms end up with identical
	// epilogue, in which case it shouldn't be filtered out
	//
	// best method might be to place all procedures we don't want to filter
	// in a separate directory, maybe?
	BRANCH(o, a == 0, sp, a, x, y, o);
}
