#include <stdio.h>
#include <math.h>

int main()
{
float num1, num2;
scanf("%f %f",&num1, &num2);
printf("floor %.0f / %.0f = %.0f",num1, num2,floor(num1/num2));  
printf("\nceil %.0f / %.0f = %.0f",num1, num2,ceil(num1/num2));
printf("\nround %.0f / %.0f = %.0f",num1, num2,round(num1/num2));

return 0;
}

/*
%f: This is a format specifier for floating-point numbers. It tells printf to expect a floating-point value as an argument and to print it in decimal notation.
.: This separates the width and precision specifiers.
0: This is the precision specifier. It indicates the number of digits to be printed after the decimal point. In this case, 0 means no digits after the decimal point*/
