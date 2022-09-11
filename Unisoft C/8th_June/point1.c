#include<stdio.h>
#include<conio.h>

void main()
{
    int a = 5, *p;
    p = &a;

    printf("Value of a: %d", a); //5
    printf("\nAddress of a: %d", &a);
    printf("\nAddress of a: %u", &a);
    printf("\nAddress of p: %d", p);
    printf("Address of p: %u", p);
    printf("Value of p: %d", *p); //5
}