#include <stdio.h>
 
// Function to count how many times a number can be divided by 2
static long CountDivisionsBy2(long long number)
{
    long counter = 0;
 
    // Continue dividing the number by 2 while it is even
    while (number % 2 == 0 && number != 0)
    {
        number /= 2;  // Divide the number by 2
        counter++;    // Increment the counter for each division
    }
 
    return counter;  // Return the total count of divisions
}
 
int main()
{
    long n;
    
    // Read the number of integers to process
    scanf("%ld", &n);
 
    long long number;
    long maxTimes = 0;  // Initialize the maximum number of divisions
 
    // Process each integer
    while (n-- > 0)
    {
        scanf("%lld", &number);  // Read the current number
        long divisions = CountDivisionsBy2(number);  // Get the number of divisions by 2
        if (divisions > maxTimes)
        {
            maxTimes = divisions;  // Update maxTimes if current divisions is greater
        }
    }
 
    // Output the maximum number of times any number can be divided by 2
    printf("%ld\n", maxTimes);
 
    return 0;
}