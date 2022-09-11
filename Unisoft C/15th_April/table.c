#include<stdio.h>
#include<conio.h>

void main() 
{
    int i=1, b, a;

    printf("Enter the number: ");
    scanf("%d", &b);
    while(i<=10) {
        a = b*i;
        printf("\t %d", a);
        i++;
    }
}