#include <stdio.h>
#include <limits.h>
 
int main() {
    long long a, b, c;
 
    // Read input values
    scanf("%lld %lld %lld", &a, &b, &c);
 
    // Check if a * b can fit in long long
    // If a and b are non-zero and their product would exceed LLONG_MAX, result would be a double
    if (a != 0 && b != 0 && (a > LLONG_MAX / b)) {
        printf("double\n");
        return 0;
    }
 
    // Calculate the numerator of the expression
    long long numerator = a * b;
 
    // Check if the divisor is non-zero to avoid division by zero
    if (c != 0) {
        // Check if there is a fractional part
        if (numerator % c != 0) {
            printf("double\n");
        } else {
            // Perform integer division and check if the result fits in int
            long long result = numerator / c;
            if (result >= INT_MIN && result <= INT_MAX) {
                printf("int\n");
            } else {
                printf("long long\n");
            }
        }
    } else {
        // Handle division by zero case
        printf("undefined\n");  // or handle it as a
}
 return 0;
}