#include <stdio.h>
#include <stdbool.h>
 
// Checks if a number is lucky (contains only 4s and 7s)
bool isLucky(int num) {
    while (num > 0) {
        if (num % 10 != 4 && num % 10 != 7) {
            return false; // Not a lucky number
        }
        num /= 10; // Remove the last digit
    }
    return true; // All digits are 4s or 7s
}
 
// Finds and prints lucky numbers within a given range
int main() {
    int a, b;
 
    // Read the input numbers
    scanf("%d %d", &a, &b);
 
    // Check for lucky numbers and print them
    bool foundLucky = false;
    for (int i = a; i <= b; i++) {
        if (isLucky(i)) {
            printf("%d ", i);
            foundLucky = true;
        }
    }
 
    // Print -1 if no lucky numbers were found
    if (!foundLucky) {
        printf("-1");
    }
 
    return 0;
}