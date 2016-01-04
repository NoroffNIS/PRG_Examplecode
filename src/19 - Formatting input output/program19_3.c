#include <stdio.h>

int program19_3(void)
{
	char tegn = 'A';
	char streng[] = "Dette er en streng";
	const char *strengPeker = "Dette er også en streng";

	printf("%c\n", tegn);
	printf("%s\n", "Dette er en streng");
	printf("%s\n", streng);
	printf("%s\n", strengPeker);

	return 0;
}

