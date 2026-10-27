
#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum = 0;

    printf("Enter 9 numbers:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum = sum + arr[i][i];
    }

    printf("Diagonal sum = %d\n", sum);

    return 0;
}
