#include <stdio.h>

int main()
{
	char name[10];
	printf(" Enter your name: \n" );
	gets(name);
	printf(" Ok, have a nice day %s \n", name);
	return 0;
}

