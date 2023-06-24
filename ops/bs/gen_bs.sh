# barrel shift right register o
for i in $(seq 0 63); do
	opname=bso"$i"
	filename="$opname".c
	echo -e	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y, o >> $i);"	\
		"}" > "$filename"
done

# barrel shift right register x
for i in $(seq 0 63); do
	opname=bsx"$i"
	filename="$opname".c
	echo -e	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x >> $i, y, o);"	\
		"}" > "$filename"
done

# shift right register y
for i in $(seq 0 63); do
	opname=bsy"$i"
	filename="$opname".c
	echo -e	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a, x, y >> $i, o);"	\
		"}" > "$filename"
done

# shift right register a
for i in $(seq 0 63); do
	opname=bsa"$i"
	filename="$opname".c
	echo -e	"#include \"../common.h\"\n"		\
		"DEFINE_OP($opname) {"			\
		"NEXT_OP(sp, a >> $i, x, y, o);"	\
		"}" > "$filename"
done
