#!/bin/sh

# special addi for o
for i in $(seq 0 255); do
	opname=addio"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y, o + $i);" 	\
		"}" > "$filename"
done

# special addi for a
for i in $(seq 0 255); do
	opname=addia"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a + $i, x, y, o);" 	\
		"}" > "$filename"
done

# special addi for x
for i in $(seq 0 255); do
	opname=addix"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x + $i, y, o);" 	\
		"}" > "$filename"
done

# special addi for y
for i in $(seq 0 255); do
	opname=addiy"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y + $i, o);" 	\
		"}" > "$filename"
done
