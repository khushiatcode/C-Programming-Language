#include<stdio.h>

struct  Employee
{
    char ename[10];
    int sal;
};

struct Employee emp[5];
int i,j;

voidDetails()
{
    for(i=0; i<3; i++)
    {
        printf("\nEnter %d Employee record:\n", i+1);

        printf("\nEmployee name:\f");
        scanf("%s", &emp[i].ename);

        printf("\nEnter Salary:\t");
        scanf("%d", &emp[i])
    }
}

