#include <stdio.h>
 
int main()
{
long long int num1, num2;

scanf("%lld %lld",&num1, &num2);        // Enter Two Seperated Numbers
 
if(num1%num2 == 0 || num2%num1 == 0)
{
    printf("Multiples");
}
else
{
    printf("No Multiples");
}

return 0;
}