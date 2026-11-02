#include <stdio.h>
int squaresum(int a, int b)
{
    return (a * a) + (b * b);
}
int main()
{
    int p, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &p, &z);
    int final = squaresum(p,z);
    printf("The result of sum of squares : %d\n", final);
    return 0;
}