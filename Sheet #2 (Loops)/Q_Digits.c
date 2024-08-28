#include <stdio.h>
 
int main() {
    int n, num;
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
 
        if (num == 0) {
            printf("0 ");
        } else {              // Print the digits in reverse order.
            while (num > 0) {
                printf("%d ", num % 10);      // Prints the last digit of num.
                num /= 10;         // Removes the last digit from num by dividing by 10 and discarding the remainder.
            }
        }
 
        printf("\n");
    }
 
    return 0;
}