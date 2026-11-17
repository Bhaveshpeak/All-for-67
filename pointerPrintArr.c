#include <stdio.h>
void printArray(int *p, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", *(p + i));
    }
    printf("\n");
    return 0;
}
int main()
{
    int *p, arr[5] = {10, 20, 30, 40, 50};
    p = arr;
    printArray(p, 5);
    return 0;
}