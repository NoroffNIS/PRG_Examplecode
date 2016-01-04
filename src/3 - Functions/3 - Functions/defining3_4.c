#include <stdio.h>
/*function declaration*/
char get_A(void);

int main(){
    char a = get_A();
    printf("This is it: %c",a );
    return 0;
}

/*function definition*/
char get_A(){
  /*function body*/
  char A = 'A';
  return A;
}
