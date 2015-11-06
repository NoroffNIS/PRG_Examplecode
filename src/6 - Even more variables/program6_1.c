#include <stdio.h>

int main()
{
	printf("My integers are:\t %d bytes.\n", sizeof(int));
	printf("My short ints are:\t %d bytes.\n", sizeof(short));
	printf("My long ints are:\t %d bytes.\n", sizeof(long));
	printf("My char is:\t\t%d bytes.\n", sizeof(char));
	printf("My floats are:\t\t %d bytes.\n", sizeof(float));
	printf("My double is:\t\t %d bytes.\n", sizeof(double));
	return 0;
}

