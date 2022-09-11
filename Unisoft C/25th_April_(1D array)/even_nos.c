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

    for(i=0; i<=n-1; i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
        }
    }
}