#include <stdio.h>

int program15_1()
{
	float studAvg[10];
	int index;
	int j;
	int studNum = 1;
	float average;

	for (index = 0; index < 10; index++)
	{
		printf("Enter exam score for student number %d: \n", studNum);
		scanf("%f", &studAvg[index]);
		studNum++;
	}

	studNum = 1;

	printf("%s%13s%17s\n", "Studentnummer", "Poeng", "Histogram");

	for (index = 0; index < 10; index++)
	{
		printf("%7d%20.2f          ", studNum, studAvg[index]);

		for (j = 1; j <= studAvg[index]; j++)
		{
			printf( "%c", '*' );
		}

		printf ( "\n");

		studNum++;
	}

//	average = (studAvg[0] + studAvg[1] + studAvg[2] + studAvg[3] + studAvg[4] + studAvg[5] + studAvg[6] + studAvg[7] + studAvg[8] + studAvg[9]) / 10;

//	printf ( "%s%7d%, average);

	return 0;
}

