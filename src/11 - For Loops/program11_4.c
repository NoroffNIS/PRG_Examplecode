#include <stdio.h>

int program11_4()
{
	int num;

	printf(" Enter a number between 1 and 5: ");
	scanf("%d", &num);

	switch (num)
	{
		case 0: printf("Nothing...\n");
			break;
		case 1: printf("Yep, getting there...\n");
			break;
		case 2: printf("Not quiet...\n");
			break;
		case 3: printf("Well, give it another go...\n");
			break;
		case 4: printf("Very close...\n");
			break;
		case 5: printf("Finally got the picture...\n");
			break;
		default: printf("Too large...duh...\n");
			break;
	}
	return 0;
}


