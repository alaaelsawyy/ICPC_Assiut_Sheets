#include <stdio.h>

int main() {
    float num;

    scanf("%f", &num);

    int integerPart = (int)num;     /*Converts the floating-point number num to an integer and stores it in integerPart.
                                        The (int) cast explicitly converts num to an integer, discarding the decimal part.*/

    float decimalPart = num - integerPart;      // Calculates the decimal part of the number by subtracting the integer part from the original number

    if (decimalPart == 0.0) {
        printf("int %d", integerPart);
    } else {
        printf("float %d %.6f", integerPart, decimalPart);
    }

    return 0;
}
