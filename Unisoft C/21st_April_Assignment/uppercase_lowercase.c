#include<stdio.h>

void main()
{
    char a;

    printf("Enter the character: ");
    scanf("%c", &a);

    if(a >= 'A' && a <= 'Z') 
    {
        printf("Uppercase letter");
    }

    else
    {
        printf("Lowercase letter");
    }
}