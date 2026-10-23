
#include <stdio.h>

#define MAX 256

int main()
{
    char ch;
    char s[MAX];
    char sen[MAX];

    scanf(" %c", &ch);
    scanf("%255s", s);
    scanf(" %255[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
