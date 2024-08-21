#include <stdio.h>
 
int main() {
    char letter;
    scanf("%c", &letter);
 
    if (letter == 'z') {
        printf("a\n");
    } else {
        letter++;
        printf("%c\n", letter);
    }
    return 0;
}