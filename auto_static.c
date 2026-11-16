#include <stdio.h>
void display()
{
    auto int a = 10; 
    static int s = 20;

    a++;
    s++;
    printf("Auto: %d, Static: %d\n", a, s);
    
}

int main()
{
    display();
    display();
    display();

    return 0;
}