#include<stdio.h>
#include<conio.h>

void main() 
{
    int cp, sp;

    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if(sp>cp) {
        printf("It's a profit!");
    }

    else {
        printf("Oops! It's a loss");
    }
}