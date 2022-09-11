#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d;

    printf("Enter a: ";);
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    if(a>b && a>c && a>d)
    {
        printf("a is the greatest");
    }

    else if(b>a && b>c && b>d)
    {
        printf("b is the greatest");
    }

    else if(c>a && c>b && c>d)
    {
        printf("c is the greatest");
    }

    else (d>a && d>b && d>c)
    {
        printf("d is the greatest");
    }

}