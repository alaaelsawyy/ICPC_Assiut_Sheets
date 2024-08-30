#include <stdio.h>
 
int main()
{
    short n;
    
    // Read an integer value from user input
    scanf("%hd", &n);
 
    // Loop through each row
    for (short i = 0; i < n; i++)
    {
        // Loop through each column
        for (short j = 0; j < n; j++)
        {
            // Check if the current position is the center of the matrix
            if (i == (n / 2) && j == (n / 2))
                printf("X");  // Print 'X' at the center
            
            // Check if the current position is on the main diagonal
            else if (i == j)
                printf("\\"); // Print '\' on the main diagonal
            
            // Check if the current position is on the anti-diagonal
            else if (i == n - j - 1)
                printf("/");  // Print '/' on the anti-diagonal
            
            // Default case for all other positions
            else
                printf("*");  // Print '*' for all other positions
        }
        // Move to the next line after finishing the current row
        printf("\n");
    }
    
    return 0;
}