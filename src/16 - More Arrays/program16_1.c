#include <stdio.h>

int program16_1()
{
	int i, j;

	int studAvg[10] [2] =
	{
		{43,54},
		{27,66},
		{90,87},
		{56,87},
		{84,91},
		{73,42},
		{46,43},
		{89,83},
		{56,60},
		{67,70},
	};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", studAvg[i] [j]);
		}
	printf( "\n");
	}

	return 0;
}

