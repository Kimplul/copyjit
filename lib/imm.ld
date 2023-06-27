ENTRY(_op)

PHDRS {
	headers PT_PHDR PHDRS;
	text PT_LOAD FILEHDR PHDRS;
	data PT_LOAD;
}

SECTIONS {
	. = SIZEOF_HEADERS;
	.text : {
		*(.text*);

		/* reserve eight bytes of data */
		__imm = .;
		. += 8;
		__next_op = .;
	} :text

	/* mostly just to silence warnings, operations aren't allowed to have
	 * any data in them */
	.data : { *(.data*) } :data
}
