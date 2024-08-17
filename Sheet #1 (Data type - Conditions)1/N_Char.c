#include <stdio.h>
#include <ctype.h>
 
int main() {
    char x;
    scanf(" %c", &x);
 
    if (isalpha(x)) {
        if (isupper(x)) {
            printf("%c", tolower(x));
        } else {
            printf("%c", toupper(x));
        }
    } else {
        printf("NOT ALPHA\n");
    }
 
    return 0;
}