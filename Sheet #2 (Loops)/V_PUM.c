#include <stdio.h>
 
int main(void) {
    // Declare variables
    int n;  // Number of PUM sequences to print
    int i;  // Loop counter
 
    // Read the number of sequences from the user
   // printf("Enter the number of PUM sequences: ");
    scanf("%d", &n);
 
    // Print the PUM sequences
    for (i = 1; i <= n * 4; i++) {
        if (i % 4 == 0) {
            // If i is a multiple of 4, print "PUM" followed by a newline
            printf("PUM\n");
        } else {
            // Otherwise, print the value of i followed by a space
            printf("%d ", i);
        }
    }
 
    return 0;
}