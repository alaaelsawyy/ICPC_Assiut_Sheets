#include <stdio.h>
 
int main() {
    long long num1, num2, num3, result, arthimatic = 0;
    long long myResult1, myResult2, myResult3, myResult4, myResult5, myResult6;
 
    // Read four numbers from the user
    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &result);
 
    // Calculate all possible combinations of the given numbers
    myResult1 = (num1 * num2) - num3;
    myResult2 = (num1 * num2) + num3;
    myResult3 = num1 + (num2 * num3);
    myResult4 = num1 - (num2 * num3);
    myResult5 = (num1 - num2) + num3;
    myResult6 = (num1 + num2) - num3;
 
    // Check if any calculated result matches the given result
    if (myResult1 == result || myResult2 == result || myResult3 == result ||
        myResult4 == result || myResult5 == result || myResult6 == result) {
        arthimatic = 1;
    }
 
    // Print the result based on the flag value
    if (arthimatic == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
 
    return 0;
}