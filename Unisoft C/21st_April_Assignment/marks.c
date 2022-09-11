#include<stdio.h>

void main()
{
    float sub1, sub2, sub3, sub4, sub5, agg_marks, avg_percentage;

    printf("Enter the marks of sub1: ");
    scanf("%f", &sub1);

    printf("Enter the marks of sub2: ");
    scanf("%f", &sub2);

    printf("Enter the marks of sub3: ");
    scanf("%f", &sub3);

    printf("Enter the marks of sub4: ");
    scanf("%f", &sub4);

    printf("Enter the marks of sub5: ");
    scanf("%f", &sub5);

    agg_marks = (sub1+sub2+sub3+sub4+sub5) / 5.0;
    avg_percentage = agg_marks * 100.0;

    printf("The average marks are: %f", &agg_marks);
    printf("\nThe average percentage is: %f", &avg_percentage);

}