#include <stdio.h>
#include <string.h>

int program18_5 (void)
{
	char string[] = "We shall divide this sentence into tokens";
	char *tokenPtr;

	printf("%s\n%s\n\n%s\n",
		"The sentence to be divided is: ", string,
		"The tokens are: ");

		tokenPtr = strtok(string, " ");

		while(tokenPtr != NULL){
			printf("%s\n", tokenPtr);
			tokenPtr = strtok(NULL, " ");
		}
	return 0;
}
