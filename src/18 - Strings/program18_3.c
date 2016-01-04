#include <stdio.h>
#include <string.h>

int program18_3(void)
{
	char userInput[100];
	printf( "Enter tekst: \n" );
	fgets( userInput, 100, stdin);

	/* remove newline, if present */
	  int i = strlen(userInput)-1;
	  if( userInput[ i ] == '\n')
	      userInput[i] = '\0';

	//const char *string = "This is a test";
	char character1 = 'a';
	char character2 = 'x';

	if ( strchr(userInput, character1 ) != NULL)
	{
		printf( "\'%c\' was found in \"%s\".\n",
		character1, userInput );
	}

	else
	{
		printf( "\'%c\' was not found in \"%s\".\n",
		character1, userInput );
	}

	if (strchr(userInput, character2 ) != NULL )
	{
		printf( "\'%c\' was found in \"%s\".\n",
		character2, userInput );
	}

	else
	{

		printf( "\'%c\' was not found in \"%s\".\n",
		character2, userInput );
	}

	return 0;
}
