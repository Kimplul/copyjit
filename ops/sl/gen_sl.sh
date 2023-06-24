#!/bin/sh

# shift left register o
for i in $(seq 0 63); do
	opname=slo"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y, o << $i);"	\
		"}" > "$filename"
done

# shift left register x
for i in $(seq 0 63); do
	opname=slx"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x << $i, y, o);"	\
		"}" > "$filename"
done

# shift left register y
for i in $(seq 0 63); do
	opname=sly"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y << $i, o);"	\
		"}" > "$filename"
done

# shift left register a
for i in $(seq 0 63); do
	opname=sla"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a >> $i, x, y, o);"	\
		"}" > "$filename"
done
