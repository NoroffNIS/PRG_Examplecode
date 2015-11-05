#include <stdio.h>

main ()
{
  int y = 5;
  int *yPtr;
  yPtr = &y;

  printf("The value of y is: %d\n", y);
  printf("The direction of y is: %p\n", &y);
  printf("The value of yPtr is: %d\n", *yPtr);
  printf("The direction of yPtr is: %p\n", yPtr);
}
