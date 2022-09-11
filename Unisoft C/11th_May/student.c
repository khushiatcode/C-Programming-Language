#include<stdio.h>

struct Student
{
    int rollno;
    char name[50];
};

void main()
{
    struct Student s;

    printf("Enter the roll no. : ");
    scanf("%d", &s.rollno);

    printf("Enter the name: ");
    scanf("%s", &s.name);

    printf("Roll no. : %d", s.rollno);
    printf("\nName: %s", s.name);
}
