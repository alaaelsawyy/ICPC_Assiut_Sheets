#include <stdio.h>
 
int main()
{
long long int num1, num2;
scanf("%lld %lld",&num1, &num2);   // Enter Two Seperated Numbers

if (num1 >= num2)
{
   printf("Yes");
}
else
{
   printf("No");
}
return 0;
}