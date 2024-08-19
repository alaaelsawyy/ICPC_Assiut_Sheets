#include <stdio.h>
 
int main()
{
    long long int num1,num2;
    scanf ("%lld %lld",&num1,&num2);           // enter two seperated numbers
    printf("%lld",(num1%10) + (num2%10));      // using the modulo operator (%) with 10 is a way to extract the last digit of any numbe
    
    return 0;
}