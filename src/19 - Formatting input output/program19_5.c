#include <stdio.h>

int main(void)
{
	int i = 123;
	double f = 123.456;
	char s[] = "Hello WebStudents!";

	printf("%4d\n", 1);
	printf("%4d\n", 12);
	printf("%4d\n", 123);
	printf("%4d\n", 1234);
	printf("%4d\n\n", 12345);

	printf("precision with integers:\n");
	printf("%.4d\n\%.9d\n\n", i, i);

	printf("precision with floating points:\n");
	printf("%.3f\n\%.3e\n\%.3g\n\n", f, f, f);

	printf("precision for strings\n");
	printf("%.12s\n", s);

	return 0;
}

