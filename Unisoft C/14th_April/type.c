#include<stdio.h>
#include<conio.h>

void main() 
{
    char a;

    printf("Enter the input to be checked: ");
    scanf("%c", &a);

    if(a>=65 && a<=90 || a>=97 && a<=122) {
        printf("It is a character");
    }

    else if(a>=48 && a<=57) {
        printf("It is a number");
    }

    else {
        printf("It is a special symbol");
    }
    
}