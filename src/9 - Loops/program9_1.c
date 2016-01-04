#include <stdio.h>

int program9_1()
{
	int count = 0;
loopstart: count = count + 1;

	goto label1;

newloopstart:

	printf("%d", count);
	printf(" loop...\n");

	if (count < 6 )
		goto loopstart;

	printf(" Done...\n");

label1:

	goto newloopstart;
		printf(" Done...\n");

	return 0;
}


