#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, *p, *q, c;
    p = &a;
    q = &b;

    printf("Enter a: ");
    scanf("%d", p);

    printf("Enter b: ");
    scanf("%d", q);

    c = *p + *q;
    printf("Addition is: %d", c);
}