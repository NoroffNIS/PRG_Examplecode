#include <stdio.h>

int areal(int i, int y)

{
	int resultat;
	resultat = i * y;
	return resultat;
}

int program3_2(void)
{
	int sum;
	sum = areal (3, 4);
	printf( "Arealet er %d. \n", sum);
	return 0;
}
