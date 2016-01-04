#include <stdio.h>

int program16_3()
{
	int varOne = 10;
	int *pointOnePtr = &varOne;

	printf( "The value of varOne is: %d\n", varOne);
	printf( "The value of *pointOnePtr is: %d\n", *pointOnePtr);

	printf( "Altering the value of *pointOnePtr...\n" );

	*pointOnePtr = 15;

	printf( "The value of *pointOnePtr is now: %d\n", *pointOnePtr);
	printf( "The value of varOne is now: %d\n", varOne);

	printf( "Altering the value of varOne...\n" );

	varOne = 20;

	printf( "The value of varOne is now: %d\n", varOne);
	printf( "The value of *pointOnePtr is now: %d\n", *pointOnePtr);

	return 0;
}

