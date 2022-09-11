#include<stdio.h>
#include<conio.h>

void main() 
{
    int a;

    printf("Enter the no. of days of the month: ");
    scanf("%d", &a);

    if (a==31) {
        printf("January \nMarch \nMay \nJuly \nAugust \nOctober \nDecember");
    }

    else if (a==30) {
        printf("April \nJune \nSeptember \nNovember");
    }

    else if (a==28 || a==29) {
        printf("February");
    }

    else {
        printf("Invalid input");
    }
}