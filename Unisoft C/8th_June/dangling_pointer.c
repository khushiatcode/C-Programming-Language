
// Type 2 
// Dangling Pointer

//Dangling pointers arise

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = (int *)malloc(sizeof(int));

    //
    //
    ptr = NULL;
}