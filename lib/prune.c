#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void usage(const char *name)
{
	printf("Usage: %s <filter> <file>\n", name);
}

static size_t file_size(FILE *file)
{
	fseek(file, 0, SEEK_END);
	size_t size = ftell(file);
	rewind(file);
	return size;
}

static char *read_file(FILE *file, size_t bytes)
{
	char *buf = malloc(bytes);
	fread(buf, bytes, 1, file);
	rewind(file);
	return buf;
}

static int try_filter(FILE *filter, FILE *file)
{
	size_t filtsize = file_size(filter);
	char *filtbuf = read_file(filter, filtsize);

	size_t filsize = file_size(file);
	char *filbuf = read_file(file, filsize);

	// inform the user?
	if (filsize < filtsize) {
		free(filtbuf);
		free(filbuf);
		return 0;
	}

	size_t off = filsize - filtsize;
	if (strncmp(filbuf + off, filtbuf, filtsize) != 0) {
		// filter didn't match
		free(filtbuf);
		free(filbuf);
		return 0;
	}

	// write everything except filtered part back to file
	freopen(NULL, "w+", file);
	fwrite(filbuf, off, 1, file);
	free(filtbuf);
	free(filbuf);
	return 0;
}

int main(int argc, char *argv[])
{
	if (argc != 3) {
		usage(argv[0]);
		return -1;
	}

	FILE *filter = fopen(argv[1], "r");
	if (!filter) {
		fprintf(stderr, "failed opening filter file %s\n", argv[1]);
		return -1;
	}

	FILE *file = fopen(argv[2], "r");
	if (!file) {
		fprintf(stderr, "failed opening file %s\n", argv[2]);
		fclose(filter);
		return -1;
	}

	int ret = try_filter(filter, file);

	fclose(filter);
	fclose(file);
	return ret;
}
