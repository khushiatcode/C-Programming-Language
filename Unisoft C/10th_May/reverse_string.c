#include<stdio.h>
#include<string.h>

void main()
{
    int i;
    char a[30];
    
    printf("Enter the string: ");
    scanf("%s", &a);

    for(i=strlen(a); i>=0; i--)
    {
        printf("%c", a[i]);
    }
}