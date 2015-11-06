#include <stdio.h>

main ()
{
   int i , j; /* Decelerating  the variables  */

   int examResults[10][2] = /* Inserting the results in the array  */
   {
     {43,54},
     {27,66},
     {90,87},
     {56,87},
     {84,91},
     {73,42},
     {46,43},
     {89,83},
     {56,60},
     {67,70},
   };

printf("%s\n","Exam results:");

   for(i = 0; i < 10; i++){
     for(j=0; j<2; j++){
       printf("%d ", examResults[i][j] );
     }
     printf("\n");
   }
   return 0;
}
