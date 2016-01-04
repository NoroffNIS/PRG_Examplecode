#import <stdio.h>

void statements(char l[]);

int main() {

char letter = 'A';
  printf("switch function:\n");
  switch_function(letter);
  printf("if else function:\n");
  ifElse_function(letter);
  printf("Program ended");
  return 0;
}

void switch_function (char letter) {
  switch (letter) {
    case 'A': statements("A"); break;
    case 'B': statements("B"); break;
    default:  statements("Not A or B");
   }
}

void ifElse_function (char letter) {
    if (letter == 'A')
      statements("A");
    else if(letter == 'B')
      statements("B");
    else
      statements("Not A or B");
}

void statements(char l[]){
  printf("The letter is: %s \n", l);
}
