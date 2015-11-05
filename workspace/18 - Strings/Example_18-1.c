#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char userInput;

	printf( "Enter a character: " );
	scanf( "%c", &userInput);

	printf( "%c\n%s%s\n", userInput, 
		isdigit(userInput) ? "The user typed a " : "The user did not type a ",
		 "digit" );

	return 0;
}

