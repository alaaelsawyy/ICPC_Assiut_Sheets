#include <stdio.h>
 
int main() {
    
    int i, num, isPrime;
    // Initialize isPrime to 1 (assuming the number is prime until proven otherwise)
    isPrime = 1;
 
    scanf("%d", &num);
 
    if (num > 1) {
        // Iterate from 2 to the square root of the number (optimization)
        for (i = 2; i * i <= num; i++) {
            // If the number is divisible by any number between 2 and its square root, it's not prime
            if (num % i == 0) {
                isPrime = 0;
                break; // Exit the loop early since the number is not prime
            }
        }
 
        // Check if the number is prime based on the loop result
        if (isPrime == 1) {
            printf("YES"); 
        } else {
            printf("NO");
        }
    } else {
        // Handle the case of numbers less than or equal to 1 (not prime)
        printf("NO");
    }
 
    return 0;
}