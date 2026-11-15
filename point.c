#include <stdio.h>

void change(int *n)
{
    *n = 100;
}

int main()
{
    int x = 10;

    change(&x);

    printf("%d", x);

    return 0;
}