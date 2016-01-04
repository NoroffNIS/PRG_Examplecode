#include <stdio.h>

//Function main begins program execution

int program3_1(void)
{
	int numberOne; //First number to be input from user
	int numberTwo; //Second number to be input from user
	int totalSum; //variable containing the sum of first and second numbers

	printf( "Enter first number:\n" );
	scanf( "%d", &numberOne ); //reads the first number
	scanf( "%d", &numberOne );

	printf( "Enter second number:\n" );
	scanf( "%d", &numberTwo ); //reads the second number

	totalSum = numberOne + numberTwo; //adds the two input numbers

	printf( "The total sum is %d\n", totalSum); //prints the total sum

	return 0; //indicates a success
} //ends the main function
