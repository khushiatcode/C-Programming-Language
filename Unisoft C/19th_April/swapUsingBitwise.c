#include<stdio.h>

void main() 
{
    int a, b;
    printf("Enter the first number: %d", &a);
    printf("Enter the second number: %d", &b);

    printf("Values before swap: %d \n%d", a,b);

    a=a^b;

}