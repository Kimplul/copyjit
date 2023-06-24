#!/bin/sh

for i in $(seq 0 255); do
	filename=li"$i".c
	echo	"#include \"../common.h\"\n"	\
		"DEFINE_OP(li$i) {"		\
		"UNUSED(o);"			\
		"NEXT_OP(sp, a, x, y, $i);" 	\
		"}" > "$filename"
done
