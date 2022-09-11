#include<stdio.h>

void main()
{
    int a1[3][3], a2[3][3], sum[3][3], i,j;

    //take input for a1
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter a1[%d][%d]: ", i,j);
            scanf("%d", &a1[i][j]);
        }
    }

    printf("\n");

    //take input for a2
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter a2[%d][%d]: ", i,j);
            scanf("%d", &a2[i][j]);
        }
    }

    //add a1 and a2
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            sum[i][j] = a1[i][j] + a2[i][j];
        }
    }

    printf("\n");

    //displaying the sum
    printf("Sum of a1 and a2");
    for (i=0; i<3; i++)
    {
        printf("\n");
        for (j=0; j<3; j++)
        {
            printf("%d  ", sum[i][j]);
        }
    }
}
