#include <stdio.h>

int program9_3()
{
	int count;
	//int num;

	printf("Enter a number: \n");
	scanf("%d", &count);

	while (count > 0)
	{
		printf("%d", count);
		printf(" loop...\n");
		count = count - 1;
	}

	printf("Done...\n");
	return 0;
}


