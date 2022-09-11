#include<stdio.h>

int evenodd()
{
    int n;

    printf("Enter the number: ");
    scanf("%d");

    if (n%2 == 0) 
    {
        printf("EVEN");
    }

    else
    {
        printf("ODD");
    }

    return(n);
}

void main() 
{
    evenodd();
}