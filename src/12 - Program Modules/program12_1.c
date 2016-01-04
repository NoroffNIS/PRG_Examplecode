#include <stdio.h>
#include <math.h>

int program12_1()
{
	float number, result;

	printf("Please enter a number: ");
	scanf("%f", &number);

	result = sqrt(number);

	printf("The square root of %.0f is %.2f...\n", number, result);

	return 0;
}


