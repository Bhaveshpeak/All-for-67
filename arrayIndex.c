#include <stdio.h>
int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array values: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("a[%d]: %d \n", i, a[i]);
    }
    return 0;
}