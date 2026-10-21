#include <stdio.h>

int main() {
    int n = 121;
    int original = n;
    int r, s = 0;

    while (n > 0) {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }

    if (original == s) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}