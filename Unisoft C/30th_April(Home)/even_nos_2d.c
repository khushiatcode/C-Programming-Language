#include<stdio.h>

void main()
{
    int a[3][3], i, j;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            printf("Enter a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }

    printf("Printing even nos.");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                printf("%d ", a[i][j]);
            }
        }   
}