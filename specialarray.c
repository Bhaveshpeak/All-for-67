#include <stdio.h>

int main() {
    int a[5];

    printf("Enter array elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("a[%d] := %d\n", i, a[i]);
    }
    printf("\n");

    return 0;
}