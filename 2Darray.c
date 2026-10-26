#include <stdio.h>

int main()
{
    int a[2][2], i, j;

    printf("Enter 4 elements:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The 2D array is:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}