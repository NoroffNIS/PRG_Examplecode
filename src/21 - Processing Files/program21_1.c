#include <stdio.h>

int main(void)
{
	/*variabler deklareres...*/
	int account;
	char name[ 30 ];
	double balance;

	FILE *cfPtr; /* peker til databasefil*/

	if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL )
	{
		printf("File could not be opened\n");
	}
	else
	{
		printf( "Enter account, name and balance. \n" );
		printf( "Enter EOF to end input. \n" );
		printf( "? " );
		scanf( "%d%s%lf", &account, name, &balance );

		while ( !feof(stdin))
		{
			fprintf( cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf( "%d%s%lf", &account, name, &balance );
		}

		fclose( cfPtr );
	}

	return 0;
}

