#include<stdio.h>
#include<string.h>

void main()
{
    char a[0];
    char b[30];

    printf("Enter the string: ");
    scanf("%s", &a);

    strcpy(b,a);
    strrev(a);

    if (strcmp(a,b) == 0)
    {
        printf("String is a palindrome");
    }

    else 
    {
        printf("Strings is not a palindrome");
    }


}