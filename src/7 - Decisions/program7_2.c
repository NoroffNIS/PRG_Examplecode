#include <stdio.h>

int main()
{
	int numberOne, numberTwo, numberThree = 100;
	printf("Enter a number:\n");
	scanf("%d", &numberOne);
	printf("Enter a smaller number:\n");
	scanf("%d", &numberTwo);

	if (numberOne > numberTwo)
	{
		if (numberOne < numberThree)
		{
			printf("First number is less than 100.\n");
		}
	}

	else
	{
		printf("Make the numberTwo smaller...\n");
	}
	return 0;
}


