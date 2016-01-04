#include <stdio.h>
#include <math.h>

int square(int y);

int program12_2()
{
	float number, result;

	printf("Please enter a number: ");
	scanf("%f", &number);

	result = square(number);

	printf("The square root of %.0f is %.2f...\n", number, result);

	return 0;
}

int square(int y)
{
	return y * y;
}



