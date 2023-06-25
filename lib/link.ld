ENTRY(_op)

PHDRS {
	headers PT_PHDR PHDRS;
	text PT_LOAD FILEHDR PHDRS;
	data PT_LOAD;
}

SECTIONS {
	. = SIZEOF_HEADERS;
	.text : { *(.text*); } :text

	__next_op = .;

	/* mostly just to silence warnings, operations aren't allowed to have
	 * any data in them */
	.data : { *(.data*) } :data
}
