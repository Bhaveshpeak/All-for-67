#include<stdio.h>
int fact(int);
int main(){
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("factorial is %d", fact(x));
    return 0;
}
int fact(int n){
    if(n <=1)
        return 1;
    else
        return n * fact(n-1);
}