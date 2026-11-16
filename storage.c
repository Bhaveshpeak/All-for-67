#include<stdio.h>
int n2;
int main()
{
    auto int n1 = 10;
    extern int n2;
    static int n3;
    register int n4 = 5;

    printf("Automatic variable = %d\n", n1);
    printf("External variable = %d\n", n2);
    printf("Static variable = %d\n", n3);
    printf("Register variable = %d\n", n4);
    return 0;
}