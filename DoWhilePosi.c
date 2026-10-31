#include <stdio.h>
int main()
{
  int n;
do{
printf("enter your number: ");
scanf("%d", &n);
}while (n<=0);
printf("Your number is positive: %d\n", n);
return 0;
}
