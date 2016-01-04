#include <stdio.h>

int main()
{
	//declare a variable
	int count, secNum;

	//make user set a value...
	printf("Enter a number between 10 and 50: \n");
	scanf("%d", &count);

	printf("Enter a number between 25 and 50: \n");
	scanf("%d", &secNum);

	//establish a loop...
	while (count > 25 && count < 50 && secNum > 25 && secNum < 50)
	{
		count = count + 1;
		secNum = secNum + 1;
		printf( "%d", count);
		printf("   ");
		printf( "%d", secNum);
		printf(" Both numbers are between 25 and 50\n");
	}		

	printf("Done...\n");
	return 0;
}


