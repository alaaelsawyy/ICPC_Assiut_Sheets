#include <stdio.h>
 
int main()
{
    int k, s, c = 0, i, j;
 
    // Read the values for k and s from the input
    scanf("%d %d", &k, &s);
 
    // Initialize counter to count the number of valid (i, j, z) triplets
    c = 0;
 
    // Iterate over all possible values of i from 0 to k
    for (i = 0; i <= k; i++)
    {
        // Iterate over all possible values of j from 0 to k
        for (j = 0; j <= k; j++)
        {
            // Calculate z = s - i - j
            // Check if z is within the valid range [0, k]
            if (s - i - j >= 0 && s - i - j <= k)
            {
                // Increment the counter if the condition is satisfied
                c++;
            }
        }
    }
 
    // Output the total count of valid (i, j, z) triplets
    printf("%d", c);
 
    return 0;
}