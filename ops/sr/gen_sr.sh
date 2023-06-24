# shift right register o
for i in $(seq 0 63); do
	opname=sro"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"			\
		"DEFINE_OP($opname) {"				\
		"NEXT_OP(sp, a, x, y, (sreg_t)o >> $i);"	\
		"}" > "$filename"
done

# shift right register x
for i in $(seq 0 63); do
	opname=srx"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"			\
		"DEFINE_OP($opname) {"				\
		"NEXT_OP(sp, a, (sreg_t)x >> $i, y, o);"	\
		"}" > "$filename"
done

# shift right register y
for i in $(seq 0 63); do
	opname=sry"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"			\
		"DEFINE_OP($opname) {"				\
		"NEXT_OP(sp, a, x, (sreg_t)y >> $i, o);"	\
		"}" > "$filename"
done

# shift right register a
for i in $(seq 0 63); do
	opname=sra"$i"
	filename="$opname".c
	echo	"#include \"../common.h\"\n"			\
		"DEFINE_OP($opname) {"				\
		"NEXT_OP(sp, (sreg_t)a >> $i, x, y, o);"	\
		"}" > "$filename"
done
