#include<stdio.h>  

void main()    
{    
int a=5, b=2; 

printf("Before interchanging a=%d b=%d",a,b);  

a=a+b;      //a=7 (5+2)    
b=a-b;      //b=5 (7-2)    
a=a-b;      //a=2 (7-5)    

printf("\nAfter interchanging a=%d b=%d",a,b);    
  
}   