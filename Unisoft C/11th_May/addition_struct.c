#include<stdio.h>

struct Addition
{
    float a,b;
};

void main()
{
    struct Addition add;

    printf("Enter num1: ");
    scanf("%f", &add.a);

    printf("Enter num2: ");
    scanf("%f", &add.b);

    printf("Addition is: %f", add.a + add.b );
}