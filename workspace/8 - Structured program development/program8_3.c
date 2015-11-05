#include <stdio.h>

int main()
{
	int count = 0;

	while (count < 6)
	{
		count = count + 1;
		printf("%d", count);
		printf(" loop\n");
	}
	
	printf("Done...\n");

	return 0;
}

		
