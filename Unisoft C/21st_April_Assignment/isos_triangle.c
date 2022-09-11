#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter the three sides of a triangle: ");
    scanf("\n%d \n%d \n%d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("Equilateral triangle");
    }

    else if(a == b || b == c || a ==c)
    {
        printf("Isosceles triangle");
    }

    else if(a != b != c)
    {
        printf("Scalene triangle");
    }
}