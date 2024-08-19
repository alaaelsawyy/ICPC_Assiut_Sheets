#include <stdio.h>

int main() {
float num1, num2;

scanf("%f %f",&num1,&num2);
if (num1 > 0 && num2 > 0)
   printf("Q1");
else if (num1 < 0 && num2 < 0)
   printf("Q3");
else if (num1 > 0 && num2 < 0)
   printf("Q4");
else if (num1 < 0 && num2 > 0)
   printf("Q2");
else if (num1 == 0 && num2 == 0)
   printf("Origem");
else if (num1 > 0 || num1 < 0 && num2 ==0.0)
   printf("Eixo X");
else if (num1 == 0.0 && num2 > 0 || num2 < 0)
   printf("Eixo Y");
    return 0;
}