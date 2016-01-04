
#include <stdio.h>
/*function declaration*/
char get_A(void);

int defining3_3(){
    printf("This is it: %c" , get_A());
    return 0;
}
/*function definition*/
char get_A(){
  /*function body*/
  char A = 'A';
  return A;
}
