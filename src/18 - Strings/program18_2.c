#include <stdio.h>

void reverse(const char * const sPtr);

int program18_2(void)
{
	char sentence[80];

	printf( "Enter text:\n" );

	fgets( sentence, 80, stdin);

	printf( "\nThe text backward is:" );
	reverse(sentence);

	printf("\n");

	return 0;
}

void reverse(const char * const sPtr)
{

	if (sPtr[0] == '\0' )
	{
		return;
	}
	else
	{
		reverse( &sPtr[1] );
		putchar(sPtr[0] );
	}
}
