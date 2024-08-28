#include <stdio.h>
 
int main() {
 
    // Read the number of test cases
    int counter;
    scanf("%d", &counter);
 
    // Process each test case
    for (int i = 1; i <= counter; i++) {
 
        // Read the number for which to calculate the factorial
        int number;
        scanf("%d", &number);
 
        // Initialize the factorial to 1
        long long factorial = 1;
 
        // Calculate the factorial
        for (int j = 1; j <= number; j++) {
            factorial *= j;
        }
 
        // Print the calculated factorial
        printf("%lld\n", factorial);
    }
 
    return 0;
}