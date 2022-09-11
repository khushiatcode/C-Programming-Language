#include<stdio.h>

void main()
{
    int n, arr[n], i;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    for(i=0; i<=n-1; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i=n-1; i>=0; i--) 
    {
        printf("%d", arr[i]);
    }
}