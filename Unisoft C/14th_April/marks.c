#include<stdio.h>
#include<conio.h>

void main()
{
    int a;

    printf("Enter the marks: ");
    scanf("%d", &a);

    if(a>=65) {
        printf("Grade A")
    }

    if(a>=50 && a<65) {
        printf("Grade B");
    }

    if(a>35 && a<50) {
        printf("Grade C");
    }

    
}