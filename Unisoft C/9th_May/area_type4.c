#include<stdio.h>

float area(float r)
{
    float ar;
    ar = 3.14 * r * r;
    return(ar);
}

void main()
{
    float x, are;
    printf("Enter the radius: ");
    scanf("%f", &x);
    are = area(x);

    printf("Area of the circle is: %f", are);

}