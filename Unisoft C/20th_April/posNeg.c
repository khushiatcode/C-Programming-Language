#include<stdio.h>

void main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    switch (a >= 0)
    {
    case 1:
        printf("positive");
        break;
    
    default:
    printf("Negative");
        break;
    }
}