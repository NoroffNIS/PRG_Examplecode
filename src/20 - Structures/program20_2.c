#include <stdio.h>

void displayBits( unsigned value );

int program20_2(void)
{
	unsigned x;

	printf( "Enter desimal value: ");
	scanf( "%u", &x);

	displayBits( x );
	return 0;
}

void displayBits( unsigned value )
{
	unsigned c;

	unsigned displayMask = 1 << 7;

	printf( "%10u = ", value );

	for( c=1; c<= 8; c++)
	{
		putchar( value & displayMask ? '1' : '0' );
		value <<= 1;

		if ( c % 8 == 0 )
		{
			putchar( ' ' );
		}
	}

	putchar( '\n' );
}

