for i in $(seq 0 255); do
	filename=addi"$i".c
	echo	"#include \"../common.h\"\n"		\
		"DEFINE_OP(addi$i) {"			\
		"NEXT_OP(sp, a, x, y, o + $i);" 	\
		"}" > "$filename"
done
