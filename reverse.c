#include<stdio.h>
int main(){
    int n = 1234;
    int r, s = 0;

    while (n > 0) {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    printf("Reversed number: %d\n", s);
    return 0;
}
