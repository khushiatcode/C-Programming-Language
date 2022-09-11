#include<stdio.h>

struct Employee 
{
    char name[40];
    float salary;
    int age;
    char gender[20];
    int id;
};

void main()
{
    int i;
    struct Employee e[5];

    for (i=0; i<=4; i++)
    {
        printf("Enter the name of Empl %d: ", i+1);
        scanf("%s", &e[i].name);

        printf("\nEnter the salary of Emp %d: ", i+1);
        scanf("%f", &e[1].salary);

        printf("\nEnter the age of Emp %d: ", i+1);
        scanf("%d", &e.age);

        printf("\nEnter the gender of Emp %d: ", i+1);
        scanf("%s", &e.gender);

        printf("Enter the id of Emp %d: ", i+1);
        scanf("%d", &e.id);
    }

    for(i=0; i<=4; i++)
    {
        printf("****Employee details****");

        printf("For emp%d", i+1);
        printf("Name: %s", e.name);
        printf("Salary: %f", e->salary);
        printf("Age: %d", e->age);
        printf("Gender: %d", e->gender);;
        printf("Id: %d", e->id)
    }
}