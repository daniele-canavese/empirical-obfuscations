#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "check.c"

void check()
{
	int m;
	FILE* f;
	unsigned long x = 0;
	int c;

	/* Checks if we can open the source file. */
	f = fopen(FILE_NAME, "r");
	if (f == NULL)
	{
		fprintf(stderr,"Whoooo! Please make sure that this program "
			"can read the original source file named %s and run it "
			"again.\n", FILE_NAME);
		exit(-1);
	}

	/* Checks the source file integrity. */
	while ((c = fgetc(f)) >= 0)
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			x += c;

	fclose(f);

	printf("%d\n", x);
}

int main()
{
	check();

	return 0;
}
