// Write a C program to convert specified days into years, weeks and days. Note: Ignore leap year.

#include <stdio.h>
int main()
{
    int a, year, weeks, days;
    printf("Number of days: ");
    scanf("%d", &a);
    year = a / 365;
    weeks = (a - (year * 365)) / 7;
    days = (a - ((year * 365) + (weeks * 7)));
    printf("Years: %d\nWeeks: %d\nDays: %d\n", year, weeks, days);
    return 0;
}