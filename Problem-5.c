// Write a C program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>
int main()
{
    double r, Pi, Perimeter, Area;
    printf("Enter a radius: ");
    scanf("%lf", &r);
    Pi = 3.14159;
    Perimeter = 2*Pi*r;
    Area = Pi*r*r;
    printf("Perimeter of the Circle = %lf inches\n",Perimeter);
    printf("Area of the Circle = %lf square inches\n",Area);
    return 0;
}
