#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100001];
    scanf("%100000s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ',') {
            printf(" ");
        } else if (islower(s[i])) {
            printf("%c", toupper(s[i]));
        } else if (isupper(s[i])) {
            printf("%c", tolower(s[i]));
        } else {
            printf("%c", s[i]);
        }
    }

    printf("\n");

    return 0;
}