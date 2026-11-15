#include <stdio.h>

int x = 100;  // Global variable

void display()
{
    int y = 20;  // Local variable
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

int main()
{
    display();

    printf("x = %d\n", x);

    return 0;
}