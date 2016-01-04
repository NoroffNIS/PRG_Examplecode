#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int program15_3()
{
	int a[SIZE];	//this is the array...
	int x;		//counter for elements...
	int searchKey;	//search value...
	int element;

	for (x = 0; x < SIZE; x++)
	{
		a[x] = 2 * x;
	}

	printf( "Enter integer search key:\n" );
	scanf( "%d", &searchKey );

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1 )
	{
		printf( "Found value in element %d\n", element );
	}
	else
	{
		printf ("value not found...\n");
	}

	return 0;

}

int linearSearch( const int array[], int key, int size)
{
	int n;

	for (n = 0; n < size; ++n)
	{
		if (array[n] == key)
		{
			return n;
		}
	}

	return -1;
}

