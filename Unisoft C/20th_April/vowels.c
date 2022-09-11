#include<stdio.h>

void main()
{
    char alph;

    printf("Enter the alphabet: ");
    scanf("%c", &alph);

    switch (alph)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        printf("Vowel");
        break;

    default:
    printf("Consonant");
        break;
    }
}