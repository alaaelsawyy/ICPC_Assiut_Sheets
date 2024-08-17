#include <stdio.h>
#include <ctype.h>
 
int main() {
    char x;
    scanf(" %c", &x);
 
    if (isdigit(x)) {
        printf("IS DIGIT\n");
    } else if (isalpha(x)) {
        if (isupper(x)) {
            printf("ALPHA\nIS CAPITAL\n");
        } else {
            printf("ALPHA\nIS SMALL\n");
        }
    } else {
        printf("NOT ALPHA\n");
    }
 
    return 0;
}