#include <stdio.h>
#include <math.h>
 
int main()
{
    int t, bin, num, sum, i, j;
 
    // Read the number of test cases
    scanf("%d", &t);
 
    // Iterate over each test case
    for (i = 0; i < t; i++)
    {
        // Read the integer for the current test case
        scanf("%d", &num);
 
        sum = 0; // Initialize sum to 0
        j = 0;   // Initialize bit position counter to 0
 
        // Convert the number to binary and process each bit
        while (num)
        {
            // Get the least significant bit (0 or 1)
            bin = num % 2;
            // Remove the least significant bit
            num /= 2;
 
            // If the bit is 1, calculate its value in decimal and add to sum
            if (bin)
            {
                sum += pow(2, j);
                j++; // Move to the next bit position
            }
        }
 
        // Output the result for the current test case
        printf("%d\n", sum);
    }
 
    return 0;
}