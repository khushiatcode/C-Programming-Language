#include<stdio.h>

struct Cube
{
    float num1;
};

void main()
{
    float ans;
    struct Cube c;
    
    printf("Enter the number: ");
    scanf("%f", &c.num1);

    ans = c.num1 * c.num1 * c.num1;

    printf("The cube is: ");
}
