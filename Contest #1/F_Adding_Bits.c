#include <stdio.h>
 
int main() {
    int a, b, c; 
 
    // Read two integers from the user
    scanf("%d %d", &a, &b);
 
    // Calculate the bitwise XOR of a and b
    c = a ^ b;
 
    // Print the result
    printf("%d", c);
 
    return 0;
}