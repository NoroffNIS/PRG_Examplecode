#include <stdio.h>

int program8_1()
{
	int userAge, legalAge = 18;

	printf("Please enter your age: \n");
	scanf("%d", &userAge);

	if (userAge < 18)
		printf("Under legal age!\n");
	else
		printf("Access granted.\n");

	return 0;
}


