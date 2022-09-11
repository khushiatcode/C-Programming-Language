#include<stdio.h>

float area() 
{
    float r, ar;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    ar = 3.14 * r * r;
    return(ar);
}

void main()
{
    printf("Area of the circle is: %f", area());
}