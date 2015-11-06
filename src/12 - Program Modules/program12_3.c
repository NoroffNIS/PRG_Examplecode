#include <stdio.h>

// function prototype...
int max(int a, int b, int c);

int main()
{
	// variables...
	int numberOne, numberTwo, numberThree;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &numberOne, &numberTwo, &numberThree);

	printf("The highest number is: %d \n", max(numberOne, numberTwo, numberThree));

	return 0;
}

int max(int a, int b, int c)
{
	int max = a;
	
	if (b > max)
		max = b;

	if (c > max)
		max = c;

	return max;
}


