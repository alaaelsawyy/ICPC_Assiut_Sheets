#include <stdio.h>
 
#define MAX_SIZE 1000005  // Maximum size for the result array
 
// Array to store results for a single test case
int result[MAX_SIZE];
 
int main() {
    long long testCases;
    
    // Read the number of test cases
    scanf("%lld", &testCases);
 
    // Process each test case
    while (testCases--) {
        long long maxNumber, targetSum;
        
        // Read the maximum number and the target sum
        scanf("%lld %lld", &maxNumber, &targetSum);
 
        // Calculate the maximum possible sum of the first `maxNumber` natural numbers
        long long maxPossibleSum = maxNumber * (maxNumber + 1) / 2;
 
        // If the maximum possible sum is less than the target sum, print -1
        if (maxPossibleSum < targetSum) {
            printf("-1\n");
            continue;  // Move to the next test case
        }
 
        // Initialize variables for summing numbers and tracking count
        long long currentSum = 0;
        int count = 0;
        
        // Iterate from maxNumber down to 1
        for (long long i = maxNumber; i >= 1; i--) {
            // If adding the current number does not exceed the target sum
            if (currentSum + i <= targetSum) {
                currentSum += i;  // Add the number to the current sum
                result[count++] = i;  // Store the number in the result array
            }
            // If the current sum matches the target sum, exit the loop
            if (currentSum == targetSum) {
                break;
            }
        }
 
        // Output the numbers that sum up to the target sum
        for (int i = 0; i < count; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");  // Print a new line after the results for the current test case
    }
 
    return 0;
}