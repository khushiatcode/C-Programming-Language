#include<stdio.h>

int fact()
{
    int i, n, f=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Entered number is %d ", n);

    if(n==0)
    {
        f = 1;
    }

    else if(n<0)
    {
        printf("Factorial of a negative no. does NOT exist!");
    }

    else 
    {
        for(i=1; i<=n; i++)
        {
            f = f*i;
        }
    }

    return(f);
}

void main()
{
    printf("\nThe factorial is: %d", fact());
}