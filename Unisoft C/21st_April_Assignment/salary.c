#include<stdio.h>

void main()
{
    float sal, hra, da, gross_sal;
    printf("Enter the salary of the employee: ");
    scanf("%f, &sal");

    hra = 0.4*sal;
    da = 0.2*sal;

    gross_sal = sal + hra + da;

    printf("The total salary of the employee is: %f", &gross_sal);
}