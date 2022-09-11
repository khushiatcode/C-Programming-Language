#include<stdio.h>

struct student
{
    int rollno;
    struct  n
    {
        char name[50];
    }h;
};

main()
{
    struct student s;
    printf("Enter the rollno: ");
    scanf("%d", &s.rollno);

    printf("Enter the name: ");
    scanf("%s", &s.h.name);

    printf("rollno: %d", s.rollno);
    printf("\n name: %s", s.h.name);
    return 0;
}
