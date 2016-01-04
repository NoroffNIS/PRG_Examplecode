#include <stdio.h>

enum months
{
	Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int program20_3(void)
{
	enum months month;

	const char *monthName[] = { "", "January", "February", "March", "April", 		"May", "June", "July", "August", "September", "October",
		"November", "December" };

	for(month = Jan; month <= Dec; month++)
	{
		printf( "%2d%11s\n", month, monthName[month] );
	}

	return 0;
}

