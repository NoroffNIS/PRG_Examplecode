#include <stdio.h>

/* function main begins program execution*/
int main(void)
{
int i = 0;
int j;
  for(i=64; i>0;){
    for(j=8;j>0;j--){
      printf(" %d\t", i-j+1);
    }
    i=i-8;
    if(i%8==0){
      printf("\n");
    }
  }
	return 0;
}

/*end function main*/
