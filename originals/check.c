#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "check.c"
#define CHECKSUM 8296716
#define MIN_ID 190000
#define MAX_ID 300000

volatile unsigned int spyme = 0;

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

	if (x != CHECKSUM)
	{
		fprintf(stderr, "Ops! You have changed the application "
			"code.\n");
		fprintf(stderr, "Do not alter the file %s in any way!\n",
			FILE_NAME);
		fprintf(stderr, "Revert the source code to its original "
			"state, build it and launch it again.\n");
		exit(-2);
	}

	/* Asks the student id. */
	printf("Please insert your student id without the leading s: ");

	if (scanf("%d", &m) != 1 || m < MIN_ID || m > MAX_ID)
	{
		fprintf(stderr, "Uhm! Your student id seems wrong.\n");
		fprintf(stderr, "Relaunch the application and try it again.\n");
		exit(-3);
	}

    spyme = ((m * 17 + 3) % 3233033) + x;

	/* Prints what to do. */
	printf("It is done!\n");
	printf("The secret value was computed and stored in the global "
		"variable called spyme.\n");
	printf("Please use your debugger to watch the variable spyme's "
		"content and write it in the online form.\n");
	printf("\n");
	printf("You can press enter to exit the program.\n");
	
	/* Waits for the enter key. */
	fflush(stdin);
	while (getchar() != '\n');
	getchar();
}

int main()
{
	check();

	return 0;
}
