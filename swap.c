#include<stdio.h>
int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main()
{
    int x = 10 , y = 20;
    
    int result = swap(&x,&y);
    printf("The Swap: %d %d\n", x,y);

    return 0;

}