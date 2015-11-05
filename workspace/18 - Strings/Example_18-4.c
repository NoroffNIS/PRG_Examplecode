#include <stdio.h>
#include <string.h>

int main (void)
{
	const char *string1 = "WebStudents are cool";
	const char *string2 = "oo";

	printf( "%s%s\n%s%s\n\n%s\n%s%u\n", "string1 = ",
		string1, "string2 = ", string2,
		"Number of characters in string1",
		 "before the characters in string2 = ",
		 strcspn(string1, string2));

	return 0;
}

