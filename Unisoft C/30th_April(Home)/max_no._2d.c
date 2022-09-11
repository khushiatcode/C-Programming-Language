#include<stdio.h>

void main()
{
    int a[3][3], i,j, max=0, min=0;

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            printf("Enter a[%d][%d]: ", i,j);
            scanf("%d", &a[i][j]);
        }

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            if(a[i][j] > max) 
            {
                max = a[i][j];
            }

            if(a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    printf("Max element is: ", max);
    printf("Min element is: ", min);   
}