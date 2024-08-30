#include <stdio.h>
#include <limits.h>  // For LLONG_MAX
 
int main()
{
    int n, k;
    
    // Read the number of elements (n) and the chunk size (k)
    scanf("%d %d", &n, &k);
 
    long long number;
    long long minimum = LLONG_MAX;  // Initialize minimum with the maximum value for long long
 
    int counter = 0;
 
    // Loop through each element
    for (int i = 1; i <= n; i++)
    {
        // Read the current number
        scanf("%lld", &number);
 
        // Update minimum value for the current chunk
        if (number < minimum)
            minimum = number;
 
        // Every k elements or at the end of the input
        if (++counter == k || i == n)
        {
            // Print the minimum value for the current chunk
            printf("%lld ", minimum);
 
            // Reset minimum and counter for the next chunk
            minimum = LLONG_MAX;
            counter = 0;
        }
    }
 
    return 0;
}