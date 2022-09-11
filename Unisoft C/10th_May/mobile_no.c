#include<stdio.h>
#include<string.h>

void main()
{
    char a[30];
    
    printf("Enter the mobile number: ");
    scanf("%s", &a);

    if(strlen(a) <= 10)
    {
        printf("Mobile number is valid");
    }

    else
    {
        printf("INVALID");
    }
}