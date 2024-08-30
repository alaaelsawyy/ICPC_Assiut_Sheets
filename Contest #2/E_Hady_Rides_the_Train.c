#include <stdio.h>
 
int main()
{
    long long id;
    
    // Read the input value for id
    scanf("%lld", &id);
 
    // Calculate the row number and column number
    long long rowNumber = id / 4;
    short columnNumber = id % 4;
 
    // Adjust the column number based on the row number
    if (rowNumber % 2 != 0)
        columnNumber = 3 - columnNumber;
 
    // Output the result
    printf("%lld %d\n", rowNumber, columnNumber);
 
    return 0;
}