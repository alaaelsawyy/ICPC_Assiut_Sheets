#include <stdio.h>
 
// Function to calculate the sum of numbers in a given range
static long long GetSumOfNumbersInRange(long long l, long long r)
{
    long long minNumber = (l < r) ? l : r;
    long long maxNumber = (l > r) ? l : r;
 
    return ((maxNumber - minNumber + 1) * (minNumber + maxNumber)) / 2;
}
 
int main()
{
    int testCases = 0;
    
    // Read the number of test cases
    scanf("%d", &testCases);
 
    long long l, r;
 
    // Process each test case
    while (testCases-- > 0)
    {
        // Read the range values
        scanf("%lld %lld", &l, &r);
        
        // Output the sum of numbers in the given range
        printf("%lld\n", GetSumOfNumbersInRange(l, r));
    }
 
    return 0;
}