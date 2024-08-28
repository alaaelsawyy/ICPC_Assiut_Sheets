#include <stdio.h>
 
int main() {
 
    int n;
 
    // Read the value of i from the user
    scanf("%d", &n);
 
    // Outer loop iterates from i to 12
    for (int i = 1; i <= 12; i++) {
 
    printf("%d * %d = %d\n", n, i, n * i);
        
    }
 
    return 0;
}