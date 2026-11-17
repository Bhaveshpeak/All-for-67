#include <stdio.h>
int main()
{
int arr[3] = {10, 20, 30};
int *p = arr;

p++;
*p = 99;
(*p)++;

printf("%d %d %d", arr[0], arr[1], arr[2]);
}