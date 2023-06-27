#!/bin/sh

# load special into o register
for i in $(seq 0 255); do
	opname=lio$i
	filename="$opname".c
	echo	"#include \"../common.h\"\n"	\
		"DEFINE_OP($opname) {"		\
		"UNUSED(o);"			\
		"NEXT_OP(sp, a, x, y, $i);" 	\
		"}" > "$filename"
done

# load special into a register
for i in $(seq 0 255); do
	opname=lia$i
	filename="$opname".c
	echo	"#include \"../common.h\"\n"	\
		"DEFINE_OP($opname) {"		\
		"UNUSED(a);"			\
		"NEXT_OP(sp, $i, x, y, o);" 	\
		"}" > "$filename"
done

# load special into x register
for i in $(seq 0 255); do
	opname=lix$i
	filename="$opname".c
	echo	"#include \"../common.h\"\n"	\
		"DEFINE_OP($opname) {"		\
		"UNUSED(x);"			\
		"NEXT_OP(sp, a, $i, y, o);" 	\
		"}" > "$filename"
done

# load special into y register
for i in $(seq 0 255); do
	opname=liy$i
	filename="$opname".c
	echo	"#include \"../common.h\"\n"	\
		"DEFINE_OP($opname) {"		\
		"UNUSED(y);"			\
		"NEXT_OP(sp, a, x, $i, o);" 	\
		"}" > "$filename"
done
