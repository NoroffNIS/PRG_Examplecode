#include <stdio.h>

main ()
{
  int varOne;
  int *pointOnePtr;

  varOne = 10;
  pointOnePtr= &varOne;

  printf("The value of varOne is: %d\n", varOne);
  printf("The address of varOne is: %p\n", &varOne);
  printf("The value of *pointOnePtr is: %d\n", *pointOnePtr);
  printf("The address of pointOnePtr is: %p\n", pointOnePtr);
  printf("----------- END -----------\n");
  
  *pointOnePtr = 15;
  printf("Altering the value of *pointOnePtr to: %d\n", *pointOnePtr);
  printf("The value of varOne is: %d\n", varOne);
  printf("The address of varOne is: %p\n", &varOne);
  printf("The value of *pointOnePtr is: %d\n", *pointOnePtr);
  printf("The address of pointOnePtr is: %p\n", pointOnePtr);
  printf("----------- END -----------\n");

  varOne = 20;
  printf("Altering the value of varOne to: %d\n", varOne);
  printf("The value of varOne is: %d\n", varOne);
  printf("The address of varOne is: %p\n", &varOne);
  printf("The value of *pointOnePtr is: %d\n", *pointOnePtr);
  printf("The address of pointOnePtr is: %p\n", pointOnePtr);
  printf("----------- END -----------\n");

}
