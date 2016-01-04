#include <stdio.h>
#define PI 3.14159

/* function main begins program execution*/
int main(void)
{
	double diameter = 10;
  double circumference;

  circumference = PI * diameter;

	printf("Circumference of a circle with diameter %f is: \n %f\n",diameter ,circumference );

	return 0;
}

/*end function main*/
