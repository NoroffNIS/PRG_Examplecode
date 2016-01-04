#include <stdio.h>
/*function declaration*/
int multiply(int a, double b);

int main(){
    int x = 3;
    double y = 2.0;
    int sum = multiply(x,y);
    printf("%d", sum);
    return 0;
}

/*function definition*/
int multiply(int a, double b){
  /*function body*/
  int return_sum = a * b;
  return return_sum;
}



#include <stdio.h>
/*function declaration*/
char get_A(void);
/*function definition*/
char get_A(){
  /*function body*/
  char A = 'A';
  return A;
}

#include <stdio.h>

void draw_squear(void);

int main(){
    draw_squear();
    return 0;
}

void draw_squear(){
  printf("********\n");
  printf("*      *\n")
  printf("*      *\n");
  printf("*      *\n");
  printf("********\n");
}
