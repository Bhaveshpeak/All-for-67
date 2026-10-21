#include<stdio.h>
int main()
{
    int n=153, s=0, r;
    int original = n;

    while (n>0)
    {
        r = n%10;
        s = s+(r*r*r);
        n = n/10;
    }
    if (original == s)
    {
        printf("%d an Armstrong number \n", original);
    }
    else {
        printf("%d not Armstrong number\n", original);
    }
    return 0;
}