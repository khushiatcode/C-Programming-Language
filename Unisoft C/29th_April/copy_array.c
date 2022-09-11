#include<stdio.h>

void main()
{
    int n, arr1[n], i, arr2[n];

    printf("Enter the number of elements you want to enter:");
    scanf("%d", &n);

    for(i=0; i<=n-1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(i=0; i<=n-1; i++)
    {
        arr2[i] = arr1[i];
    }

    for(i=0; i<=n-1; i++)
    {
        printf("%d", arr2[i]);
    }
}