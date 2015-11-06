#include <stdio.h>

int main(void)
{
	int *ptr; /*definerer peker til int*/
	int x = 12345;
	int y;

	ptr = &x; /*tildeler x sin adresse til ptr*/
	printf("Verdien av ptr er %p\n", ptr);
	printf("Adressen til x er %p\n\n", &x);

	printf("Antall tegn skrevet ut paa denne linjen:%n", &y);
	printf(" %d\n\n", y);

	y = printf( "Denne linjen har 25 tegn\n");
	printf("%d tegn ble skrevet ut\n\n", y);

	printf("Skrive ut %% i en formatkontrollstreng\n");

	return 0;
}

