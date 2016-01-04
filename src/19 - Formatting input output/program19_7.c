#include <stdio.h>

int program19_7(void)
{
	char y[10];

	printf("Skriv inn en streng på inntil 10 tegn: ");
	scanf("%[^studnt]", y);

	printf("Input er: \"%s\"\n", y);

	return 0;
}

