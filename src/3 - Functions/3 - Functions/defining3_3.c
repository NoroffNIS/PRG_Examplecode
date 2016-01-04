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

