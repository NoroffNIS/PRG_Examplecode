#include <stdio.h>

int main()
{
	int varOne;
	int *pointOnePtr;

	varOne = 42;
	pointOnePtr = &varOne;

	printf( "The value of varOne is: %d\n", varOne);
	printf( "The address of varOne is: %p\n", &varOne);
	printf( "The value of *pointOnePtr is: %p\n", pointOnePtr);

	return 0;
}

