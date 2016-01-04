#include <stdio.h>

/* function main begins program execution*/
int main(void)
{

  double x_double = 1;
	double y_double = 3;
  double sum_double = x_double/y_double;

  int x_int = 1;
  int y_int = 3;
  int sum_int = x_int / y_int;


  printf("double: %f / %f = %f\n",x_double, y_double, sum_double);

  printf("int: %d / %d = %d\n",x_int, y_int, sum_int);

	return 0;
}

/*end function main*/
