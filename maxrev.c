#include <stdio.h>
int main()
{
    int a[3], i, max = 0;
    printf("Enter your 3 numbers: ");
    for (i = 0; i < 3; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < 3; i++)
    if (a[i] > max)
    max = a[i];
    printf("The MAX number is: %d\n", max);

return 0;
    

}