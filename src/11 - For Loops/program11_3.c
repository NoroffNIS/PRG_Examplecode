#include <stdio.h>

int main()
{
	int count = 10;

	for ( ; ; )
	{
		//count --;
		if (count < 5)
			break;
	}

	printf("Count: %d \n", count);
	return 0;
}


