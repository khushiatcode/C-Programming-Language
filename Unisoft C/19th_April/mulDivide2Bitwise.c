#include<stdio.h>

void main() 
{
    int n, m;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Multiplication by 2: %d", n<<1);
    printf("\nQuotient when divided by 2: %d", n>>1);
}