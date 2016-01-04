
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <inttypes.h>

/* function main begins program execution*/
int main(void)
{
    printf("Storage size for int : %d \n", sizeof(int));
    printf("Minimum int positive value: %d\n", INT_MIN );
    printf("Maximum int positive value: %d\n", INT_MAX );

    printf("Storage size for float : %d \n", sizeof(float));
    printf("Minimum float positive value: %E\n", FLT_MIN );
    printf("Maximum float positive value: %E\n", FLT_MAX );
    printf("Precision value: %d\n", FLT_DIG );
 	return 0;
}
