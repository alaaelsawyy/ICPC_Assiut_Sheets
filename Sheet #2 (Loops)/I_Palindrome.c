#include <stdio.h>
 
int main() {
    // Declare variables
    int n, num, rev = 0;
 
    // Read the input number from the user
    scanf("%d", &n);
 
    // Store the original number for comparison later
    num = n;
 
    // Reverse the number using a while loop
    while (n != 0) {
        // Extract the last digit
        rev = (rev * 10) + (n % 10);
 
        // Remove the last digit from the original number
        n /= 10;
    }
 
    // Print the reversed number
    printf("%d\n", rev);
 
    // Check if the reversed number is equal to the original number
    if (rev == num) {
        printf("YES"); // The number is a palindrome
    } else {
        printf("NO"); // The number is not a palindrome
    }
 
    return 0;
}