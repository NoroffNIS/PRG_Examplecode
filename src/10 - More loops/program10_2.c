#include <stdio.h>

int main()
{
	int small, large, skip, meet;
	printf("Enter a number between 10 and 100: \n");
	scanf("%d", &small);

	printf("Enter a number between 1000 and 5000: \n");
	scanf("%d", &large);

	printf("Enter a skip number...:\n");
	scanf("%d", &skip);

	printf("Enter a target number...: \n");
	scanf("%d", &meet);

	small ++;
	large -=2;

	while (small < large && large > 0 && small < 5000)
	{
		small ++;
		if(small % skip == 0)
		{	
			printf("Skipping %d\n", small);
			continue;
		}


		large -=2;

		if(meet == small && meet == large)
		{
			printf("Victory to user...\n");
			break;
		}
		if(small == large || small > large)
		{
			printf("Victory to computer...\n");
			break;
		}	
	}

	printf("Small:  %d\n", small);
	printf("Large:  %d\n", large);
	return 0;
}


