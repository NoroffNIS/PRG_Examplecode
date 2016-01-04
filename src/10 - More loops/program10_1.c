#include <stdio.h>

int program10_1()
{
    int studyYears = 1; //first year towards a bachelors degree...
    int totalYears = 3; //total years in a bachelors degree...

    printf("This is year: %d\n", studyYears);
    printf("And the total is %d\n", totalYears);

    studyYears ++;
    totalYears --;

    printf("Next year is year %d\n", studyYears);
    printf("Years left: %d\n", --totalYears);
    printf("HEY, its only supposed to be %d\n", totalYears);

    return 0;
}

