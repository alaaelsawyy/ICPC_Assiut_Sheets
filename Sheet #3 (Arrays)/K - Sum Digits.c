#include <stdio.h>
 
int main() {
    
    int n;
    scanf("%d", &n);
 
    char digits[n + 1]; // +1 for null terminator
    scanf("%s", digits);
 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += digits[i] - '0'; // Convert char to int
    }
 
    printf("%d\n", sum);
    return 0;
}