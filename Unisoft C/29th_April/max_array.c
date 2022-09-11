#include<stdio.h>

void main()
{
    int n, arr[n], i, max = arr[0], min = arr[0];

    printf("Enter the number of elements you want to enter:");
    scanf("%d", &n);

    for(i=0; i<=n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<=n-1; i++) 
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("max value is %d", max);
    printf("min value is %d", min);
}
