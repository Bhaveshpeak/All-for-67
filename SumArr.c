#include <stdio.h>

int main(void)
{
    int a[5], i, sum = 0;

    printf("Enter the numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Here is the sum of your array: %d\n", sum);
    return 0;
}
