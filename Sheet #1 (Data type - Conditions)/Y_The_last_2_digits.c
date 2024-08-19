#include <stdio.h>

int main() {
   
    int num1, num2, num3, num4;

    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Take the last two digits of each number
    num1 %= 100;
    num2 %= 100;
    num3 %= 100;
    num4 %= 100;

    // Calculate the product of the four numbers
    long long result = num1 * num2 * num3 * num4;

    // Extract the last two digits of the product
    int lastTwoDigits = result % 100;

    // Print the last two digits with leading zero if necessary
    if (lastTwoDigits < 10) {
        printf("0%d", lastTwoDigits);
    } else {
        printf("%d", lastTwoDigits);
    }

    return 0;
}