#include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[27];
	char s2[] = "The quick brown fox jumped";

	memcpy(s1, s2, 27);

	printf("%s\n%s\"%s\"\n",
		"After s2 is copied into s1 with memcpy,",
		"s1 contains ", s1);

	return 0;
}
