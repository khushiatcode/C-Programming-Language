#include<stdio.h>

void main()
{
    int arr[20][20], i,j, m,n;

    printf("Enter the number of rows you wish to enter: ");
    scanf("%d", &m);

    printf("Enter the number of columns you wish to enter: ");
    scanf("%d", &n);

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    

    for(i=m-1; i>=0; i--)
    {
        printf("\n");
        for(j=n-1; j>=0; j--)
        {
            printf("%d\t", arr[i][j]);
        }
    }
}