#include <stdio.h>
int Max(int *p, int size)
    {
        int max = *p;
        for(int i = 0; i < size; i++)
        {
            if(*(p + i) > max)
            {
                max = *(p + i);
            }
        }
        return max;
    }
int main()
{
    int arr[5] = {12, 45, 7, 89, 23};
    int *p = arr;
    int max = Max(p, 5);
    printf("Largest value in the array is: %d\n", max);
    return 0;
}