#include<stdio.h>

void main()
{
    char a;

    printf("Enter the gender: \nMale(m/M)\nFemale(f/F)\nOther(o/O)\n");
    scanf("%c", &a);

    switch (a)
    {
    case 'O':
    case 'o':
        printf("Other");
        break;

    case 'F':
    case 'f':
        printf("Female");
        break;

    case 'M':
    case 'm':
        printf("Male");
    
    default:
        printf("Invalid input");
        break;
    }
}