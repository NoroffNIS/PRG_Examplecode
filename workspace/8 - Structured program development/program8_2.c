#include <stdio.h>

int main()
{
	int grade;

	printf("Enter grade: ");
	scanf("%d", &grade);

	if (grade >= 90)
		printf("Grade = A\n");
	else
		if(grade >= 70)
			printf("Grade = B\n");
		else
			if(grade >= 60)
				printf("Grade = C\n");
			else
				if(grade >= 50)
					printf("Grade = D\n");
				else
					printf("FAILED!\n");

	return 0;
}

