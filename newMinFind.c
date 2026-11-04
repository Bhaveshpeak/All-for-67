#include<stdio.h>
int main()
{
    int a[5], min, i, sec;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    sec = a[0];
    for(i = 1; i < 5; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    int found = 0;

for(i = 0; i < 5; i++)
{
    if(a[i] != min)
    {
        if(found == 0)
        {
            sec = a[i];
            found = 1;
        }
        else if(a[i] < sec)
        {
            sec = a[i];
        }
    }
}
    printf("Minimum element in the array: %d\n", min);
    printf("second min number: %d\n", sec);
    return 0;
}