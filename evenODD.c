#include <stdio.h>

int main()
{
    int a[3], i;

    printf("Enter 3 numbers: ");
    for (i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 3; i++)
    {
        if (a[i] % 2 == 0)
            printf("number a[%d] = %d is Even\n", i, a[i]);
        else
            printf("number a[%d] = %d is Odd\n", i, a[i]);
    }

    return 0;
}