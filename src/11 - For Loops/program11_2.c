#include <stdio.h>

int main()
{
	int a, b;

	for( a = 0, b = 10; a < 2 && b > 7; a ++, b --)
		printf("a is now: %d \n", a);
		printf("b is now: %d \n", b);
	return 0;
}
