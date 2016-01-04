#include <stdio.h>

int program19_6(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;

	printf("Skriv inn syv heltall:\n");
	scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

	printf("Vist som desimaltall...\n");
	printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);

	return 0;
}

