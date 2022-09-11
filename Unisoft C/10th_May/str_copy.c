#include<stdio.h>
#include<string.h>

void main()
{
    char a[] = "abc";
    char b[] = "deff";

    strcpy(a,b);    //b is copied in a, i.e (a is changed to b)

    printf("%s", a);

}