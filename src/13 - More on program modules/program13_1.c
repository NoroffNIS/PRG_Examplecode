#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numberOne = 0;
	int numberTwo = 0;
	int numberThree = 0;
	int numberFour = 0;
	int numberFive = 0;
	int numberSix = 0;

	int roll; /*represents roll counter*/
	int face; /*represents one roll with value 1 to 6*/
	
	srand (time(NULL));

	for ( roll = 1; roll <= 6000; roll ++)
	{
		face = 1 + rand() % 6;
		
		switch (face)
		{
			case 1:
				++numberOne;
				break;
			case 2:
				++numberTwo;
				break;
			case 3:
				++numberThree;
				break;
			case 4:
				++numberFour;
				break;
			case 5:
				++numberFive;
				break;
			case 6:
				++numberSix;
				break;
		}
	}
	
	printf( "%s%13s\n", "Face", "Frequency");
	printf( 	"1%13d\n", numberOne);
	printf( 	"2%13d\n", numberTwo);
	printf( 	"3%13d\n", numberThree);
	printf( 	"4%13d\n", numberFour);
	printf( 	"5%13d\n", numberFive);
	printf( 	"6%13d\n", numberSix);

	return 0;
}


