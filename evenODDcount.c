#include <stdio.h>
int main()
{
    int a[3], i, even = 0, odd = 0;
    printf("Enter your 3 numbers: ");
    for (i = 0; i < 3; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < 3; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("The number of even numbers is: %d\n", even);
    printf("The number of odd numbers is: %d\n", odd);
    return 0;
}