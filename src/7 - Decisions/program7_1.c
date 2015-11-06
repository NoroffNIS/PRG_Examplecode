#include <stdio.h>

int main()
{
	int standardNum = 15, enteredNum;
	printf(" Enter a number: \n");
	scanf("%d", &enteredNum);

	if (enteredNum < standardNum)
		printf("The entered number is less than standard...\n");

	else if (enteredNum == standardNum)
		printf("You guessed the lucky number!\n");

	else
		printf("To high...\n");

	return 0;
}


