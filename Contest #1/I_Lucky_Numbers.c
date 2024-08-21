#include <stdio.h>
 
int main() {
    char x[3];
    scanf("%2s", x);
 
    int z = x[0] - '0'; // Convert the first character to an integer
    int c = x[1] - '0'; // Convert the second character to an integer
 
    if (c == 0) {
        printf("YES\n");
    } else if (z % c == 0 || c % z == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}