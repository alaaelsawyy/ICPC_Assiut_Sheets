#include<stdio.h>
 
int main()
{
long long int X,Y,summation,multiplication,subtraction;
 
scanf("%lld %lld",&X , &Y);       // Enter Two Seperated Numbers
 
printf("%lld + %lld = %lld\n",X,Y, X + Y);
printf("%lld * %lld = %lld\n",X,Y, X * Y);
printf("%lld - %lld = %lld",X,Y,X - Y);
return 0;
}