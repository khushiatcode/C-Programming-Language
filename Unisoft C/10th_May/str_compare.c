#include<stdio.h>
#include<string.h>

void main()
{
    char a[] = "abc";
    char b[] = "deffh";
    
    if (strcmp(a,b) == 0)
    {
        printf("Strings are same");
    }

    else 
    {
        printf("Strings are not same");
    }
}