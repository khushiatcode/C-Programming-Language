#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b, c, *p, *q;
    p = &a;
    q = &b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Before Swapping: \nA=%d \nB=%d", *p, *q);

    c = *p; 
    *p = *q;
    *q = c;

    printf("\n\nAfter Swapping: \nA=%d \nB=%d",*p,c);


}