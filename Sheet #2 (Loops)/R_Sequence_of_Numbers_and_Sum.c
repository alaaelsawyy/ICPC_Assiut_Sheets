#include <stdio.h>
 
int main() {
    // Declare variables to store input numbers, loop counter, sum, and temporary value for swapping
    int n, m, i, sum, tmp;
    // Create an infinite loop to continue until user input is invalid
    while (1) {
        // Read two integers from the user
        scanf("%d %d", &n, &m);
        // Check if either number is non-positive
        if (n <= 0 || m <= 0) {
            // Exit the program if invalid input is encountered
            return 0;
        }
        // Swap the values of n and m if n is greater than m
        if (n > m) {
            // Use a temporary variable to avoid data loss during swapping
            tmp = n;
            n = m;
            m = tmp;
        }
        // Initialize the sum to 0
        sum = 0;
 
        // Iterate from n to m, printing each number and adding it to the sum
        for (i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }
 
    return 0;
}