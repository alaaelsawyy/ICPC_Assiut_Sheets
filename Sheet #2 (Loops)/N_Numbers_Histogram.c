#include <stdio.h>
 
int main() {
    char character;
    int n, repetitions;
 
    scanf("%c %d", &character, &n);  // Read the character and the number of lines from the user
 
    for (int i = 0; i < n; i++) {    
        scanf("%d", &repetitions);   // Read the number of repetitions for the current line
        for (int j = 0; j < repetitions; j++) {
            printf("%c", character);  // Print the character the specified number of times
        }
        printf("\n");
    }
 
    return 0;
}