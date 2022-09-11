#include<stdio.h>

int fact(int n)
{
    int i, f=1;

    for (i=1; i<=n; i++)
    {
        f = f*i;
    }
    return(f);
}

void main()
{
    int x, fac;
    printf("Enter the number: ");
    scanf("%d", &x);

    fac = fact(x);
    printf("%d", fac);
}