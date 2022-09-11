#include<stdio.h>
#include<string.h>

void main()
{
    char a[] = "abc";
    char b[] = " def";

    printf("%s", a);

    printf("%s", strlen(a));    //strlen() is a predefined finction in the liberary string.h
    printf("%s", strrev(a));    //reverse the string
    printf("%s", strupr(a));    //upper case
    printf("%s", strlwr(a));    //lower case

    printf("%s", strcat(a,b));  //concatenation of a and b

}