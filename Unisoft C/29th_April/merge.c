// with three arrays

#include<stdio.h>

void main()
{
    int m, arr1[100], i;
    int n, arr2[100], arr3[200];

    printf("Enter the number of elements you want to enter in arr1:");
    scanf("%d", &m);

    for(i=0; i<=m-1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements you want to enter in arr2:");
    scanf("%d", &n);

    for(i=0; i<= n-1; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    printf("Arrays entered successfully");

 
    for ( i = 0; i < m; i++)
    {
        arr3[i]=arr1[i];
    }
    for (i = 0; i< n; i++)
    {
        arr3[i+m]=arr2[i];
    }
    for(i=0; i<n+m; i++)
    {
        printf(" %d ", arr3[i]);
    }    

}