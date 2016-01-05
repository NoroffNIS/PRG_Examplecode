#include <stdio.h>

int main()
{
    char input[] = "";
	while (strcmp(input, "exit")){
		printf("Type some keys!\n");
		scanf("%s", &input);
		printf("You typed %s!\n", &input);
    }
	return 0;
}
