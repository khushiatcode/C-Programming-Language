#include<stdio.h>

int main()
{
    int i;
    char c;
    void *ptr;
    i = 12;
    c = 'r';
    ptr = &i;
    printf("ptr points to the integer value %d\n", *(int*)ptr);
    ptr = &c;
    printf("ptr now points to the character %c\n", *(char*)ptr);
    return 0;
}