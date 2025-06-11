// Write a C program to print the following characters in reverse.

#include <stdio.h>
int main()
{
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    printf("The reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);
    return 0;
}