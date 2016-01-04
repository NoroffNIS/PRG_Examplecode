#include <stdio.h>
#define SIZE 10

int program15_2()
{
	float studRes[SIZE]; 	//array...
	int i;			//counter for array elements...
	int j;			//comparisons counter
	int pass, hold;
	int studNum = 1;

	for (i = 0; i < 10; i++)
	{
		printf("Enter score for student %d: \n", studNum);
		scanf("%f", &studRes[i]);
		studNum++;
	}

	printf("Original output:\n");

	for (j = 0; j < SIZE; j++)
	{
		printf( "Score: %.2f\n", studRes[j]);
	}

	printf("Sorting...\n");

	for (pass = 1; pass < SIZE; pass++)
	{
		for (j = 0; j < SIZE - 1; j++)
		{
			if (studRes[j] > studRes[j + 1])
			{
				hold = studRes[j];
				studRes[j] = studRes[j + 1];
				studRes[j + 1] = hold;
			}
		}
	}

	printf("Sorted output:\n");

	for (j = 0; j < SIZE; j++)
	{
		printf("Score: %.2f\n", studRes[j]);
	}


	return 0;
}

