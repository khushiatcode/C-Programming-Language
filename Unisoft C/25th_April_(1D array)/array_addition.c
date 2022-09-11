#include<stdio.h>

void main()
{
    int n, i, arr[n], sum=0;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);


    printf("Enter the elements: ");
    for (i=0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i=0; i<=n-1; i++)
    {
        sum = sum + arr[i];
    }

    printf("%d ", sum);
}