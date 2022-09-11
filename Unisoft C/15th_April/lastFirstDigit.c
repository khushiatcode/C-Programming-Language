#include<stdio.h>

void main() 
{
    int n, f, l=n%10;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n != 0)
    {
        f = n%10;
        n = n/10;
    }

    printf("%d %d", l,f);
}