#include <stdio.h>
 
int main(void)
{
    int n, a, b, i, x, sum_digit;
    long long int sum = 0;
 
    // Read input values
    scanf("%d %d %d", &n, &a, &b);
 
    // Iterate over each number from 1 to n
    for (i = 1; i <= n; i++)
    {
        x = i;
        sum_digit = 0;
 
        // Calculate sum of digits of the current number
        while (x)
        {
            sum_digit += x % 10;
            x /= 10;
        }
 
        // Check if sum of digits falls within the range [a, b]
        if (sum_digit >= a && sum_digit <= b)
        {
            sum += i;
        }
    }
 
    // Output the result
    printf("%lld\n", sum);
 
    return 0;
}