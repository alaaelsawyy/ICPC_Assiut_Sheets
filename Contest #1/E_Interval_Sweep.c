#include <stdio.h>
#include <math.h>
 
int main() {
    int num1, num2; // Declare two integer variables to store the input numbers
 
    // Read two integers from the user
    scanf("%d %d", &num1, &num2);
 
    // Check if both numbers are zero or the absolute difference between them is greater than or equal to 2
    if ((num1 == 0 && num2 == 0) || abs(num1 - num2) >= 2) {
        printf("NO\n"); // Print "NO" if the condition is true
    } else {
        printf("YES\n"); // Print "YES" if the condition is false
    }
 
    return 0; // Indicate successful program termination
}